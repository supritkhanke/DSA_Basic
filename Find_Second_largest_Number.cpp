#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {

    // Input size of array
    int n;
    cin >> n;

    // Declaring array
    int arr[n];

    // Input elements into array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    // Finding second largest element logic

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else
        {
            if (arr[i] > secondLargest && arr[i] < largest)
            {
                secondLargest = arr[i];
            }
        }
    }

    cout << secondLargest << " ";
    return 0;
}
