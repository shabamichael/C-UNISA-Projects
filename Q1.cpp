//Question1.
#include<iostream>
using namespace std;
float calcCharges(int num_days, float daily_rate, float hos_med_charge, float hos_ser_charge)
{
return (num_days * daily_rate + hos_med_charge + hos_ser_charge);
}
float calcCharges(float hos_med_charge, float hos_ser_charge)
{
return hos_med_charge + hos_ser_charge;
}
int main()
{
char patientType;
float charges = 0.0;
int num_days;
float daily_rate;
float hos_med_charge;
float hos_ser_charge;
cout<<"Enter your admission status... Enter \"O\" for out-patient or \"I\" for in-patient."<<endl;
cin>>patientType;
if(patientType == 'I' || patientType == 'i')
{
cout<<"How many days spent in Hospital? "<<endl;
cin>>num_days;
cout<<"Enter daily rate R "<<endl;
cin>>daily_rate;
cout<<"How much are Hospital medication charges? R ";
cin>>hos_med_charge;
cout<<"How much are Hospital services? R "<<endl;
cin>>hos_ser_charge;
charges = calcCharges(num_days, daily_rate, hos_med_charge, hos_ser_charge);
}
else if(patientType == 'O' || patientType == 'o')
{
cout<<"How much are Hospital medication charges? R "<<endl;
cin>>hos_med_charge;
cout<<"How much are Hospital services? R "<<endl;
cin>>hos_ser_charge;
charges = calcCharges(hos_med_charge, hos_ser_charge);
}
cout<<"Total charges R "<<charges<<endl;
return 0;
}
