#include <iostream>
using namespace std;
int main(){
    //prefix sum in CPP
    int nums[] = {3,8,9,5,7,6,1,2};
    //the array above has 9 integers
    //each element can be accessed using an index starting from 0 as the first character to the last one
    // cout<<nums[5]; //this will output 6 in the index position 5
    int n = sizeof(nums)/sizeof(nums[0]);
    //Build the prefix product
    vector<int> prefix(n,1);
    vector<int> suffix(n,1);
    vector<int> answer(n);

    for (int i =1; i<n;i++){
        prefix[i]=prefix[i-1]*nums[i-1];
    }
    //Build the suffix
    for(int i = n-2;i>=2;i--){
        suffix[i] = suffix[i+1]*nums[i+1];
    }
    //Multiply the prefix and suffix
    for (int i =0;i<n;i++){
        answer[i]=prefix[i]*suffix[i];
    }
    //output the result
    for (int num: answer){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}