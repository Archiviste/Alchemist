#pragma once

class MapInfo
{
  public:
    MapInfo(const std::string filepath);
    ~MapInfo();
  private:
    int map_[12][12];
    std::vector<std::string> exits_;
    std::vector<sf::Texture> textures_;
};

#include "map.cc"
