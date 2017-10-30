#include <limits.h>
#include "gtest/gtest.h"
#include "otherSrc.h"

class OtherSrcTest : public ::testing::Test 
{
 protected:
  virtual void SetUp() 
  {
    
  }
  
  virtual void TearDown()
  {
    
  }
};

TEST_F(OtherSrcTest, TrueTest)
{
  otherSrc src;
  ASSERT_TRUE(src.isTrue());
}

TEST_F(OtherSrcTest, FailTest)
{
  //ASSERT_TRUE(false);
}