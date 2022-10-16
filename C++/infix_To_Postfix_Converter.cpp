#include<iostream>
#include<cstring>
#include "./Stack.cpp"

using namespace std;

int checkPrecedence(char op);
string infixToPostfix(string infix);

int main()
{
	string input, result;

	cout << "Enter any Expression: ";
	getline(cin, input);

	result = infixToPostfix(input);

	cout << "\nAfter Converting to Postfix: ";
	cout << result;

	return 0;
}

int checkPrecedence(char op)
{
	if( op == '^' )
		return 6;
	else if( op == '*' || op == '/' || op == '%' )
		return 5;
	else if( op == '+' || op == '-' )	
		return 4;
	else if( op == '<' || op == '>' )
		return 3;
	return -1;
}

string infixToPostfix(string infix)
{
	string postfix;

	

	return postfix;
}