#include <iostream>
using namespace std;

int main() {
    int temp = 39;
    string condition = "rainy";

    if (temp < 10 && condition == "rainy") {
        cout << "Stay indoors";
    } else if (temp >= 10 && temp <= 20 && condition == "windy") {
        cout << "Wear a jacket";
    } else {
        cout << "Weather is fine";
    }

    return 0;
}
