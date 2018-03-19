#include <iostream>
#include <vector>
#include <fstream>

#include <SFML/Graphics.hpp>

#include "maps/map.hh"

int main(void)
{
  sf::VideoMode desktopmode = sf::VideoMode::getDesktopMode(); //Get current screen info
  sf::RenderWindow window(desktopmode, "SFML works!", sf::Style::Titlebar); //Create window
  MapInfo *a = new MapInfo("src/maps/spawn.map");
  a = a;
  while(window.isOpen())
  {
    sf::Event event;
    while(window.pollEvent(event))
    {
      if (event.type == sf::Event::Closed)
        window.close();
    }
    window.clear();
    window.display();
  }
  return 0;
}
