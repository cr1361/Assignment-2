/* 
 * File:   main.cpp
 * Author: Christopher Ramirez-Alba
 * Created on June 27, 2017, 9:55 AM
 * Purpose:  Male and Female Percentage
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float nMale,nFemale,//Number of Male students and Female students
    Mprcnt, Fprcnt,    //Percentage of Male students and Female students
    totStdn;
    
    //Input or initialize values Here
    
    //Map Inputs and Outputs
    cout<<"Number of Male Students: ";
    cin>>nMale;
    cout<<"Number of Female Student: ";
    cin>>nFemale;
    
    //Process/Calculations Here
    totStdn=nMale+nFemale;
    Mprcnt=(nMale/totStdn)*100;
    Fprcnt=(nFemale/totStdn)*100;
    
    //Output Located Here
   cout<<"Total number of students: "<<totStdn<<endl
           <<""<<endl;
   cout<<"Male Student percent = "<<Mprcnt<<"%"<<endl;
   cout<<"Female Student percent = "<<Fprcnt<<"%"<<endl;
   
    //Exit
    return 0;
}

