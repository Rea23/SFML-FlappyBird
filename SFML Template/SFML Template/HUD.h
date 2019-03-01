#pragma once
#include <SFML/Graphics.hpp>
#include "DEFINITIONS.h"
#include "Game.h"
using namespace std;
using namespace sf;

namespace ComputerGraphics 
{
	class HUD 
	{
	public:
		HUD(GameDataRef data);
		void Draw();
		void UpdateScore(int score);
	private:
		GameDataRef _data;
		Text _scoreText;
	};
}
