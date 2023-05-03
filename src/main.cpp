#include <SFML/Graphics.hpp>
#include <iostream>

#include "Background.h"

int main()
{

	sf::RenderWindow window(sf::VideoMode(1280, 720), "ResentfulFowl");

	sf::Vector2u windowSize = window.getSize();

	sf::Texture birdTexture;
	birdTexture.loadFromFile("assets/images/bird1.png");
	sf::Sprite bird;
	bird.setTexture(birdTexture);

	Background bg("assets/images/temple.png", window.getSize());

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		//window.draw(background);
		window.draw(bird);
		window.display();
	}

	return 0;
}