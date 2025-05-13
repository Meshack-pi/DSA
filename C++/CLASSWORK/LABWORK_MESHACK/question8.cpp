#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, count = 0;

    cout << "Enter a positive number (0 to stop): ";
    cin >> n;

    while (n != 0) {
        if (n < 0) {
            cout << "Error: Enter a positive number (0 to stop): ";
        } else {
            sum += n;
            count++;
        }
        cin >> n;
    }

    if (count == 0) {
        cout << "No average" << endl;
    } else {
        double average = static_cast<double>(sum) / count;
        cout << "Average of positive numbers: " << average << endl;
    }

    return 0;
}