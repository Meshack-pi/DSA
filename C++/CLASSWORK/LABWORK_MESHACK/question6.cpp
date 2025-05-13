#include <iostream>
using namespace std;

int main() {
    //rewrite the program below using the for loop and the do while loop 2 programs output reqritien similalry
    int K = 5;
    int W = -2;
    int P;
    // for (int K = 5; W <= K; K--) {
    //     P = W + K;
    //     cout << P << endl;
    // }
    // do while loop
    do {
        K--;
        P = W + K;
        cout << P << endl;
    } while (W <= K);
    return 0;
}