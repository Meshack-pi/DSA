#include <iostream>
#include <list>
using namespace std;

int main() {
    //a list is similar to a vector in that it can store multiple elements of the same data type and dynamically grow 
    //in size
    /*
    However two major differences between lists and vectors are 
    1. You can add and remove elments from both begining and at the end of the list 
    vectors are generally optimized for adding and removing at the end
    2. unlike vectors a list doesn't support random access, meaning you can't jump directly into a specific
    index, or access elements by the index numbers
    */
   list<string> cars = {"bmw", "Ford", "mazda"};
   for(string car : cars){
    cout<<car<<"\n";
   }
   //accessing a list you can access the first or the lat element with the front() and the .back() functions
   cout<<cars.front()<<endl;
   cout<<cars.back()<<endl;
   cars.front() = "changes made";
   cout<<cars.front()<<endl;   
   //to add elements you can use the push front or push back to insert an elementt at the end
   cars.push_back("add car");
   //removing an item from the list
   cars.pop_back();
   cars.pop_front();
   //removes the first item
   //to get the list size just use the size function which is similar to in vectors
   cout<<"the list size is: "<<cars.size()<<endl; 
   //check if a list is empty
   cout<<cars.empty();//will output 1 if the list is empty
   //NB you cannnot loop through a list of elements with the traditional for loop with the size function
   //because it is not possible to access elements in a list by index
   //simplest way to do is using the for-each loop
   
    return 0;
}