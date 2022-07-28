#include<bits/stdc++.h>
using namespace std;

int n_divisors(int n)
{
	int d = 0, i;
	for (i = 1; i*i < n+1; ++i)
	{
		if (n%i == 0)
		{
			if (n/i == i)
				++d;
			else
				d += 2;
		}
	}

	return d;
}

int main()
{
	int n = 1, i = 2;


	do
	{
		n += i;
		++i;
	} while (n_divisors(n) < 500);

	cout<<n;
	return 0;
}
