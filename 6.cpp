#include <bits/stdc++.h>
using namespace std;
int main()
{
  unsigned sumOfSquare = 0, squareOfSum = 0, itr;

  for (itr = 1; itr <= 100; itr++) {
    sumOfSquare += itr*itr;
    squareOfSum  += itr;
  }
  squareOfSum*=squareOfSum;
  cout<<squareOfSum - sumOfSquare;
  
  return 0;
}
