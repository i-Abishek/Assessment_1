#include <bits/stdc++.h>
using namespace std;

void mutiply(unsigned int* ar, int size, int n)
{
	int carry = 0, s;
	for (int i = 0; i < size; ++i)
	{
		s = ar[i] * n + carry;
		ar[i] = s%10;
		carry = s/10;
	}
}

int main()
{
	int size = 200, MAX = 100;
	unsigned long int sum = 0;
	unsigned int* number = (unsigned int*) calloc(size, sizeof(unsigned int));
	number[0] = 1;

	for (int i = 1; i < MAX+1; ++i)
		mutiply(number, size, i);

	while(size--)
		sum += number[size-1];

	cout<<sum;
	
	return 0;
}
