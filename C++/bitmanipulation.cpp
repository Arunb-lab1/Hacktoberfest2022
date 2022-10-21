#include<iostream>
using namespace std;

int getBit(int n,int pos){       //to get the bit at a particular position
	return ((n & (1<<pos))!=0);
}
int setBit(int n,int pos){       //to put the bit at a particular position
	return(n|(1<<pos));
}
int clearBit(int n, int pos){    //to clear the bit at that postion
	int mask =~(1<<pos);
	return (n & mask);
}
int updateBit(int n,int pos, int value){// to update the bit at a particular position
	int mask = ~(1<<pos);
	n=n&mask;
	return(n|(value<<pos));
}
int main(){
	
	cout<<getBit(5,2)<<endl;
	cout<<setBit(5,1)<<endl;
	cout<<clearBit(5,2)<<endl;
	cout<<updateBit(5,1,1)<<endl;
	return 0;
}
