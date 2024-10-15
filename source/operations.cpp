#include "../headers/operations.h"

operation::operation(int op1, int op2, const char oper)
{
	this->op1=op1;
	this->op2=op2;
	this->oper=oper;

}

int operation::sum()
{
	return op1+op2;
}

int operation::dif()
{
	return op1-op2;
}

int operation::mul()
{
	return op1*op2;
}

int operation::div()
{
	return op1/op2;
}

