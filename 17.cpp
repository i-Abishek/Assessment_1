/* If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there
are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.
If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words,
how many letters would be used?
NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and
forty-two) contains 23 letters and 115 (one hundred and fifteen) contains 20 letters.
The use of "and" when writing out numbers is in compliance with British usage*/





#include <bits/stdc++.h>
using namespace std;

int firstTwenty[] = {3,3,5,4,4,3,5,5,4,3,6,6,8,8,7,7,9,8,8,6};
int tens[] = {3,6,6,5,5,5,7,6,6};
int hundred = 7;

int main()
{
	int sum = 0;
	for (int n = 1; n <= 999; n++) {
		if (n >= 100) {
			sum += firstTwenty[n/100-1];
			sum += hundred;
			if (n % 100)
				sum += 3;
			else
				continue;
		}
		if (n % 100 < 20)
			sum += firstTwenty[n%100-1];
		else {
			sum += tens[n/10%10-1];
			if (n % 10)
				sum += firstTwenty[n%10-1];
		}
	}
	sum += firstTwenty[0] + 8;
	cout << sum << "\n";
}
