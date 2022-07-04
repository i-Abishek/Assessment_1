#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int number_1, number_2, sumOfTriplet = 1000;

  for (number_1 = 1; number_1 <= sumOfTriplet / 3; number_1++)
    {
      for (number_2 = number_1; number_2 <= sumOfTriplet / 2; number_2++)
	{

	  int number_3 = (sumOfTriplet - number_1 - number_2);
	  if (number_1 * number_1 + number_2 * number_2 == number_3 * number_3)
	    {
	      cout << number_1 * number_2 * number_3;
	    }
	}
  }

  return 0;
}

