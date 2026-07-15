/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;



int countNumber(int a[],int number,int size){
    

    int count = 0;
    
    
    for(int i = 0; i < size; i++){
        
        if(number == a[i])
            count ++;
        
    }
        return count;
    
    
}


int main(){
    
    int a[] = {2,2,3,2,5,1,2,4};
    int size=8;
    int number;


    cout << countNumber(a, number, size);
    
    return 0;
    
    
    
    
    
    
    
    
}

