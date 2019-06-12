//QUESTION3
#include <iostream>
#include <fstream>
#include<cstdlib>
#include <string>

using namespace  std;

int main(){

//////VARIABLE DEFINITIONS
ifstream input_Reg_File;
ofstream Out_Reg_File;
double fine_due =0.0, total_amt_due = 0.0;
string reg_num, reg_num_file;

cout<<"PLEASE ENTER YOUR CAR REGISTRATION NUMBER: ";
cin>>reg_num;
input_Reg_File.open("Fines.dat");
if(input_Reg_File.fail())
{
cout<<"INPUT FILE CAN'T BE OPENED... PROGRAM IS ABORTING!"<<endl;
exit(1);
}
Out_Reg_File.open("OutStandingFines.dat");
if(Out_Reg_File.fail())
{
cout<<"OUTPUT FILE CAN'T BE OPENED... PROGRAM IS ABORTING!"<<endl;
exit(1);
}
cout<<"Fines:"<<endl;
Out_Reg_File<<"Fines:"<<endl;
while(input_Reg_File>>reg_num_file>>fine_due)
{
if(reg_num_file == reg_num)
{
cout<<"R"<<fine_due<<endl;


Out_Reg_File<<"R"<<fine_due<<endl;
total_amt_due+= fine_due;
}
}
cout<<"Total fine due R"<< total_amt_due <<endl;
Out_Reg_File<<"Total fine due R"<< total_amt_due <<endl;
cout<<"CLOSING THE FILE STREAM"<<endl;
Out_Reg_File.close();
input_Reg_File.close();
cout<<"PROGRAM IS SUCCESSFUL , CLOSING FILE STREAM..."<<endl;
return 0;
}
