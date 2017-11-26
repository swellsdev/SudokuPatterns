#include <limits.h>
#include "gtest/gtest.h"
#include "ThreeD.h"

class ThreeD_Test : public ::testing::Test 
{
 protected:
  virtual void SetUp() 
  {
    
  }
  
  virtual void TearDown()
  {
    
  }
};

TEST_F(ThreeD_Test, Initialise)
{
  ThreeD d(9,9,10);
  ASSERT_EQ(0, d.get(0, 0, 0));
  ASSERT_EQ(0, d.get(8, 8, 9));
}

TEST_F(ThreeD_Test, IllegalIndexThrowsException)
{
  ThreeD d(9,9,10);
  ASSERT_ANY_THROW(d.get(9, 8, 9));
  ASSERT_ANY_THROW(d.get(8, 9, 9));
  ASSERT_ANY_THROW(d.get(9, 8, 10));
}

TEST_F(ThreeD_Test, IndexSweep)
{
  //Set all values
  ThreeD d(9,9,10);
  int m = 0;
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      for (int k = 0; k < 10; k++) {
        d.set(i,j,k,m++);
      }
    }
  }
  
  //Get all values
  m = 0;
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      for (int k = 0; k < 10; k++) {
        ASSERT_EQ(m++,d.get(i,j,k));
      }
    }
  }
}

