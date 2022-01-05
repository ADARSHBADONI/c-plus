#include<iostream>
using namespace std;
class X{
public:
char name[10];
int age;
};
class Y:private X{
private:
int w;
public:
void getdata(){
cout<<"enter the name"<<endl;
cin>>name;
cout<<"enter the age"<<endl;
cin>>age;
cout<<"enter the weight"<<endl;
cin>>w;
}
void showdata(){
cout<<"student details are"<<endl;
cout<<name<<endl;
cout<<age<<endl;
cout<<w<<endl;
}
};
int main(){
Y obj;
obj.getdata();
obj.showdata();
return 0;
}
