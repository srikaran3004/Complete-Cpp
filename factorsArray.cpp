#include <iostream>
#include <vector>
#include<cmath>

using namespace std;

// Function to calculate and print prime factors of a number
void primeFactors(int num) {
    while (num % 2 == 0) {
        cout << 2 << " ";
        num /= 2;
    }

    for (int i = 3; i <= sqrt(num); i += 2) {
        while (num % i == 0) {
            cout << i << " ";
            num /= i;
        }
    }

    if (num > 2) {
        cout << num << " ";
    }
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Prime factors of each element in the array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        primeFactors(arr[i]);
        cout << endl;
    }

    return 0;
}
