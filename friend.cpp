#include<iostream>
using namespace std;
class complex{
int a;
int b;
public:
complex(int x,int y){
a=x;
b=y;
}
friend void add(complex c);
};
void add(complex c){
cout<<"sum is:"<<c.a+c.b;
}
int main(){
complex c1(2,3);
add(c1);
}
