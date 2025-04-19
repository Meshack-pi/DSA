#include <iostream>
using namespace std;
int main(){
    //Switch statements are used to select one of the many blocks that have been defined
    //Switch statements are evaluated only once 
    //Value of the expression is compared with each case
    //The break and default, keywords are optional example of choosing is as shown below
    //When the C++ Code reaches a break keyword, it breaks out of the switch block moves to the next
    //Break saves time because it "Ignores" the execution of all the rest of the code in the switch block.

    int day = 5;
    switch (day){
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tuesday";
            break;
        case 3:
            cout<<"Wednesday";
            break;
        case 4:
            cout<<"Thursday";
            break;
        case 5:
            cout<<"Friday";
            break;
        case 6:
            cout<<"Saturday";
            break;
        case 7:
            cout<<"Sunday";
            break;
    }
    //The default keyword specifies some code to run if there is no case match

    int stanza = 4;
    cout<<"Which stanza would you like: eg 1, 2, 3  ";
    // cin>>stanza;
    switch(stanza){
        case 1:
            cout<<"Eee mumngu nguvu yetu\n";
            break;
        case 2:
            cout<<"Natujenge taifa letu\n";
            break;
        case 3:
            cout<<"Amkeni ndugu zetu\n";
            break;
        default:
            cout<< "You have chosen the wrong input format try again\n";
            //Must end with a semi color
    }
    return 0;
}