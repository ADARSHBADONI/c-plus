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
class phy: private student
{
private:
float h,w;
public:
void getphy()
{getstu();
cout<<"enter height and weight"<<endl;
cin>>h>>w;
}
void putphy()
{
putstu();
cout<<"height is"<<h;
cout<<"weight is"<<w;
}
};
main()
{
phy p;
p.getphy();
p.putphy();
}
