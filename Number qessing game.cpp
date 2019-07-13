#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
int guess;
int a=rand()%10;
cout<<"This is a Number Qessing game so enter a number from 1 to 10"<<endl;
cout<<"qess a number:";
cin>>guess;
while(a!=guess){
    cout<<"guess a number:";
    cin>>guess;
}
cout<<" your right\n\n";
cout<<"\t\t\t\t\t PRESS ANY KEY TO EXIT!!!\n";
getch();
     return 0;
}
