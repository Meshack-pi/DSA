#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    //Histogram counts how many items of data fall in each of n equally sized intervals and displays results
    //in a bar chart with each bar proportial in lenght to the number of data itmes in that interval
    //write prhat we hold 10 counts use an array that holds 10 counts ogram that generates n random integers in range 0 to 99
    //Produce a histogram for this data
    //We want to count the the number of numbers that lie in intervals of 
    //0-9,10 to 19, 20-29 ....90-99
    //this requires that 
    //FOr example 0-9 16 XXXXX 16 is the number of elements within that range
    //generate random intergers in range of 0 to 99
    //random numbers will inquire from user
    int n;
    cout<<"How many numbers do want to generate? \n";
    cin>>n;
    vector<int> numbers(n);
    vector<int> counts(10,0);
    srand(time(0));
    cout<<"Gnerating a list of: "<<n<<" numbers in range from 0-99"<<endl;
    for(int i =0;i<n;i++){
        numbers[i] = rand()%100;
        int index = numbers[i] / 10;
        counts[index]++;
        cout<<numbers[i]<<" ";
    }
    cout<<endl;
    for(int i =0;i<10;i++){
        int lower = i * 10;
        int upper = lower + 9;
        cout << lower << " - " << upper << "  " << counts[i] << "  ";
        for (int j = 0; j < counts[i]; j++) {
            cout << "X";
        }
        cout << endl;
    }
    return 0;
}