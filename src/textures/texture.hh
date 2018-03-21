#pragma once

/*
 * This class is used to keep all textures in memory
 * It is launched at game start.
 */
class Texture
{
  public:
    Texture();
    sf::Texture& get_texture(short int key);
  private:
    //Store environment textures in a map
    //map has log complexity to find texture
    std::map<short int, sf::Texture> env_;
};

sf::Texture& Texture::get_texture(short int key)
{
  return std::get<1>(*(env_.find(key)));
}

/*
 * Load all textures.
 * all file names are stored in the texture.load file
 * It read the names, load texture from file, and add map it
 */
Texture::Texture()
{
  std::ifstream file_in("src/textures/texture.load");
  if (!file_in.is_open())
  {
    std::cerr << "missing texture file" << std::endl;
    exit(2);
  }
  short int count = 1;
  while(!file_in.eof())
  {
    std::string textpath;
    file_in >> textpath;
    if (textpath == "END")
      break;
    sf::Texture texture;
    if (!texture.loadFromFile(textpath))
    {
      std::cout << "Error loading texture" << std::endl;
      exit(2);
    }
    env_.insert(std::pair<short int, sf::Texture>(count, texture));
    count++;
  }
}
