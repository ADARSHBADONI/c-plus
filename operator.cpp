#include<iostream>
using namespace std;
class complex{
int a;
int b;
public:
void setdata(int x,int y){
a=x;
b=y;
}
void showdata(){
cout<<a<<endl;
cout<<b<<endl;
}
complex operator +(complex c)
{
complex temp;
temp.a=a+c.a;
temp.b=b+c.b;
return(temp);
}
};
int main()
{
complex c1,c2,c3;
c1.setdata(5,10);
c2.setdata(15,5);
c3=c1+c2;
c3.showdata();
}



