#include <iostream>
#include <cmath>

using namespace std;

class operation
{
	private:
		int op1;
		int op2;
		char oper;
	public:
		operation(int op1, int op2, const char oper);
		operation(int op, const char oper);
		int sum();
		int dif();
		int mul();
		int div();
		int mod();
		int pow();
		int log();
		int sqrt();
		int fact();
		int comp();

};
