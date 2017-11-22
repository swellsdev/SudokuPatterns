#ifndef _THREE_D_H_
#define _THREE_D_H_

class ThreeD
{
public:
  ThreeD(void);
  ThreeD(unsigned int x,unsigned int y,unsigned int z);
  unsigned int get(unsigned int x,unsigned int y,unsigned int z);
  void set(unsigned int x,unsigned int y,unsigned int z, int val);
private:
  unsigned int xLen;
  unsigned int yLen;
  unsigned int zLen;
  int * rawData;
  void checkIndexIsValid(unsigned int x,unsigned int y,unsigned int z);
  int getOffsetFromCoordinates(unsigned int x,unsigned int y,unsigned int z);
};

#endif
