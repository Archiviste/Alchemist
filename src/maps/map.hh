#pragma once

#define mapheight 16
#define mapwidth  9

class MapInfo
{
  public:
    MapInfo(const std::string filepath);
    ~MapInfo();
  private:
    int map_[mapwidth][mapheight];
    std::vector<std::string> exits_;
};

#include "map.cc"
