#include <SFML/Graphics.hpp>
#include "sprite.h"
#include "sprites.h"

int main()
{
	sf::ContextSettings settings;
	settings.antiAliasingLevel = 4;

	sf::VideoMode videomode({ 800, 600 });

	const char* title = "Ninja Roy Maker";

	sf::RenderWindow window(videomode, title, sf::Style::Default, sf::State::Windowed, settings);
	window.setFramerateLimit(60);

	std::vector<sf::Shape> to_draw;

	while (window.isOpen())
	{
		while(const std::optional event = window.pollEvent())
		{
			if (event->is<sf::Event::Closed>())
				window.close();

			if(const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
			{
				switch (keyPressed->scancode)
				{
				case sf::Keyboard::Scan::Escape:
					window.close();
					break;
				}
				break;
			}
		}

		window.clear(sf::Color(64, 64, 64));

		for (const sf::Shape& i : to_draw)
		{
			window.draw(i);
		}
		

		window.display();
	}
}
