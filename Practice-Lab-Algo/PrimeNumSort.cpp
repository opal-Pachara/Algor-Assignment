#include <iostream>
using namespace std;

// เช็คจำนวนเฉพาะโดยไม่ใช้ cmath
bool isPrime(int n) {
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

void BubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    if (!(cin >> n)) return 0;

    int input[n];
    int primes[n], nonPrimes[n];
    int pCount = 0, npCount = 0;

    // แยกกลุ่มตัวเลข
    for (int i = 0; i < n; i++) {
        cin >> input[i];
        if (isPrime(input[i])) {
            primes[pCount++] = input[i];
        } else {
            nonPrimes[npCount++] = input[i];
        }
    }

    // เรียงเฉพาะกลุ่มจำนวนเฉพาะ
    if (pCount > 0) {
        BubbleSort(primes, pCount);
    }

    // แสดงผล: จำนวนเฉพาะที่เรียงแล้ว ตามด้วยเลขที่ไม่ใช่จำนวนเฉพาะ
    for (int i = 0; i < pCount; i++) {
        cout << primes[i] << " ";
    }
    for (int i = 0; i < npCount; i++) {
        cout << nonPrimes[i] << (i == npCount - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}