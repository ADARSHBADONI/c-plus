#include<iostream>//array of object (tollboot)
using namespace std;
class tollbooth
{
unsigned int count; 
double amount;
public:
void initialise_tozero();
void display();
void paying_car();
void no_payingcar();
};
void tollbooth::initialise_tozero()
{
count=0;
amount=0;
}
void tollbooth::paying_car()
{
amount=amount+50;
count++
}
void student::putdata()
{
cout<<id <<endl<< name<<endl;
}
int main()
{
student s[60];
int n,i;
cout<<"enter the no of students"<<endl;
cin>>n;
for(i=0;i<n;i++)
s[i].getdata();
for(i=0;i<n;i++)
s[i].putdata();
return 0;
}
