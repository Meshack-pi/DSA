#include <iostream>
using namespace std;
int main(){
    int mynumbers[] = {3,38,29,2,1,38};
    int n = sizeof(mynumbers)/sizeof(mynumbers[0]);
    //if the smallest number is even and less than ten then return "Low even";
    //If the smallest is odd and more than 50 return "High odd";
    int smallest_number =mynumbers[0];
    for(int i=1;i<n;i++){
        if(mynumbers[i]<smallest_number){
            smallest_number = mynumbers[i];
        }
    }
    cout<<"The smallest number is: "<<smallest_number<<endl;
    if(smallest_number%2==0 && smallest_number<10){
        cout<<"Low even\n";
    }else if(smallest_number%2!=0 &&smallest_number>50){
        cout<<"High odd\n";
    }else{
        cout<<"Standard\n";
    }
    return 0;
}