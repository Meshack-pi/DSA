#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Input the value of n: ";
    cin>>n;
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(i%4==0){
                continue;
            }
            cout<<i<<",";
        }
    }
    cout<<endl;
    return 0;
}