#include <bits/stdc++.h>
using namespace std;
int main()
{
  unsigned sum_1 = 0, sum_2 = 0, i;

  for (i = 1; i <= 100; i++) {
    sum_1 += i*i;
    sum_2 += i;
  }
  cout<<sum_2*sum_2 - sum_1;
  return 0;
}
