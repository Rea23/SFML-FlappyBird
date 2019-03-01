#pragma once
#include <SFML\Graphics.hpp>
#include "Game.h"
#include "DEFINITIONS.h"

namespace ComputerGraphics 
{
	class Flash 
	{
	public:
		Flash(GameDataRef data);
		void Show(float dt);
		void Draw();
	private:
		GameDataRef _data;
		RectangleShape _shape;
		bool _flashOn;
	};
}