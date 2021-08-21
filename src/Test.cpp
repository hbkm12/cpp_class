#include "Test.h"

Test::Test(int i, int j)
{
    this->a = i;
    this->b = j;
}
int Test::sum()
{
    return a + b;
}