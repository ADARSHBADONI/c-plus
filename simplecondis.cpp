#include<iostream>//SIMPLE CONSTRUCTOR DISTRUCTOR
using namespace std;
class A{
public:
A(){
cout<<"this is A"<<endl;
}
~A(){
cout<<"this is A distructor"<<endl;
}

};
class B:public A
{
public:
B():A(){
cout<<"this is B"<<endl;
}
~B()
{
cout<<"this is B distructor"<<endl;
}

};
int main()
{
B obj;
}
