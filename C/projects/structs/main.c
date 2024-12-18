#include <stdio.h>

enum State{WORKING, FAILED, FREEZED};
enum State currState = 0;
enum State findState()
{
  return currState;
}

int main()
{
  (findState() == WORKING)? printf("WORKING"): printf("NOT WORKING");

  return 0;
}
