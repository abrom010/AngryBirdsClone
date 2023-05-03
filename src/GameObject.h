#pragma once

#include <SFML/Graphics.hpp>

class GameObject
{
private:
	sf::Texture texture;
	sf::Sprite sprite;

public:
	GameObject(std::string filePath);

	sf::Texture getTexture();
	sf::Sprite getSprite();
};