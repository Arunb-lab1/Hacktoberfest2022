#include<iostream>
using namespace std;
struct{
    char name[20];
    int PPL,Maths;
}s1,s2,s3,s4,s5;
int main(){
    cout<<"Name ";
    cin>>s1.name>>s2.name>>s3.name>>s4.name>>s5.name;
    cout<<"PPL ";
    cin>>s1.PPL>>s2.PPL>>s3.PPL>>s4.PPL>>s5.PPL;
    cout<<"Maths ";
    cin>>s1.Maths>>s2.Maths>>s3.Maths>>s4.Maths>>s5.Maths;
int avg1=(s1.PPL+s1.Maths)/2;
int avg2=(s2.PPL+s2.Maths)/2;
int avg3=(s3.PPL+s3.Maths)/2;
int avg4=(s4.PPL+s4.Maths)/2;
int avg5=(s5.PPL+s5.Maths)/2;
cout<<"avg:"<<"    "<<avg1<<"   "<<avg2<<"   "<<avg3<<"   "<<avg4<<"   "<<avg5;
return 0;

}
