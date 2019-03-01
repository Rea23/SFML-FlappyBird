#pragma once
#include <SFML/Graphics.hpp>
#include "State.h"
#include "Game.h"
using namespace sf;
namespace ComputerGraphics
{
	class GameOverState : public State
	{
	public:
		GameOverState(GameDataRef data, int score);
		void Init();
		void HandleInput();
		void Update(float dt);
		void Draw(float dt);
	private:
		GameDataRef _data;
		Texture _backgroundTexture;
		Sprite _background;
		Sprite _gameOverTitle;
		Sprite _gameOverContainer;
		Sprite _retryButton;
		Sprite _medal;

		Text _scoreText;
		Text _highScoreText;
		int _score;
		int _highScore;
	};
}