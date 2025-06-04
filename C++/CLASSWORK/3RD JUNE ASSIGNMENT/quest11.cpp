#include <iostream>
using namespace std;

void insertElements(vector<int> num[],int n){
    cout<<"Insert the number of elements in the array: ";
    cin>>n;
    vector<int> num[n];
    for(int i=0;i<n;i++){
        cout<<"Enter number at index "<<i<<" ";
        cin>>num[i];
    }

}

int main() {
    vector<int> num;
    int n;
    insertElements(num,n);
    return 0;
}