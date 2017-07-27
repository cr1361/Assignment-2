/* 
 * File:   main.cpp
 * Author: Christopher Ramirez-Alba
 * Created on June 29, 2017, 12:00 AM
 *Purpose: Automobile Costs
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
    float LnPay,        //Auto Loan Payment
            InsPay,     //Insurance Payment
            GasPay,     //Gasoline Payment
            OilPay,     //Car Oil Payment
            TirePay,    //Car Tire Payment
            MainPay,    //Maintenance Cost
            MontTtl,    //Total monthly charges
            YearTtl;    //Total Yearly Charges
  
    //Initialize variables
    
    //Map inputs to outputs or process the data
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Enter Auto Loan amount: "<<endl;
    cin>>LnPay;
    cout<<"Enter Insurance cost: "<<endl;
    cin>>InsPay;
    cout<<"Enter Monthly Gas cost: "<<endl;
    cin>>GasPay;
    cout<<"Enter Monthly Oil cost; "<<endl;
    cin>>OilPay;
    cout<<"Enter Tire payment: "<<endl;
    cin>>TirePay;
    cout<<"Enter Monthly Maintenance Cost: "<<endl;
    cin>>MainPay;
    
    //Process/Calculations Here
    MontTtl=LnPay+InsPay+GasPay+OilPay+TirePay+MainPay;
    YearTtl=MontTtl*12;
    
    //Output the transformed data
    cout<<""<<endl<<""<<endl;
    cout<<"Total Monthly Automobile Cost = $"<<MontTtl<<endl;
    cout<<"Total Yearly Automobile Cost = $"<<YearTtl<<endl;
    
    //Exit stage right!
    return 0;
}