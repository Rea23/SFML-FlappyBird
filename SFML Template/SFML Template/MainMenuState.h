#pragma once
#include <SFML/Graphics.hpp>
#include "State.h"
#include "Game.h"
using namespace sf;
namespace ComputerGraphics
{
	class MainMenuState : public State
	{
	public:
		MainMenuState(GameDataRef data);
		void Init();
		void HandleInput();
		void Update(float dt);
		void Draw(float dt);
	private:
		GameDataRef _data;
		Texture _backgroundTexture;
		Sprite _background;
		Sprite _title;
		Sprite _playButton;
	};
}