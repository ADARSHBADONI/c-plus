#include<iostream>
using namespace std;
class X{
public:
char name[10];
int age;
};
class Y:private X{
protected:
int w;
public:
void getdata(){
cout<<"enter the name"<<endl;
cin>>name;
cout<<"age"<<endl;
cin>>age;
cout<<"marks"<<endl;
cin>>w;
}
void showdata(){
cout<<"student details are"<<endl;
cout<<name<<endl;
cout<<age<<endl;
cout<<w<<endl;
}
};
class result:private Y{
public:
void marks(){
getdata();}
void report(){
showdata();
cout<<"result is:"<<w/100.0;
cout<<"percent"<<endl;
}
};
int main(){
result obj;
obj.marks();
obj.report();
return 0;
}
