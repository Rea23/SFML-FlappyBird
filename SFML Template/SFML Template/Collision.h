#pragma once
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;
namespace ComputerGraphics
{
	class Collision
	{
	public:
		Collision();
		bool CheckSpriteCollision(Sprite sprite1, Sprite sprite2);
		bool CheckSpriteCollision(Sprite sprite1, float scale1, Sprite sprite2, float scale2);
	};
}
