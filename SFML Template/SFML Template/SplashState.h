#pragma once
#include <SFML/Graphics.hpp>
#include "State.h"
#include "Game.h"
using namespace sf;
namespace ComputerGraphics 
{
	class SplashState : public State 
	{
	public: 
		SplashState(GameDataRef data);
		void Init();
		void HandleInput();
		void Update(float dt);
		void Draw(float dt);
	private:
		GameDataRef _data;
		Clock _clock;
		Texture _backgroundTexture;
		Sprite _background;
	};
}