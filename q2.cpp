//NAME : Muhammad Hassan bin Adnan
//Reg no: FA2020/BSCS/064
//Diagram 2
#include<iostream>
using namespace std;
int main()
{	int size;
	int combo[size];

	
	cout<<"Input a combination of 1s and 0s"<<endl;
	cout<<"First enter the size of combination";
	cin>>size;
	cout<<"Now input your combination: ";
	for(int i=0;i<size;i++)
	{
		cin>>combo[i];
	}

	
	
		if((combo[0]==0 && combo[1]==1) || (combo[1]==0 && combo[0]==1))
		{
			cout<<"Combination not accepted";
		}
		else
		{
			cout<<"Combination is accepted";
		}
    
}
