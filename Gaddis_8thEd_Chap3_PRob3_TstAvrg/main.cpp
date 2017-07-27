/* 
 * File:   main.cpp
 * Author: Christopher Ramirez-Alba
 * Created on June 27, 2017, 10:47 AM
 *Purpose: Test Average
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
    float test1, test2, test3, test4, test5;
    float avrg;
    
    //Initialize variables
    cout<<"First test score: ";
    cin>>test1;
    cout<<"Second test score: ";
    cin>>test2;
    cout<<"Third test score: ";
    cin>>test3;
    cout<<"Fourth test score: ";
    cin>>test4;
    cout<<"Fifth test score: ";
    cin>>test5;
    
    //Map inputs to outputs or process the data
    avrg = (test1+test2+test3+test4+test5)/5.0;
    
    //Output the transformed data
    cout<<setprecision(1)<<fixed;
    cout<<"1st Test: "<<setw(1)<<test1<<endl;
    cout<<"2nd Test: "<<setw(1)<<test2<<endl;
    cout<<"3rd Test: "<<setw(1)<<test3<<endl;
    cout<<"4th Test: "<<setw(1)<<test4<<endl;
    cout<<"5th Test: "<<setw(1)<<test5<<endl;
    cout<<"Average score is: "<<setw(1)<<avrg<<endl;
    
    //Exit stage right!
    return 0;
}