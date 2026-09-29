#include "sprite.h"

sprite::sprite(std::string _file_name, int _num_frames)
{
	num_frames = _num_frames;
	name = _file_name;
	sf::Texture tmp_texture;
	for (char i = '0'; i <= '9'; i++)
	{	
		if (tmp_texture.loadFromFile(_file_name + i))
		{	
			frames.push_back(tmp_texture);
		}
	}
	current_frame = &frames[0];
}
