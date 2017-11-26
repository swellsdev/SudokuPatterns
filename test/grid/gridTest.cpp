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

TEST_F(GridTest, TestPrint)
{
  Grid g;
  std::string result = g.print();
  //ASSERT_NE(std::string::npos,result.find("-"));
  std::cout << result << std::endl;
  std::cout << "\033[1;31mbold red text\033[0m\n";
}
