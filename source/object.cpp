#include "Object.h"
#include "sprite.h"
#include "SFML/Graphics.hpp"
object::object(sf::Vector2f _position, sf::Vector2f _scale, sf::Vector2f _colition_bounds, sprite* _sprite)
{
	sf::RectangleShape collider(_colition_bounds);
	collider.setScale(_scale);
	collider.setSize({ _sprite->frames[1].getSize().x, _sprite->frames[1].getSize().y });
	collider.setPosition(_position);
	collider.setTexture(_sprite->current_frame);
}