
#include<iostream>
using namespace std;


int queue[5];
int front = 0;
int rear = -1;

int main(){
    
    //insertion at rear in queue
    queue[++rear] = 10;
    queue[++rear] = 20;
    queue[++rear] = 30;
    queue[++rear] = 40;
    queue[++rear] = 50;
    
    //displaying queue after insertion
    for(int i = front; i <= rear; i++){
        cout<<queue[i]<<" ";
    }
    cout<<endl;
    
    //dequeue operation on queue
    while(front<2){
        cout<<"dequeue operation is perform"<<queue[front++]<<endl;
    }
    
    //displayed queue after pop operation
    
    for(int i = front; i <= rear; i++){
        
        cout<<queue[i]<<" "<<endl;
    }
    return 0;
}

// time complexity O(n)
// space complexity O(1)











