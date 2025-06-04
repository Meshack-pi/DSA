#include <iostream>
#include <cmath>
using namespace std;
int Sum(int n,int m){
    int y =n+m;
    return y;
}
int Profit(int buy, int sell){
    int profit = sell - buy;
    return profit;
}
void AreaTriangle(int base, int hyp){
    int h = (hyp*hyp)-(base*base);
    int height = sqrt(h);
    float area = 0.5*(float)height*(float)base;
    cout<<"Area is: "<<area<<" Height is: "<<height<<endl;
    int perimeter = height + base+hyp;
    cout<<"The perimeter is: "<<perimeter<<endl;
}

int main() {
    AreaTriangle(4,5);
    cout<<endl;
    int x=4,y=9;
    cout<<(float)x/y<<endl;
    //the output of the division is now of type float
    float f = 3.5;
    // using cast operator
    int b = static_cast<int>(f);
    char u = 'a';
    cout<<y+b;
    cout << b;
    int num1,num2;
    cout<<"Enter the two digits;"<<endl;
    cin>>num1;
    cout<<"Enter value of num2\n";
    cin>>num2;
    cout<<"The sum of the two variables is "<<Sum(num1,num2)<<endl;
    int bp,sp;
    cout<<"What is the buying price of the vehicle: ";
    cin>>bp;
    cout<<"What is the selling price of the vehicle: ";
    cin>>sp;
    cout<<"The profit made is "<<Profit(bp,sp)<<endl;
    return 0;
}