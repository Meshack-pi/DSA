#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> m = {3,38,20,2};
    vector<int> y;
    for(int i =m.size()-1;i>=0;i++){
        y.push_back(m[i]);
    }
    for(int i = 0;i<y.size();i++){
        cout<<y[i]<<",";
    }
    return 0;
}