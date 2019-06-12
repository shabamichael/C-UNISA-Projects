#include <iostream>
using namespace std;
#include <string>

 template<typename T>
 
 void Print(T value)
{
    cout<<value<<endl;
}

 int main()
 {
   
    Print<int>(5);
    Print<string>("Michael");
    Print<float>(5.5f);
     return 0;
 }