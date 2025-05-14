#include <iostream>
using namespace std;

int main() {
    //given array of integers, check if numberr of even numbers = odd numbers 
    //print Balanced if there are more even numbers print even heavy
    vector<int> u = {4,3,8,2,9,38,67};
    int s = u.size();
    int odd = 0, even = 0;
    for(int i = 0;i<s;i++){
        if(u[i]%2==0){
            even +=1;
        }else{
            odd +=1;
        }
    }
    cout<< odd<<even<<endl;
    if(even==odd){
        cout<<"Balanced\n";
    }else if(even>odd){
        cout<<"Even heavy\n";
    }else{
        cout<<"Odd heavy\n";
    }
    return 0;
}