#include <iostream>
using namespace std;

int top = -1;

//Function Push data to stackArray
void push(int value,int stackArray[]){
    top++;
    stackArray[top] = value;
}

//Function pop(delete data from Top Stack)
void pop(int stackArray[]) {
    int val = stackArray[top];
    top--;
    cout << "Pop Stack: " << val << "\n";
}


//Function PrintStack (if top ==- 1 Stack is not data)
void printStack(int stackArray[]) {
    if (top == -1) {
        cout << "Stack is empty\n";
        return;
    }
    for (int i = top; i >= 0; i--) {
        cout << stackArray[i] << " ";
    }
    cout << "\n";
}

//Function InsertStack()
void insertStack(int stackArray[],int n){
    int i;
    int number;
    for(i = 0; i < n; i++){
        cin>>number;
        push(number,stackArray);
    }
}

int main(){
    int n;
    cin>>n;
    int stackArray[n];
    insertStack(stackArray,n);
    pop(stackArray);
    printStack(stackArray);
    return 0;
}