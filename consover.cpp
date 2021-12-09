#include<iostream>
using namespace std;
class square{
int a=5;
int area;
public:
square(){
area=0;
}
square(int x){
a=x;
area=a*a;
}
void display(){
cout<<area<<endl;
}
};
int main(){
square obj;
square obj1(10);
obj.display();
obj1.display();
}

