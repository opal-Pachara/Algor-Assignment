#include <iostream>
#include <string>
using namespace std;

void insertarr(int arr[],int n){
    int i;
    for(i = 0; i < n ; i++){
        cin>>arr[i];
    }
}

void bubblesort(int arr[],int n){
    int i, j;
    for(i = 0; i < n-1 ; i++){
        for(j = 0; j < n-1 ;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void searchAndPrint(string s) {
    int maxLen = 0;
    int currentLen = 1;
    int len = s.length();
    //find max len number
    for (int i = 1; i <= len; i++) {
        if (i < len && s[i] == s[i-1]) {
            currentLen++;
        } else {
            if (currentLen > maxLen){
                maxLen = currentLen;x
            }
            currentLen = 1;
        }
    }

    bool found[10] = {false};
    currentLen = 1;
    for (int i = 1; i <= len; i++) {
        if (i < len && s[i] == s[i-1]) {
            currentLen++;
        } else {
            if (currentLen == maxLen || (maxLen == 1)) { 
                found[s[i-1] - '0'] = true;
            }
            currentLen = 1;
        }
    }

    bool first = true;
    for (int i = 0; i < 10; i++) {
        if (found[i]) {
            if (!first) {
            cout << " ";
            }
            cout << i;
            first = false;
        }
    }
    cout << endl;
}

void reduceAndPrint(string s) {
    if (s.length() == 0){
        return;
    } 
    cout << s[0]; //print firstString
    for (int i = 1; i < s.length(); i++) {
        if (s[i] != s[i-1]) { // ถheck next and previous
            cout << s[i];
        }
    }
    cout << endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    insertarr(arr,n);
    bubblesort(arr,n);

    string result ="";
    for(int i = 0; i < n; i++){
        result += to_string(arr[i]);
    }
    cout<<result<<endl;

    searchAndPrint(result);
    reduceAndPrint(result);
    return 0;
}