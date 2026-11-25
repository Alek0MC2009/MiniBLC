#pragma once

#include "Engine.h"
#include "Object.h"
#include <memory>
#include <vector>

class Game : public olc::PixelGameEngine {
private:
    std::vector<std::unique_ptr<Object>> objects;

public:
    Game();

    bool OnUserCreate() override;
    bool OnUserUpdate(float fElapsedTime) override;

    template<typename T>
    T* InstanceCreate(int x, int y) {
        auto instance = std::make_unique<T>();

        T* ptr = instance.get();

        ptr->x = x;
        ptr->y = y;

        objects.push_back(std::move(instance));

        ptr->SetGame(this); // NUEVO
        ptr->Create();

        return ptr;
    }



    template<typename T>
    T* InstanceFind(int index) {
        int found = 0;

        for (auto& obj : objects) {
            T* instance = dynamic_cast<T*>(obj.get());

            if (instance != nullptr) {
                if (found == index)
                    return instance;

                found++;
            }
        }

        return nullptr;
    }
};