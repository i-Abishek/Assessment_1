/*1. If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6
and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.*/ 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int sumOfMultiples = 0;
    for(int itr = 1; itr < 1000; itr++){
        if(i%3 == 0||itr%5 == 0){
            sumOfMultiples=sumOfMultiples+itr;
        }
    }
    cout<<sumOfMultiples;
}
