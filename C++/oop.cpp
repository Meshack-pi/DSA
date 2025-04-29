#include <iostream>
#include <string>
using namespace std;
class Car{
    public:
    int mynum;
    void Drive();
    string mystring;
    void methodQ(string name){
        cout<<"What is your name: "<<endl;
        cout<<name;
    }
    string brand, model;
    int year;

    Car(string x, string y, int z);//This is a constructor
};

Car::Car(string x, string y, int z){
    brand = x;
    model = y;
    year = z;
}

void Car::Drive() {
    cout << "This car is now driving";
  }
int main(){
    Car mercedes("BMW","X5",2023);
    cout<<mercedes.brand<<endl;
    return 0;
}