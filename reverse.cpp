#include <iostream>
using namespace std;


int main()
{

int nums[] ={1,2,3,4,5,6,7,8,9};


int n = sizeof(nums) / sizeof(nums[0]);
int i =0;

int j =n-1;

while(i<j){

        swap(nums[i],nums[j]);
        i++;
        j--;
    }

for(int k = 0; k < n; k++){
    
    cout<<nums[k]<<" ";
}
    
    return 0;
}
