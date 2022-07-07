/* n! means n × (n − 1) × ... × 3 × 2 × 1
For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
and the sum of the digits in the number 10! is
3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.
Find the sum of the digits in the number 100!*/

#include <bits/stdc++.h>
using namespace std;
#define N 100

int main()
{
	int num[2*N] = {0};
	num[0] = 1;
	for (int i = 2; i <= N; i++) {
		for (int j = 2*N-3; j >= 0; j--) {
			num[j] *= i;
			num[j+1] += num[j] / 10 % 10;
			num[j+2] += num[j+1] / 10 + num[j] / 100;
			num[j+1] %= 10;
			num[j] %= 10;
			for (int k = j + 2; num[k] >= 10; k++) {
				num[k+1] += num[k] / 10;
				num[k] %= 10;
			}
		}
	}
	int sum = 0;
	for (int i = 2*N-1; i >= 0; i--)
		sum += num[i];
	cout << sum << "\n";
}
