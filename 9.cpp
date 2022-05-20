#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a, b,sum=1000;

  for (a = 1; a <= sum/3; a++) {   
    for (b = a; b <= sum/2; b++) {  
      int c = (sum - a - b);        
      if (a*a + b*b == c*c) {
        //cout<<a<<"\t"<<b<<"\t"<<c<<"\n" ;
        cout<<a*b*c;
      }
    }
  }
  return 0;
}
