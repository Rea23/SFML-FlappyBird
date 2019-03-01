#include "AssetManager.h"

using namespace std;

namespace ComputerGraphics
{
	void AssetManager::LoadTexture(string name, string fileName)
	{
		sf::Texture tex;

		if (tex.loadFromFile(fileName))
		{
			this->_textures[name] = tex;
		}
	}

	sf::Texture &AssetManager::GetTexture(string name)
	{
		return this->_textures.at(name);
	}

	void AssetManager::LoadFont(string name, string fileName)
	{
		sf::Font font;

		if (font.loadFromFile(fileName))
		{
			this->_fonts[name] = font;
		}
	}

	sf::Font &AssetManager::GetFont(string name)
	{
		return this->_fonts.at(name);
	}
}