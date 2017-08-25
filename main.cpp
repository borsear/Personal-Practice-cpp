#include<iostream>
using namespace std;

int number1=5;
int number2=6;

extern int addition(int number1,int number2);

int main()
{
	cout<<addition(number1,number2)<<endl;
	//cout<<"into the main";
	return 0;
}
