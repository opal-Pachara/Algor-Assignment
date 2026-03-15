#include <iostream>
using namespace std;

int front = 0;
int rear = -1;

void enqueue(int value,int QueueArray[]) {
    rear++;
    QueueArray[rear] = value;
}

void dequeue(int QueueArray[]) {
    int val = QueueArray[front];
    front++;
    cout << "Dequeue : " << val;
    cout << "\n";
}

void insertQueueArray(int QueueArray[],int n){
    int i;
    int number;
    for(i = 0 ; i < n ; i++){
        cin >> number;
        enqueue(number,QueueArray);
    }
}

void printQueue(int QueueArray[]){
    if(rear == -1){
        cout << "Queue is Empty" << "\n";
        return;
    }
    for(int i =)
}

int main(){
    int n;
    cin>>n;
    int QueueArray[n];
    insertQueueArray(QueueArray,n);
    
    return 0;
}