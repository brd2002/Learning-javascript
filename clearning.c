#include<stdio.h>
// Questions 1 
// write a function I will give a number in input in a funciton 
// and function will print the number 

// Quesitons 2
// Write a program in C to find the square of any number using the function.
// Write a program in C to find the cube of any number using the function.
// Questions 3
// Write a program in C to swap two numbers using a function.
// Questions 4 
// Write a program in C to check if a given number is even or odd using the function.
// Quetions 
// Write a program in C to convert a decimal number to a binary number using the function.


int main(){
    int a ; 
    scanf("%d" , &a) ; 
    int b; 
    scanf("%d" , &b) ; 
    swapvalue(&a ,&b) ;  // calling the swaping 
    // function
    printf("%d\n" , a) ; 
    printf("%d\n" , b) ; 
    // int ans = findSquare(inputvalue) ; 
    // printf("%d" , ans) ; 
}
// Questions 1 
// write a function I will give a number in input in a funciton 
// and function will print the number 

void swapvalue(int *a, int *b){
    int c=*a;
    *a=*b;
    *b=c;
}

void fun1(int var1){
    printf("%d" , var1); 
} 
int findSquare(int n){
    int square  = n * n ;
    return square; 
}