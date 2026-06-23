// Enter size of an array and insert array elements according to the size of an array and display those elements in sorted order.


#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    
    
    int n;
    
    cout<<"enter size of an array";
    cin>>n;
    
    int arr[n];
    
    for(int i=0; i<n; i++){
        
        cout<<"Enter no of Array Elements";
        cin>>arr[i];
    }
    
    
    sort(arr,arr + n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    
    
    
    return 0;
    
    
};



// Output
// Enter size of an array 4
// insert array elements 12,1,3,100
// Array elements after sorted 1,3,12,100



//Output
