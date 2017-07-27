/* 
 * File:   main.cpp
 * Author: Christopher Ramirez-Alba
 * Created on June 29, 2017, 11:48 PM
 *Purpose: How Much Insurance?
 */
 
 //System Librariez
#include <iostream>     //Input/Output Library
#include <iomanip>
using namespace std;    //Libraries using namespace standard

//User Libraries
 
 //Global Constant -> Physics/Math/Conversion

//Function Prototypes
int main(int argc, char** argv) {
    //Declare variables
    float Inprcnt,      //Minimum percent of insurance cost
            rplCost,    //Cost of home/building replacement
            MinAmnt;    //Minimum amount of insurance cost
  
    //Initialize variables
    Inprcnt=.80f;       //Minimum 80% percent
            
    //Map inputs to outputs or process the data
    cout<<"Enter amount of replacement cost: "<<endl;
    cin>>rplCost;
    
    //Process/Calculations Here
    MinAmnt=rplCost*Inprcnt;
    
    //Output the transformed data
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<""<<endl;
    cout<<"Minimum cost of insurance property: $"<<MinAmnt<<endl;
    
    //Exit stage right!
    return 0;
}