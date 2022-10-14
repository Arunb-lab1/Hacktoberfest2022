#include<iostream>
using namespace std;
int linearsearch(int array[],int n,int key){
    for(int i=0;i<n;i++){
        if (array[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int array[n];
    cout<<"Enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"Enter the element for which you want to search for:";
    int key;
    cin>>key;
    cout<<"Index is:"<<linearsearch(array,n,key);
    return 0;
}
