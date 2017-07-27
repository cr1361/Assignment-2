/* 
 * File:   main.cpp
 * Author: Christopher Ramirez-Alba
 * Created on June 29, 2017, 11:23 PM
 *Purpose: How Many Widgets?
 */
 
 //System Librariez
#include <iostream>     //Input/Output Library
using namespace std;    //Libraries using namespace standard

//User Libraries
 
 //Global Constant -> Physics/Math/Conversion

//Function Prototypes
int main(int argc, char** argv) {
    //Declare variables
    float WgtWhgt,   //Weight of a widget
           PltWght,   //Weight of the pallet
            PltWgtw; //Weight of pallet with widgets
    int  nWdgts;  //Number of Widgets in a pallet
  
    //Initialize variables
    WgtWhgt=12.50f;
    
    //Map inputs to outputs or process the data
    cout<<"Enter Weight of Empty Pallet: "<<endl;
    cin>>PltWght;
    cout<<"Enter Weight of Pallet with Widgets: "<<endl;
    cin>>PltWgtw;
    
    //Process/Calculations Here
    nWdgts=(PltWgtw-PltWght)/WgtWhgt;
    
    //Output the transformed data
    cout<<"Number of Widgets on Pallet: "<<nWdgts<<endl;
    
    //Exit stage right!
    return 0;
}