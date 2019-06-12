
#include <iostream>
using namespace std;




int calcCharges(string patient_name, int num_days, int daily_rate, double med_charges,double total_charges,double serv_charge);
int calcCharges(string patient_name,double med_charges,double total_charges,double serv_charge);


//Main FUnction
int main(){


///////////////////////////////VARIABLE DEFINITIONS/////////////////////////////////////////////
char input;
string patient_name;
int  num_days;
double  daily_rate,  med_charges, total_charges, serv_charge;
///////////////////////////////////////////////////////////////////////////////////////////////


cout <<"WELCOME TO THE APPLICATION USED TO CHARGE PATIENT\'s HOSPITAL STAY" << endl;
cout<<"\n"<< endl;
cout<<"PLEASE ENTER PATIENTS NAME:- " ;
cin >> patient_name;
cout << "Computing the charges for " << patient_name << "\'s hospital stay" <<endl;
cout<<"\n"<< endl;
cout<< "PLEASE FOLLOW THE INSTRUCTIONS CAREFULLY"<<endl;

cout<<"\n"<<endl;
cout<<"ENTER \"i OR I\" if "<<patient_name << " was an in-patient "<<endl;
cout<<"ENTER \"o OR O\" if "<<patient_name << " was an out-patient "<< endl;

cout<<"\n"<<endl;


for(int i =1; i<4; i++)
{
cout<<"ENTER OPTION: ";
cin>>input;

//If the patient is an in-patient
if (input =='i' || input =='I')
{
calcCharges( patient_name,  num_days,  daily_rate,  med_charges, total_charges, serv_charge);

}


else if(input == 'o' or input=='O')
{
calcCharges( patient_name, med_charges, total_charges, serv_charge);


}

else if(input == 'Q' or input=='q')
{

}

else
{
cout<<"YOUR SELECTION IS NOT RECOGNISED, "<<endl;
cout<<"\n";
cout<<"PLEASE ENTER \"i OR I\" FOR IN-PATIENT"<<endl;
cout<<"PLEASE ENTER\"o OR O\" FOR OUT-PATIENT "<<endl;

cout<<"\n";

cout<<"OTHERWISE PRESS \"Q\" OR \"q\" TO QUIT AND EXIT APPLICATION."<<endl;

}
}
    return 0;
}





//Function for an In Patient
int calcCharges(string patient_name, int num_days, int daily_rate, double med_charges,double total_charges,double serv_charge)
{
cout<<patient_name << " IS AN IN-PATIENT"<<endl;
cout<<"\n"<<endl;

cout<<"ENTER THE NUMBER OF DAYS SPENT IN THE HOSPITAL:- ";
cin>>num_days;

cout<<"ENTER THE DAILY RATE:- R";
cin>>daily_rate;

cout<<"ENTER THE HOSPITAL MEDICATION CHARGES:- R";
cin>>med_charges;

cout<<"ENTER THE HOSPITAL SERVICE CHARGE:- R";
cin>>serv_charge;

cout<<"\n"<<endl;
cout<<"\n"<<endl;
cout<< patient_name << " TOTAL HOSPITAL BILL BREAKDOWN IS AS FOLLOWS:"<<endl ;
cout<<"\n"<<endl;
cout<<"NUMBER OF DAYS SPENT IN THE HOSPITAL:- "<< num_days<<endl;
cout<<"DAILY RATE:- " <<daily_rate<<endl;
cout<<"HOSPITAL MEDICATION CHARGES:- "<<med_charges<<endl;
cout<<"HOSPITAL SERVICE CHARGE:- "<<serv_charge<<endl;
cout<<"\n"<<endl;
cout<<"\n"<<endl;
total_charges = (num_days*daily_rate) + med_charges + serv_charge;
cout<<"TOTAL BILL CHARGED TO " <<patient_name<<" IS:- R" <<total_charges<<endl;
cout<<"\n"<<endl;
return total_charges;

}


//Fuctiion for an Out Patient
int calcCharges(string patient_name,double med_charges,double total_charges,double serv_charge)
{
cout <<patient_name<< " IS AN OUT-PATIENT"<<endl;
cout<<"ENTER THE HOSPITAL MEDICATION CHARGES:- R";
cin>>med_charges;

cout<<"ENTER THE HOSPITAL SERVICE CHARGE:- R";
cin>>serv_charge;

cout<<"\n"<<endl;
cout<<"\n"<<endl;
cout<< patient_name << " TOTAL HOSPITAL BILL BREAKDOWN IS AS FOLLOWS:"<<endl ;
cout<<"\n"<<endl;

cout<<"HOSPITAL MEDICATION CHARGES:- "<<med_charges<<endl;
cout<<"HOSPITAL SERVICE CHARGE:- "<<serv_charge<<endl;
cout<<"\n"<<endl;
cout<<"\n"<<endl;

total_charges = med_charges + serv_charge;
cout<<"TOTAL BILL CHARGED TO " <<patient_name<<" IS:- R" <<total_charges<<endl;
cout<<"\n"<<endl;

return total_charges;
}
