#include <limits.h>
#include "gtest/gtest.h"
#include "grid.h"

class GridTest : public ::testing::Test 
{
 protected:
  virtual void SetUp() 
  {
    
  }
  
  virtual void TearDown()
  {
    
  }
};

TEST_F(GridTest, EmptyGridTest)
{
  Grid g;
  
}

