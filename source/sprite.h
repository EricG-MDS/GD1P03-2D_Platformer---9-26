#pragma once
#include "SFML/Graphics.hpp"
class sprite
{
public:
	int num_frames;
	const sf::Texture* current_frame;
	std::vector<sf::Texture> frames;
	std::string name;

	sprite(std::string _file_name, int _num_frames);
};

