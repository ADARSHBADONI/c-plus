#include<iostream>
using namespace std;

class student{
private:
int id;
char name[20];
public:
void getstu(){
cout<<"enter id and name"<<endl;
cin>>id>>name;
}
void putstu(){
cout<<"id is"<<id<<endl;
cout<<"name is"<<name<<endl;
}
};
class marks
{
protected:
float m1,m2,m3;
public:
void getmarks()
{
cout<<"enter marks of 3 subjects"<<endl;
cin>>m1>>m2>>m3;

}
void putmarks()
{
cout<<"marks are"<<"1."<<m1<<"2."<<m2<<"3."<<m3;
}
};
class result:private student,protected marks{

public:
void tmarks()
{
getstu();
getmarks();
putstu();
putmarks();
cout<<"total marks is :"<<m1+m2+m3;
cout<<"average is :"<<(m1+m2+m3)/3.0;
}
};
main()
{
result p;
p.tmarks();
}
