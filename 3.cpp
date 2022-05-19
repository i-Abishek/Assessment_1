/*The prime factors of 13195 are 5, 7, 13 and 29.
 What is the largest prime factor of the number 600851475143?*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n = 600851475143 ;
    int divisor = 2, largestFact = 0;
    while(n!=0){
        if(n%divisor!=0){ 
            divisor += 1;   
        }else{
            largestFact = n; 
            n/=divisor;    
            if(n==1){           
                cout<<largestFact; 
                break;
            }
        }
    }
    return 0;
}
