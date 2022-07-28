#include<bits/stdc++.h>
using namespace std;

unsigned long int binomial_coef(unsigned long int n, unsigned long int k)
{
	long int res = 1;

	if (k > n-k)
		k = n-k;

	for(long int i = 0; i < k; ++i)
	{
		res *= (n-i);
		res /= (i+1);
	}

	return res;
}

int main()
{
	unsigned long int answer = binomial_coef(40, 20);
    cout<<answer;

	return 0;
}
