#include <iostream>
using namespace std;

int main() {
    /*
    START
SET TOTAL TO 0
FOR i FROM 1 TO 	50 LOOP
	DISPLAY “Enter mark for subject”, i
	INPUT MARK
	TOTAL = TOTAL + MARK
END LOOP
AVERAGE = TOTAL/5
IF AVERAGE>=85 THEN
	GRADE = “A”
ELSE IF(AVERAGE >=70 AND AVERAGE<=84) THEN
	GRADE = “B”
ELSE IF(AVERAGE >=50 AND AVERAGE<=69) THEN
	GRADE = “C”
ELSE
	GRADE = “F”
END IF
DISPLAY “Total Marks: “, TOTAL
DISPLAY “Average: “, AVERAGE
DISPLAY “Grade: “, GRADE
END

    */
   int total = 0, marks, average;
   for(int i = 0; i<5;i++){
    cout<<"Enter the marks: ";
    cin>>marks;
    total +=marks;
   }
   average = total/5;
   char grade;
   if(average>=85){
    grade = 'A';
   }else if (average>=70 && average<=84){
    grade = 'B';
   }else if(average>=50 && average<= 69){
    grade = 'C';
   }else{
    grade = 'F';
   }

   cout<<"Total marks for the student is "<<total<<endl;
   cout<<"Average marks fro the student is "<<average<<endl;
   cout<<"The grade of the system is "<<grade<<endl;
    return 0;
}