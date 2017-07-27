/* 
 * File:   main.cpp
 * Author: Christopher Ramirez-Alba
 * Created on June 30, 2017, 12:36 PM
 *Purpose: Currency
 */
 
 //System Librariez
#include <iostream>     //Input/Output Library
#include <iomanip>
using namespace std;    //Libraries using namespace standard

//User Libraries
 
 //Global Constant -> Physics/Math/Conversion

//Function Prototypes
int main(int argc, char** argv) {
    //Constant for currency output
    const float YEN_PER_DOLLAR = 98.92;
    const float EUROS_PER_DOLLAR = 0.74;
    
    //Declare variables
    float nDllrs,   //Dollars input to convert
            nYen,   //Dollars converted into Yens
            nEuro;  //Dollars converted into Euros
  
    //Initialize variables
    
    //Map inputs to outputs or process the data
    cout<<"Enter dollar amount to convert: "<<endl;
    cin>>nDllrs;
    
    //Process/Calculations Here
    nYen=nDllrs*YEN_PER_DOLLAR;
    nEuro=nDllrs*EUROS_PER_DOLLAR;
    
    //Output the transformed data
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<""<<endl;
    cout<<"$"<<nDllrs<<" = "<<nYen<<"Yen"<<endl;
    cout<<""<<endl;
    cout<<"$"<<nDllrs<<" = "<<nEuro<<"Euros"<<endl;
    
    //Exit stage right!
    return 0;
}