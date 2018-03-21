#include "map.hh"

MapInfo::MapInfo(const std::string filepath)
{
  std::ifstream file_in(filepath);
  if (!file_in.is_open())
  {
    std::cerr << "map file was not found" << std::endl;
    exit(2);
  }
  for (unsigned width = 0; width < mapwidth; width++)
  {
    for (unsigned height = 0; height < mapheight; height++)
    {
      std::string test;
      file_in >> test;
      int ntest = std::stoi(test);
      map_[width][height] = ntest;
    }
  }
  while (!file_in.eof())
  {
    std::string test;
    file_in >> test;
    exits_.push_back(test);
  }
}

MapInfo::~MapInfo()
{}
