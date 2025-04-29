#include <iostream>
using namespace std;
float gross_income,net_income, tax_tbd, fixed_allowance;
float commission_percatage[] = {0.07,0.09,0.12};
int calculate_comision(int sales_made){
    float commision_earned;
    if (sales_made<10000){
        commison_earned = 0.00;
    }if(sales_made>=10000&&sales_made<20000){
        commision_earned = commission_percatage[0]*sales_made;
    }if(sales_made>=20000&&sales_made<50000){
        commision_earned = commission_percatage[1]*sales_made;
    }esle if(sales_made>50000){
        commision_earned = commission_percatage[2]*sales_made;
    }
    return commision_earned;
   }

int main(){
    /* 
    Income earned by a salesman is computed as shown
    Fixed allowance is Ksh 5,000;
    Sales range from 10K but less than 20k is 7 percent
    sales  range from 20k but less than 50k is 9 percent
    from 50k and above commision is 12 percent
    tax is 10 percent of income of atleast 10k
    gross income == fixed allowance + commision
    net income = gross income - tax
    Write a c++ program to input the sales of each of the 5 salesmen and compute
    their commision, tax, gross income and net income for each sales man
    use structures and arrays, output the records in a suitable format. 

    */
    return 0;
}