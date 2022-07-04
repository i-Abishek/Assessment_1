/*2520 is the smallest number that can be divided by each of the numbers from 1 to 10
without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers
from 1 to 20?*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long number = 1;
    int divMin = 1;
    int divMax = 20;
    int tempDivMax = divMax;

    while(true){
        if(number % tempDivMax == 0)
        {
            tempDivMax--;
            if(tempDivMax == divMin){
                cout << number << endl;
                break;
            }
        }else{
            tempDivMax = divMax;
            number++;
        }
    
    }
  
