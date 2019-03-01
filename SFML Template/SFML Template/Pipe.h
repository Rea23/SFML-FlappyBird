#pragma once
#include <SFML/Graphics.hpp>
#include "Game.h"
#include <vector>
#include "DEFINITIONS.h"

using namespace std;
using namespace sf;

namespace ComputerGraphics
{
	class Pipe
	{
	public:
		Pipe(GameDataRef data);
		void SpawnBottomPipe();
		void SpawnTopPipe();
		void SpawnInvisiblePipe();
		void SpawnScoringPipe();
		void MovePipes(float dt);
		void DrawPipes();
		void RandomisePipeOffset();
		const vector<Sprite> &GetSprites() const;
		vector<Sprite> &GetScoringSprites();
	private:
		GameDataRef _data;
		vector<Sprite> pipeSprites;
		vector<Sprite> scoringPipes;
		int _landHeight;
		int _pipeSpawnYOffset;
	};
}