#include <iostream>
using namespace std;

int main() {
    //array of indexes count how many are positive
    //If more than half are positive print "mostly positive"
    vector<int> y = {4,-8,8,9,-4};
    int s = y.size();
    //count positive integers
    int positive = 0;
    for(int i = 0;i<s;i++){
        if(y[i]>0){
            positive +=1;
        }
    }
    cout<<positive<<endl;
    if(positive>s/2){
        cout<<"Mostly positive\n";
    }else{
        cout<<"Not mostly postitive\n";
    }

    return 0;
}