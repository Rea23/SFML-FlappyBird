#pragma once

#include <map>

#include <SFML/Graphics.hpp>

using namespace std;

namespace ComputerGraphics
{
	class AssetManager
	{
	public:
		AssetManager() {}
		~AssetManager() {}

		void LoadTexture(string name, string fileName);
		sf::Texture &GetTexture(string name);

		void LoadFont(string name, string fileName);
		sf::Font &GetFont(string name);

	private:
		map<string, sf::Texture> _textures;
		map<string, sf::Font> _fonts;
	};
}