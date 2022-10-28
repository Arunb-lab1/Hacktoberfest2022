#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the maximum range : ";
	cin >> n;
	int flag;
	//skip 0 and 1 as they are not prime 
	for (int i = 2; i <= n; i++)
	{
		flag = 1;
		for (int j = 2; j <= i / 2; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
			}
			
		}
		if (flag == 1)
		{
			cout << i << " ";
		}
	}

	return 0;
}