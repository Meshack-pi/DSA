#include <iostream>
#include <vector>
using namespace std;

int main() {
    //given array of integers and a threshold T
    //remove all elements less than T and print new array
    //if array is emtpy after filtering print All below threshold
    vector<int> u = {3,48,38,29,84,44,42};
    int x = u.size();
    cout<<x<<endl;
    int T = 40;
    for(int i = x-1;i>=0;i--){
        if(u[i]<T){
        u.erase(u.begin() + i);
        }
    }
    cout<<u.size()<<endl;

    //reduced
    if(u.empty()){
        cout<<"All below threshold\n";
    }else{
        for(int i =0;i<u.size();i++){
            cout<<u[i]<<",";
        }
    }
    cout<<endl;
    return 0;
}