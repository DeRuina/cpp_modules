#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
  if (argc != 4)
    return(std::cout << "3 argument's needed" << std::endl, 1);

  std::string fileName = argv[1], find = argv[2], replace = argv[3];
  std::ifstream inFile(fileName.c_str());
  if (inFile.fail() || inFile.peek() == EOF)
    return(std::cout << "File is directory/is empty/failed opening" << std::endl, 1);
  std::ofstream outFile((fileName + ".replace").c_str());
  if (outFile.fail())
    return(std::cout << "Openning output file failed" << std::endl, 1);

  size_t index;
  for (std::string line; std::getline(inFile, line);)
  {
    while ((index = line.find(find)) != std::string::npos && find.compare(""))
    {
      line.erase(index, find.length());
      line.insert(index, replace);
    }
    outFile << line << std::endl;
  }
  inFile.close();
  outFile.close();
  return (0);

}
