#include "headers/operations.h"

int main()
{
	int a, b;
	char oper;

	cout<<"enter a number: ";
	cin>>a;
	cout<<"enter another number: ";
	cin>>b;
	cout<<"enter an operator: ";
	cin>>oper;

	operation o(a, b, oper);

	switch(oper)
	{
		case '+':
			cout<<o.sum();
			break;
		case '-':
			cout<<o.dif();
			break;
		case '*':
			cout<<o.mul();
			break;
		case '/':
			cout<<o.div();
			break;
		default:
			cout<<"ERROR no such operator "<< oper<<'\n';
			break;
	}

	return 0;
}
