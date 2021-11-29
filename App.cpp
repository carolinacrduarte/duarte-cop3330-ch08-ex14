/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Carolina Duarte
 */

/*
Can we declare a non-reference function argument const (e.g., void f(const int);)? What might that mean? Why might we want to do that? Why don’t people do that often? Try it; write a couple of small programs to see what works.
*/

/*Answers:
It means that arguments being passed to a function are constant. The function itself cannot alter the value of such constant.

This is good for situations where the constant is being used in the function's body and we want to make sure and check that the value remains the same.

It is not often used because for non-reference function arguments, a parameter's copy is used instead of a reference, protecting the original value. If changes are made to the copy, the original is still the same.

But regardless, such non-reference constants can still be declared although not used often.
*/

//Header file.
#include "std_lib_facilities.h" 

//Examples of passing by value functions:

//Example 1:
void f1(const int x){
    cout<<x*10<<endl;
}

//Example 2:
void f2(int i){
    i = 30;
    cout<<i<<endl;
}

//Example 3:
void f3(int j){
    j = 25;
    cout<<j-10<<endl;
}

int main()
{
    f1(6);
    int i = 40;
    int j = 10;
    f2(i);
    f3(j);
    return 0;
}



