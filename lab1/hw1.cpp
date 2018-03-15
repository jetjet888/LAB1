#include<iostream>
using namespace std;

int main(void)
{
	int number;
	cout<<"Please input a number:"<<endl;
	cin>>number;
	if(number==1)
	{
		cout<<number<<endl;
	}
	while(number!=1)
	{
		if(number%2==1){
			number=number*3+1;
			cout<<number<<' ';
		}else if(number%2==0){
			number=number/2;
			cout<<number<<' ';
		}
	}
	return 0;
}
