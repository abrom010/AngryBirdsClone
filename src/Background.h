#pragma once

#include "GameObject.h"

class Background
{
private:
	GameObject gameObject;
public:
	GameObject getGameObject();
	Background(const std::string filePath, const sf::Vector2u windowSize);
	void scaleToWindow(sf::Vector2u windowSize);
};