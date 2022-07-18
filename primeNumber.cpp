/*By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th
prime is 13.
What is the 10,001st prime number?*/




#include <bits/stdc++.h>
using namespace std;

int primes[10000] = {0}; 

bool isPrime(int number);

int main() {

  int number = 1; 
	int itr = 3; 
	
	while (number <= 10001) {

		if (isPrime(itr)) {

			number++;

			if (number==10001) {

				cout << itr;

				return 0;
			}

		}

		itr += 2; 
	}

	return 0;

}

 bool isPrime(int number) {

	 int j = 0;

	 primes[0] = 2; 

	 while (number > primes[j] and number % primes[j] != 0) {

		 j++;

		 if (primes[j]==0) { 

			 primes[j] = number; 

			 return true; 
		 }

	 }

	 return false; 
}
