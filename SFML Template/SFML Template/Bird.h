#pragma once
#include <SFML/Graphics.hpp>
#include "DEFINITIONS.h"
#include "Game.h"
#include <vector>
using namespace std;
using namespace sf;

namespace ComputerGraphics
{
	class Bird
	{
	public:
		Bird(GameDataRef data);
		void DrawBird();
		void Animate(float dt);
		void Update(float dt);
		void Tap();
		const Sprite &GetSprite() const;
	private:
		GameDataRef _data;
		Sprite _birdSprite;
		vector<Texture> _animationFrames;
		unsigned int _animationIterator;
		Clock _clock;
		Clock _movementClock;
		int _birdState;
		float _rotation;
	};
}
