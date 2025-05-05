#include <iostream>
using namespace std;
int main(){
    //Combining conditions with arrays
    int student_scores[] = {91,98,88,90,67,87};
    //Check if any student scored above 95 marks then print we have a top performer
    //else if everyone scores above 60 then print all have passed
    //If none of condition is achieved print 
    int n = sizeof(student_scores)/sizeof(student_scores[0]);
    //Think about boolean flags
    //Have post loop decision making which is cleaner and avoids repeated logic
    //clear sepratiion of logic and output
    //avoid deeply nested or awkward conditionals
    int above_60=0;
    bool top_perfomer = false;
    for(int i =0;i<n;i++){
        if(student_scores[i]>95){
            top_perfomer = true;
            break;
        }
        if(student_scores[i]>60){
            above_60++;
        }
    }
    if(top_perfomer){
        cout<<"We have a top performer!"<<endl;
    } else if(above_60==n){
        cout<<"All passed"<<endl;
    }else{
        cout<<"Needs improvement"<<endl;
    }
    return 0;
}