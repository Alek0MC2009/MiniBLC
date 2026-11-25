#include "Hitbox.h"
Hitbox::Hitbox(int x, int y, int width, int height)
	: x(x), y(y), width(width), height(height) {
}
int Hitbox::GetX() const {
	return x;
}

int Hitbox::GetY() const {
	return y;
}

int Hitbox::GetWidth() const {
	return width;
}

int Hitbox::GetHeight() const {
	return height;
}

void Hitbox::SetX(int newX) {
	x = newX;
}

void Hitbox::SetY(int newY) {
	y = newY;
}

void Hitbox::SetWidth(int newWidth) {
	width = newWidth;
}
void Hitbox::SetHeight(int newHeight) {
	height = newHeight;
}

