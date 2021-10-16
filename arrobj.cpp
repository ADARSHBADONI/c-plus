#include<iostream>//array of object student id ,name
using namespace std;
class student
{
int id;
char name[20];
public:
void getdata();
void putdata();
};
void student::getdata()
{
cout<<"enter id"<<endl;
cin>>id;
cout<<"enter the name"<<endl;
cin>>name;
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
