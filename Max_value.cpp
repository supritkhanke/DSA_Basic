#include<iostream>
using namespace std;

int getMax(int num[], int n) {
    int max = INT16_MIN;

    for(int i = 0; i<n; i++) {
        if (num[i] > max) {
            max = num[i];
        }
    }

    // Return max value
    return max;
}

int main() {
    int size;
    cin >> size;

    int num[100];

    // Taking input in array
    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }

    cout << "Maximum value is " << getMax(num, size) << endl;

    return 0;
}
