#include <iostream>
#include <algorithm>

using namespace std;

// ฟังก์ชัน Bubble Sort
void bubblesort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// ฟังก์ชัน Binary Search
bool binarysearch(int arr[], int n, int target) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == target) return true;
        else if (arr[mid] < target) l = mid + 1;
        else r = mid - 1;
    }
    return false;
}

int main() {
    int K;
    // วนลูปรับค่า K ไปเรื่อยๆ จนกว่าจะไม่มีข้อมูล input (EOF)
    while (cin >> K) { 
        int bobbyteam[105]; // ประกาศขนาดเผื่อไว้ (K <= 100)
        for (int i = 0; i < K; i++) {
            cin >> bobbyteam[i];
        }

        // 1. เรียงลำดับเพื่อน
        bubblesort(bobbyteam, K);

        int N;
        cin >> N;
        int count = 0;
        int bestID = -1;
        int minTime = 9999;

        // 2. ตรวจสอบนักวิ่ง N คน
        for (int i = 0; i < N; i++) {
            int id, hh, mm;
            cin >> id >> hh >> mm;

            if (binarysearch(bobbyteam, K, id)) {
                if (hh != -1) {
                    int total = (hh * 60) + mm;
                    if (total <= 360) {
                        count++;
                        if (total < minTime) {
                            minTime = total;
                            bestID = id;
                        }
                    }
                }
            }
        }
        // 3. แสดงผลลัพธ์
        cout << bestID << " " << count << endl;
    }
    return 0;
}