#include "grid.h"
#include "ThreeD.h"
#include <iostream>
#include <sstream>
#include <cstring>

Grid::Grid(void):
  mData(GRID_SIZE, GRID_SIZE, GRID_SIZE)
{
  
}

Grid::Grid(std::string CSV_String): Grid()
{
  
}

int Grid::getPrintWidth()
{
  return (GRID_SIZE * 4) + 1;
}

std::string Grid::getHorizontalSeparator(const int row)
{
  const char minorSep = '-';
  const char majorSep = 'x';
  char separator;
  std::stringstream output;
  if(row % 3 == 0 && row != 0)
  {
    separator = majorSep;
  }
  else
  {
    separator = minorSep;
  }
  output << std::string(getPrintWidth(), separator) << std::endl; 
  return output.str();
}

std::string Grid::print()
{
    std::stringstream output;
    std::stringstream vertSeparator;
    int i;
    int j;
    
    for(i = 0; i< GRID_SIZE; i++)
    {
      output << getHorizontalSeparator(i);
      for(j = 0; j < GRID_SIZE; j++)
      {
        vertSeparator.str(std::string());
        
        if(j % 3 == 0 && j != 0)
        {
          vertSeparator << std::string(1,'x');
        }
        else
        {
          vertSeparator << std::string(1,'|');
        }
        
        int val = mData.get(i, j, 0);
        if(val == 0)
        {
          output << vertSeparator.str() << ' ' << ' ' << ' ';
        }
        else
        {
          output << vertSeparator.str() << ' ' << val << ' ';
        }
        
      }
      output << '|' << std::endl;
    }
    output << getHorizontalSeparator(0);
    return output.str();
}
