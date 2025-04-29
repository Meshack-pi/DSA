#include <iostream>
#include <fstream>
using namespace std;
int main(){
    //Create and write a file
    string Mytextout;
    //Now lets read the file
    ifstream MyReadFile("filename.txt");
    while (getline(MyReadFile, Mytextout)){
        cout<<Mytextout;
    }
    MyReadFile.close();
    return 0;
}