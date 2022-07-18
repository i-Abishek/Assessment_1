/*The following iterative sequence is defined for the set of positive integers:
n → n/2 (n is even)
n → 3n + 1 (n is odd)
Using the rule above and starting with 13, we generate the following sequence:
13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms.
Although it has not been proved yet (Collatz Problem), it is thought that all starting
numbers finish at 1.
Which starting number, under one million, produces the longest chain?*/




#include<bits/stdc++.h>
using namespace std;

long long collatzSequenceSize(long long int number)
{
    long long resultSequenceSize = 0; 
    while (number != 1) 
    {
        
        number = (number % 2 == 0) ? (number/2) : (number * 3) + 1; 
        ++resultSequenceSize; 
    }
    
    return resultSequenceSize;
}

int main()
{
    long long int numWithLargestChain = 0;
    long long int largestChainSize = 0;
    
    for (long long int i = 1; i < 1000000; ++i)
    {
        long long int currentChainSize = collatzSequenceSize(i);
        if (currentChainSize > largestChainSize) 
        {
            numWithLargestChain = i;
            largestChainSize = currentChainSize;
        }
    }
    
    cout << numWithLargestChain << "\n";
}
