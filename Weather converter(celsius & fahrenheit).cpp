#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
int c,f;
char ans,h='y';
while(h=='y')
{
cout<<"\nPRESS c TO CONVERT CELSIUS DEGREE TO FAHRENHEIT OR PRESS f TO CONVERT FAHRENHEIT TO CELSIUS:";
ans=getche();
cout<<"\n";
if(ans=='c')
{
cout<<"CELSIUS:";
cin>>c;
f=c*1.8+32;
cout<<"FAHRENHEIT="<<f<<endl;
}
if(ans=='f')
{
cout<<"FAHRENHEIT:";
cin>>f;
c=(f-32)/1.8;
cout<<"CELSIUS="<<c<<endl;
}
cout<<"DO YOU WANT TO CONTINUE(y/n)?:";
h=getche();

}
cout<<"\n \t\t\t\t PRESS ANY KEY TO EXIT!!!";
getch();
    return 0;
}
