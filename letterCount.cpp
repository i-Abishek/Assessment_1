#include<bits/stdc++.h>
using namespace std;

int main()
{
	unsigned int unit_lengths[] = {
		    3,  3,   5,   4,   4,   3,   5,    5,   4,
		/* one two three four five six seven eight nine */
		    3,    6,     6,      8,       8,
		/* ten, eleven twelve thirteen fourteen */
		      7,      7,       9,       8,        8};
		/* fifteen sixteen seventeen eighteen nineteen */

	unsigned int tens_lengths[] = {
		     6,     6,     5,    5,    5,     7,     6,     6};
		/* twenty thirty forty fifty sixty seventy eighty ninety */

	int s = 0;
	for (int i = 1; i < 1001; ++i)
	{
		int n = i; /* copy because we need to modify it */

		if (n == 1000) /* one thousand = 11 letters */
		{
			s += 11;
			continue;
		}

		if (n%100 == 0)
		{
			s += unit_lengths[n/100-1] + 7; /* hundred = 7 letters */
			continue;
		}

		if (n > 100)
		{
			s += unit_lengths[n/100-1] + 10; /* hundred and = 10 letters */
			n %= 100;
		}

		if (n >= 20)
		{
			s += tens_lengths[n/10-2];

			if (n%10 > 0)
				s += unit_lengths[n%10-1];
		}

		if (n < 20)
			s += unit_lengths[n-1];
	}

	cout<<s;
	return 0;
}
