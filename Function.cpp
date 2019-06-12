#include <iostream>
using namespace std;


bool LessThanThree(double dA);
void GreaterThan(int x, int y);
void PrintSomeThing();//Prototyping the Function , can also be a FUnction definition
void PrintCrap(int x);//Prototyping the Function, can also be a FUnction definition
int AddNumbers(int a, int b); //Prototyping the function
void PrintArray(int theArray[], int sizeOfArray); //Prototyping the function

int Multiply(int a, int b)
       {
	return a*b;
	}
void MultiplyAndLog(int a, int b)
{
int result = Multiply(a,b);
std::cout<< result<< std::endl ;
}


void PrintNumber(int x)
{
	std ::cout<< "I am printing out an integer " << x << std::endl;
}

void PrintNumber(float x)
{
	std::cout<< "This is a float number " << x<<std::endl;
}


//Main FUnction
int main()
{
	MultiplyAndLog(3,4);
	MultiplyAndLog(3,10);
	MultiplyAndLog(10,10);
	PrintSomeThing();
	PrintCrap(7);
	std::cout<< "The addition of 20 and 30 is " << AddNumbers(20,30)<<endl;

	int a  = 10;
	float b = 20.20;

	PrintNumber(b);
	PrintNumber(a);

	int mike[3] = {20, 30,77};
	int mikky[5] = {1,2,3,4,5};
	

	PrintArray(mike, 3);
	PrintArray(mikky, 5);
	
	GreaterThan(20, 10);
	GreaterThan(10,20);

	double dNumber = 2;
   std:: cout <<  LessThanThree(dNumber) << std::endl;


	return 0; //This means the main fFUnction ran successfully
}







void PrintSomeThing()
{
std::cout<<"I am the text on  the screen"<<std::endl;
std::cout<<"I am the text on  the screen"<<std::endl;
std::cout <<"Hello World. Welcome to my first C++ program on Ubuntu Linux" <<std::endl;
}

void PrintCrap(int x)
{
	cout << "Michael's favourite number is " << x << endl;
}

int AddNumbers(int x, int y)
{
	int answer =  x+y;
	return answer;
} 

void PrintArray(int theArray[], int sizeOfArray){
	for(int x=0; x<sizeOfArray; x++)
	cout<<  theArray[x]<<endl;
}

void GreaterThan(int a, int b){

	if (a<b){
		std::cout<< a << "<" << b << std ::endl;
		}else {
			std::cout << a << ">" << b << std::endl;

		}
	
}

bool LessThanThree(double dA){
	if (dA < 3){
		return true;
	}
	else{
		return false;
	}
}