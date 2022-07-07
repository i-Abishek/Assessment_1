/*The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.*/



#include <bits/stdc++.h>
using namespace std;

int main () 
{
	int number=1;
	unsigned long long int total=2;
	int divisor;
	
	bool prime = true ;
	
	while (number<2000000)
	{
prime=true;
	if (number<=1)
		prime=false;
	else if(number==2||number==3)
		prime=true;
	else if (number%2==0)
	prime = false ;
	else
	{
		
		for(divisor=3; divisor <1415;divisor+=2)
		{
			if (number==divisor)
				prime=true; 
		else if (number%divisor==0){
		prime=false;
		break;
		}
		
		}
		
	}
if (prime==true){
	total=total+number;
	
	
}

		number+=2;
	}
	cout<< total;
	return 0
}
