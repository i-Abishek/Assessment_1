/*2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
What is the sum of the digits of the number 2
1000?*/





#include <bits/stdc++.h>
using namespace std;

#define N 1000

int main()
{
	int number[N] = {0};
	number[0] = 1;
	for (int i = 0; i < N; i++) {
		for (int j = N-2; j >= 0; j--) {
			number[j] *= 2;
			number[j+1] += number[j] / 10;
			number[j] %= 10;
		}
	}
	int sum = 0;
	for (int n = 0; n < N; n++)
		sum += number[n];
	cout << sum << "\n";
}
