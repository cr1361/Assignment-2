/* 
 * File:   main.cpp
 * Author: Christopher Ramirez-Alba
 * Created on June 27, 2017, 1:42 PM
 *Purpose: Average Rainfall
 */
 
 //System Librariez
#include <iostream>     //Input/Output Library
#include <string>
#include <iomanip>
using namespace std;    //Libraries using namespace standard

//User Libraries
 
 //Global Constant -> Physics/Math/Conversion

//Function Prototypes
int main(int argc, char** argv) {
    //Declare variables
    string month1;
    string month2;
    string month3;
    float rain1,
            rain2,
            rain3;
    float avrg;
  
    //Initialize variables
    cout<<"Enter 1st Month: ";
    getline(cin,month1);
    cout<<"Enter 2nd Month: ";
    getline(cin,month2);
    cout<<"Enter 3rd Month: ";
    getline(cin,month3);
    cout<<"Enter 1st Month rainfall amount: ";
    cin>>rain1;
    cout<<"Enter 2nd Month rainfall amount: ";
    cin>>rain2;
    cout<<"Enter 3rd Month rainfall amount: ";
    cin>>rain3;
    
    //Map inputs to outputs or process the data
    avrg=(rain1+rain2+rain3)/3.0;
    
    //Output the transformed data
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<""<<endl;
    cout<<"The average rainfall for "<<month1<<", "<<month2<<" and "<<month3
            <<" is "<<avrg<<endl;
    
    //Exit stage right!
    return 0;
}