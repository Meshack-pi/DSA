#include <iostream>
using namespace std;
int main(){
    //You are given the current temperatuer and a weather condition
    //If the temp is less than ten, the condition is rainy and print stay indoors
    //if the temp is between 10 and 20 and it is windy then print wear a jacket else wear a jacket
    int temp;
    string weather_condition;
    cout<<"What is the temperature today? "<<endl;
    cin>>temp;
    cout<<"What is the weather condition today? "<<endl;
    cin>>weather_condition;
    if(temp<10&&weather_condition=="rainy"){
        cout<<"Stay indoors "<<endl;
    }else if((temp>=10 && temp<20) && weather_condition =="windy"){
        cout<<"Wear a jacket"<<endl;
    }else{
        cout<<"Weather is fine "<<endl;
    }
    return 0;
}