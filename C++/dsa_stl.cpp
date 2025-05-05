#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
using namespace std;

int main() {
    //Example of using a vector data type
    //We have imported the vector library
    vector<string> cars = {"volvo","bmw","mercedes"};
    cout<<cars.front()<<endl;
    cout<<cars.back()<<endl;
    //You can also access an element at a specified index using the at function specified
    cout<<"Accessing an item at index 2: "<<cars.at(2)<<endl;// will throw an error if it doesn't exist;
    //changin a vector element
    cars[0] = "Not volvo";
    cars.at(2) = "not mercedes";
    //it is safer to use at because it won't allow adding a non existing position or creating new one
    //add vector elements
    cars.push_back("Pagani");
    cars.push_back("Volkwagen");
    cout<<"Last car in the lisst:"<<cars.back()<<endl;
    //you can add as many elements as you want
    //remove vector elements
    cars.pop_back();
    //removes the last item which is the volkswagen
    //To get the size of the vector use the size funtion as shown below
    cout<<"the size of this vector is: "<<cars.size()<<endl;
    //CHeck if a vector is empty
    cout<<cars.empty(); /// this will output 1 if the vector is empty and 0 if the vecto is not empty
    cout<<"displaying all cars"<<endl;
    for (string car : cars){
        cout<<car<<"\n";
    }
    return 0;
}