/******************************************************************************
Project euler 
Problem1

If we list all the natural numbers below 10 that are multiples of 3 or 5, 
we get 3, 5, 6 and 9. 

The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

answer: 233168

*******************************************************************************/

#include <iostream>

bool isMultipleOfThree(int);

bool isMultipleOfFive(int);

int main()
{
    int result = 0;
    
    for(int i = 1; i < 1000; ++i){
        if( isMultipleOfFive(i) || isMultipleOfThree(i) ){
            result += i;
        }
    }
    
    return result;
}

bool isMultipleOfThree(int num){

    if( (num % 3) == 0){
        return true;
    }else
        return false;
}

bool isMultipleOfFive(int num){
        if( (num % 5) == 0 ){
        return true;
    }else
        return false;
}