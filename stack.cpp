
#include<iostream>
using namespace std;


int stack[5];
int top = -1;

int main(){
    
    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;
    stack[++top] = 40;
    
    //display stack 
    cout<<"stack elements are"<<" ";
    for(int i=top; i>=0; i--){
        cout<<stack[i]<<" ";
    }
    //pop stack elements
   while(top>1){
       cout<<"pop element in a stack"<<stack[top--]<<endl;
   }
    
    // displaying stack after pop operation
    
    cout<<"displayed stack after pop operation"<<endl;
    for(int i = top; i >= 0; i--){
        cout<<stack[i]<<" ";
    }
    return 0;
}

// //stack
// 40
// 30
// 20
// 10

// after pop
// 20
// 10

//time complexity  O(n)
//Space complexity O(1)
