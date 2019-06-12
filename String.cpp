#include <iostream>
#include <cstring>
using namespace std;


int main(){

char name[20] ;
cout<< name<<endl;

strncpy(name, "Michael Shabas", 7);
int len = strlen("Michael Shaba");
cout<< name<<endl;
cout<<len<<endl;

char a[100];
cin.getline(a, 100);
cout<<a<<"End of the output is here"<<endl;


    return 0;
}