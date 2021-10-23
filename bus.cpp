#include<iostream>
using namespace std;
class bus
{
int bus_number;
string from;//place name
string to;//destination
char type;
int distance;//in km
int fare;
public:
bus()
{
type='O';
fare=500;
}

void initialise()
{
cout<<"enter bus_number , place name , destination , type , distance"<<endl;
cin>>bus_number>>from>>to>>type>>distance;
}
void calculate_fare()
{
if(type=='O')
fare=15*distance;
if(type=='E')
fare=20*distance;
if(type=='L')
fare=24*distance;
}
void display()
{
cout<<"bus details are:"<<endl;
cout<<"bus number:"<<bus_number<<endl<<"place name:"<<from<<endl<<"destination:"<<to<<endl<<"bus type:"<<type<<endl<<"distance"<<distance<<endl<<"fare"<<fare;
}};
int main()
{
bus b;
b.initialise();
b.calculate_fare();
b.display();
}
