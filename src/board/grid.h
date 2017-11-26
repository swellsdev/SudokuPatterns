#ifndef _GRID_H_
#define _GRID_H_

#include "ThreeD.h"
#include <iostream>

class Grid
{
public:
  Grid(void);
  Grid(std::string CSV_String);
  std::string print();
  static const int GRID_SIZE = 9;
private:
  std::string getHorizontalSeparator(const int row);
  int getPrintWidth();
  
  ThreeD mData;
  static const char HORIZ_SEP = '-';
  static const char VERT_SEP = '|';
};

#endif
