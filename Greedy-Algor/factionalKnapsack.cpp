#include <iostream>
#include <algorithm>
using namespace std;

struct Item {
    int val;
    int wt;
};

bool compare(Item a, Item b) {
    return (1.0 * a.val / a.wt) > (1.0 * b.val / b.wt);
}

double fractionalKnapsack(int val[], int wt[], int n, int capacity) {

    Item itemsArr[n];

    for(int i = 0; i < n; i++){
        itemsArr[i].val = val[i];
        itemsArr[i].wt = wt[i];
    }

    sort(itemsArr, itemsArr + n, compare);

    double res = 0.0;
    int currentCapacity = capacity;

    for(int i = 0; i < n; i++){

        if(itemsArr[i].wt <= currentCapacity){
            res += itemsArr[i].val;
            currentCapacity -= itemsArr[i].wt;
        }
        else{
            res += (1.0 * itemsArr[i].val / itemsArr[i].wt) * currentCapacity;
            break;
        }
    }

    return res;
}

void insertArr(int val[], int wt[], int n){
    for(int i = 0; i < n; i++){
        cin >> wt[i];
    }
    for(int i = 0; i < n; i++){
        cin >> val[i];
    }
}

int main() {
    int n, capacity;
    cin >> n >> capacity;

    int val[n];
    int wt[n];

    insertArr(val, wt, n);

    double answer = fractionalKnapsack(val, wt, n, capacity);

    cout << answer;

    return 0;
}
