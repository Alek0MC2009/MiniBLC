#include "Collision.h"

bool Collision::Intersects(Hitbox a, Hitbox b) {
	return
		a.x < b.x + b.width &&
		a.x + a.width > b.x &&
		a.y < b.y + b.height &&
		a.y + a.height > b.y;
}

bool Collision::PlaceMeeting(Object* object, int x, int y, Object* target) {
    if (object == nullptr || target == nullptr) {
        return false;
    }

    if (object->GetSprite() == nullptr ||
        target->GetSprite() == nullptr) {
        return false;
    }

    Hitbox* objectHitbox = object->GetSprite()->getHitbox();
    Hitbox* targetHitbox = target->GetSprite()->getHitbox();

    if (objectHitbox == nullptr || targetHitbox == nullptr) {
        return false;
    }

    // Copiamos las hitboxes para no modificar las originales.
    Hitbox a = *objectHitbox;
    Hitbox b = *targetHitbox;

    // Posición hipotética del objeto.
    a.x += x - object->x;
    a.y += y - object->y;

    // Posición actual del objetivo.
    b.x += target->x;
    b.y += target->y;

    return Intersects(a, b);
}