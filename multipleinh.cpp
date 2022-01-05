#include<iostream>
using namespace std;
class X{
public:
int x;
};
class Y{
public:
int y;
};
class result:private X,private Y{
private:
int z;
public:
void setdata(int i,int j,int k){
x=i;
y=j;
z=k;
}
void showdata(){
cout<<x<<endl<<y<<endl<<z<<endl;
}
};
int main(){
result obj;
obj.setdata(5,6,8);
obj.showdata();
return 0;
}
