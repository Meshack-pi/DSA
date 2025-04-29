//Write a program to calculate the perimeter of a circle whose radius is 14.55 cm



#include <iostream>
using namespace std;
int main(){
    //Calculate the perimeter of a circle
    float radius, circumference, pi;
    radius = 14.55;
    pi = 3.1428;
    circumference = (2*pi*radius);
    cout<<"The perimeter of this circle is "<<circumference<<endl;
    //Write a program that calculates the sum of 103 and 57 and displays the result
    int num1, num2, sum;
    num1 = 103;
    num2 = 57;
    sum = num1 + num2;
    cout << "The sum of the two numbers is "<<sum<<endl;
    //end of program
    //Write a program that computes the area and the perimeter of a right angled triangle given
    //base is 10, heigh is 7 hypotenuse is 12
    float base, height,hypotenuse, perimeter, area;
    base = 4;
    height = 8;
    hypotenuse = 5;
    perimeter = base + height+hypotenuse;
    cout<<"The perimeter of this triangle is "<< perimeter<<endl;
    area = 0.5*base*height;
    cout<<"The area of this triangle is "<< area<<endl;
    //Using examples in code
    //Explain the two major explicit type casting and implicit type casting
    /*
    Write a program that computes the profit made for selling a motor vehicle. the program should 
    allow a user to input the buying price and the selling price and then 
    compute the profit 

    */
   double buying_price, selling_price, profit;
   cout<<"What is the buying price of the item?  ";
   cin>>buying_price;
   cout<<"What is the selling price of the item: ";
   cin>>selling_price;
   profit = selling_price - buying_price;
   cout<<"The profit is: "<< profit<<endl;
   cout<<"===CODE EXECUTION SUCCESSFULL\n";
   return 0;
}