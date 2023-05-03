#include "GameObject.h"

GameObject::GameObject(const std::string filePath)
{
	this->texture.loadFromFile(filePath);
	this->sprite.setTexture(this->texture);
};

sf::Texture GameObject::getTexture()
{
	return this->texture;
}

sf::Sprite GameObject::getSprite()
{
	return this->sprite;
}