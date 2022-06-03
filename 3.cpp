/*The prime factors of 13195 are 5, 7, 13 and 29.
 What is the largest prime factor of the number 600851475143?*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int number = 600851475143 ;
    int divisor = 2, largestPrimeFactor = 0;
    while(number!=0){
        if(number%divisor!=0){ 
            divisor += 1;   
        }else{
            largestPrimeFactor = number; 
            number/=divisor;    
            if(number==1){           
                cout<<largestPrimeFactor; 
                break;
            }
        }
    }
    return 0;
}
