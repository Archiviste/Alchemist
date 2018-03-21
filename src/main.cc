#include <iostream>
#include <vector>
#include <fstream>

#include <SFML/Graphics.hpp>

#include "maps/map.hh"
#include "textures/texture.hh"

int main(void)
{
  sf::VideoMode desktopmode = sf::VideoMode::getDesktopMode(); //Get current screen info
  sf::RenderWindow window(desktopmode, "SFML works!", sf::Style::Titlebar); //Create window
  MapInfo *spawn = new MapInfo("src/maps/spawn.map");
  Texture texture{};
  sf::Sprite sprite;
  sprite.setTexture(texture.get_texture(1));
  sprite.setTextureRect(sf::IntRect(240, 0, 240, 240));
  sprite.setColor(sf::Color(234,234,0));
  spawn = spawn;
  while(window.isOpen())
  {
    sf::Event event;
    while(window.pollEvent(event))
    {
      if (event.type == sf::Event::Closed)
        window.close();
    }
    window.clear();
    sprite.setPosition(480, 480);
    window.draw(sprite);
    sprite.move(sf::Vector2f(10, 1));
    window.display();
  }
  delete spawn;
  return 0;
}
