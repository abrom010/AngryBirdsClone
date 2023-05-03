#include "Background.h"

GameObject Background::getGameObject()
{
	return this->gameObject;
}

Background::Background(const std::string filePath, const sf::Vector2u windowSize)
	: gameObject(filePath)
{
	this->scaleToWindow(windowSize);
};

void Background::scaleToWindow(const sf::Vector2u windowSize)
{
	sf::Vector2u spriteSize = this->getGameObject().getTexture().getSize();
	float x = (float)windowSize.x / spriteSize.x;
	float y = (float)windowSize.y / spriteSize.y;
	this->getGameObject.getSprite().setScale(x, y);
}
