// Fibonacci series program using Recursion



#include<iostream>
uisng namesapce std;

class Fibonacci {
public:

  int fib(int n){

      //base case 
    if(n==0 || n==1){
        return n;
    }

  return fib(n-1) + fib(n-2);
  }
};
