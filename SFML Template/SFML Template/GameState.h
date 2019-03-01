#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "State.h"
#include "Game.h"
#include "Pipe.h"
#include "Land.h"
#include "Bird.h"
#include "Collision.h"
#include "Flash.h"
#include "HUD.h"
using namespace sf;
namespace ComputerGraphics
{
	class GameState : public State
	{
	public:
		GameState(GameDataRef data);
		void Init();
		void HandleInput();
		void Update(float dt);
		void Draw(float dt);
	private:
		GameDataRef _data;
		Texture _backgroundTexture;
		Sprite _background;
		Pipe *pipe;
		Clock clock;
		Land *land;
		Bird *bird;
		Collision collision;
		Flash *flash;
		HUD *hud;
		int _gameState;
		int _score;
		SoundBuffer _hitSoundBuffer;
		SoundBuffer _wingSoundBuffer;
		SoundBuffer _pointSoundBuffer;
		Sound _hitSound;
		Sound _wingSound;
		Sound _pointSound;
	};
}