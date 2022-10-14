#include <iostream>
#include <cstring>
using namespace std;
int vowel(char c)
{
	if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c =='o' || c=='O' || c == 'u' || c == 'U')
		return 1;   // a vowel
	else
		return 0;   // not a vowel
}
int main()
{
	string str,newstr;
	cout<<"Enter a string: ";
	getline(cin,str);
	int len=str.length();
	int j=0;
	for(int i = 0; i<len; i++)
	{
		if(vowel(str[i]) == 0)
		{
			newstr[j] = str[i];    //newstr is string without vowels
			j++;
		}
	}
	newstr[j] = '\0';  //terminate the string
	strcpy(str, newstr);    //copying the new string,  
	cout<<"Modified String:"<<str;
	return 0;
}
