#pragma once

class MapInfo
{
  public:
    MapInfo(const std::string filepath);
    ~MapInfo();
  private:
    int map_[12][12];
    std::vector<std::string> exits_;
};

#include "map.cc"
