#pragma once
class Hitbox
{
public:
	Hitbox(int x, int y, int width, int height);
	int GetX() const;
	int GetY() const;
	int GetWidth() const;
	int GetHeight() const;
	void SetX(int newX);
	void SetY(int newY);
	void SetWidth(int newWidth);
	void SetHeight(int newHeight);
	int x, y, width, height;
};

