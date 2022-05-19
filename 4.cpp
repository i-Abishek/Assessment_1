/*A palindromic number reads the same both ways. The largest palindrome made from
the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,product,max = 0,temp;
    for(i=100;i<=999;i++){
        for(j=100;j<=999;j++){
            product = i*j;
            temp = product;
            int reverse=0;
            while(temp){
            reverse = 10*reverse+(temp%10);
            temp/=10;
    }
            if(reverse == product && product > max){
                max = product;
            }
        }
    }
    cout<<max;
    return 0;
}
