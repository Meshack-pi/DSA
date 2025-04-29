#include <iostream>
using namespace std;

class Employee{
    private:
        //Private attribute of the class;
        int salary;
    public:
        //Setter
        void setsalary(int s){
            salary = s;
        }
        //Getter
        int getSalary(){
            return salary;
        }
};
//base class
class Vehicle{
    public:
        string brand;
        void honk(string car_name){
            cout<<car_name<<" Piiip piiiip!\n";
        }
};
//Derived class for the base classs
class Car: public Vehicle{
    public:
    string model;
    void revEngine(){
        cout<<"Vroooommmm vroooooom vrta ta vra ta!!!!\n";
    }
};
class Engine: public Car{
    public:
    int horsepower;
};
//Multiple inheritance 
// class MyBestCar: public Car, public Engine, public Vehicle{};
class Honda: public Car{
    public:
    void revEngine(){
        cout<<"Honda goes vroooooommmmmm\n";
    }
};
class DodgeDefender: public Car{
    public:
    void revEngine(){
        cout<<"Dodge goesss vrooooom vrooom vrtatata\n";
    }
};
int main(){
    Employee firstEmployee;
    firstEmployee.setsalary(40000);
    cout<<firstEmployee.getSalary()<<endl;
    //This is allowed because it is public variable
     //Private_variable is a private member of My class not a public accessible variable
     //The concept of inheritance
     Car BMW;
     BMW.brand = "BMW Goes ";
     BMW.honk(BMW.brand);
     //My car object has inherited from all the three classes;
     //Inherits from more than one base class
     //Polymorphism
     DodgeDefender mydodge;
     mydodge.revEngine();
     Honda myHonda;
     myHonda.revEngine();
    return 0;
}