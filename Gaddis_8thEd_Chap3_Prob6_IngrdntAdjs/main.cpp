/* 
 * File:   main.cpp
 * Author: Christopher Ramirez-Alba
 * Created on June 28, 2017, 10:36 AM
 * Purpose:  Box Office
 */

//System Libraries Here
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

    //Program Execution Begins Here
int main(int argc, char** argv) {     
    //Declare all Variables
    int AdltT,      //Adult Tickets sold
            ChldT;  //Child Tickets sold
    string name;      //Name of movie
    float Aamnt,    //Adult ticket Cost
            Camnt,  //Child ticket Cost
            Ntprcnt,//Percentage kept from theater
            totAdlt,//Total amount made from Adult tickets
            totChld,//Total amount made from Child tickets
            Gprft,  //Gross off Box office profit
            Ntprft, //Net Box office profit
            Amntdis;//Amount paid to the Distributor
    
    //System Time
    Aamnt=10.0f; 
    Camnt=6.0f;
    Ntprcnt=.20f;
    
    //
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Movie Name: "<<endl;
    getline(cin,name);
    cout<<"Adult Tickets Sold: "<<endl;
    cin>>AdltT;
    cout<<"Child Tickets Sold: "<<endl;
    cin>>ChldT;
    
    //Map Output to input
    Gprft=(AdltT*Aamnt)+(ChldT*Camnt);
    Ntprft=Gprft*Ntprcnt;
    Amntdis=Gprft-Ntprft;
            
    //Output
    cout<<""<<endl;
    cout<<"Movie Name: "<<name<<endl;
    cout<<"Adult Tickets Sold: "<<AdltT<<endl;
    cout<<"Child Tickets Sold: "<<ChldT<<endl;
    cout<<"Gross Box Office Profit: $"<<Gprft<<endl;
    cout<<"Net Box Office Profit: $"<<Ntprft<<endl;
    cout<<"Amount Paid to Distributor: $"<<Amntdis<<endl;

    //Exit
    return 0;
}

