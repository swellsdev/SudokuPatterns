#include "ThreeD.h"
#include <iostream>
#include <stdexcept>

ThreeD::ThreeD(unsigned int x,unsigned int y,unsigned int z)
{
  xLen = x;
  yLen = y;
  zLen = z;
  rawData = new int[x * y * z]();
}

unsigned int ThreeD::get(unsigned int x,unsigned int y,unsigned int z)
{
  checkIndexIsValid(x,y,z);
  unsigned int index = getOffsetFromCoordinates(x,y,z);
  return rawData[index];
}

void ThreeD::set(unsigned int x,unsigned int y,unsigned int z, int val)
{
  checkIndexIsValid(x,y,z);
  unsigned int index = getOffsetFromCoordinates(x,y,z);
  rawData[index] = val;
}

void ThreeD::checkIndexIsValid(unsigned int x,unsigned int y,unsigned int z)
{
  if(x >= xLen || y >= yLen || z >= zLen)
  {
    throw std::invalid_argument("index out of range");
  }
}

int ThreeD::getOffsetFromCoordinates(unsigned int x,unsigned int y,unsigned int z)
{
  return x + (y * xLen) + (z * xLen * yLen);
}