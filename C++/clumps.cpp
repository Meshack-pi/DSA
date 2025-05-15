#include <iostream>
#include <vector>
using namespace std;

int main() {
    //given an array count the number of clumps 
    //consecutive identical elements
    //for example [2,2,3,4,4,4,4,45] this has 2 clumps where 2,2, and 4,4 
    //ahem so a clump is a group of consecutive identical elements
    vector<int> x = {2,2,3,4,4,4,5};
    int clamp = 0;
    for(int i = 0;i<x.size()-1;i++){
        if(x[i]==x[i+1]){
            clamp++;
            while(i<x.size()-1 && x[i]==x[i+1]){
                i++;
            }
        }
    }
    cout<<clamp<<endl;
    return 0;
}