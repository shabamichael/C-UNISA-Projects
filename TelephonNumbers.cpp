//(n)
#include<iostream>
using namespace std;
int main()
{
int SIZE;
int totalMarks =0;
cout<<"Please specify the size of your array: ";
cin>> SIZE;
int *marks = new int[SIZE];
for(int i =0; i<SIZE; i++)
{
cout<<"Enter mark for student "<<i+1<<": ";
cin>>marks[i];
totalMarks += marks[i];
}
cout<<"Average mark: "<< totalMarks / SIZE<<endl<<endl;
delete[] marks;
cout<<"Memory deallocated."<<endl;
return 0;
}
