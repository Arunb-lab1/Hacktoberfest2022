#include <iostream>
using namespace std;


long long factorial(int n)
{
    long long fact = 1;
    for(int i = 2 ; i <= n; i++){
        fact = fact * i;
    }
    return fact;
}

// Driver code
int main()
{
    int num ;
    cout<<"Enter the number: ";
    cin>>num;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}
