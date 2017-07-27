/* 
 * File:   main.cpp
 * Author: Christopher Ramirez-Alba
 * Created on June 29, 2017, 11:24 PM
 *Purpose: How Many Calories?
 */
 
 //System Librariez
#include <iostream>     //Input/Output Library
using namespace std;    //Libraries using namespace standard

//User Libraries
 
 //Global Constant -> Physics/Math/Conversion

//Function Prototypes
int main(int argc, char** argv) {
    //Declare variables
    int nCokis,     //Number of Cookies eaten
            ttlCoks,//Total number of cookies in the bag
            nServs, //Numbers of Servings per bag
            CalsprS,//Amount of Calories per Serving
            TotCals,//Total Calories per bag
            CalprCk,//Calories per cookies
            ClsCnsm;//Amount of Calories consumed
  
    //Initialize variables
    ttlCoks=30;     //30 cookies in a bag
    nServs=10;      //10 Servings in a bag
    CalsprS=300;    //300 Calories per serving
    
    //Map inputs to outputs or process the data
    cout<<"Enter amount of cookies eaten: "<<endl;
    cin>>nCokis;
    
    //Process/Calculations Here
    TotCals=CalsprS*nServs;
    CalprCk=TotCals/ttlCoks;
    ClsCnsm=CalprCk*nCokis;
    
    //Output the transformed data
    cout<<""<<endl;
    cout<<"Your total Calorie consumption is "<<ClsCnsm<<" per cookie."<<endl;
    
    //Exit stage right!
    return 0;
}