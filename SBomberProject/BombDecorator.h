#pragma once
#include "DynamicObject.h"
#include "Bomb.h"

class BombDecorator :
	public DynamicObject
{
public:
	BombDecorator(Bomb* bomb_) : bomb(bomb_) {}
	void Move(uint16_t time);
	void Draw() const;
	void SetPos(double nx, double ny);
	uint16_t GetWidth() const;
	void SetSpeed(double sp);
	void SetDirection(double dx, double dy);
	void SetWidth(uint16_t widthN);
	double GetY() const;
	double GetX() const;
private:
	Bomb* bomb;
};

