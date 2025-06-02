#include <iostream>
using namespace std;

int main() {
    /*
    Input student marks for 5 subject, calculate average, use if else if to assign grade A,B,C,D,Fail
    Use for loop to enter makrs and switch to output remarks based on grade
    70 and above A, 60 and above B, 50 and above C, 40 and above D below forty is fail
    */
   int total =0, subjectmarks=0;
   float average;
   char grade;
   cout<<"Enter the grades for your subjects below\n";
   for(int i =0;i<5;i++){
        cout<<"Enter marks ";
        cin>>subjectmarks;
        total=total+ subjectmarks;
   }
   average = total/5.0;
   cout<<"Your average marks is "<<average<<endl;
   if(average>=70){
    grade ='A';
   }else if(average >=60){
    grade='B';
   }else if(average>=50){
    grade='C';
   }else if(average>=40){
    grade='D';
   }else{
    grade ='F';
   }
   switch (grade)
   {
   case 'A':
        cout<<"Congragulations you got an "<<grade<<endl;
    break;
   case 'B':
        cout<<"Goo work you got a "<<grade<<endl;
    break;
   case 'C':
        cout<<"Aim higher you got a "<<grade<<endl;
    break;
   case 'D':
        cout<<"More room for improvement you got a "<<grade<<endl;
    break;
   case 'F':
        cout<<"Pull up your socks you got "<<grade<<endl;
    break;
   }
    return 0;
}