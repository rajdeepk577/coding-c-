#include<iostream>
using namespace std;

int main(){
  /*  int a,b ,c,d;

     cout<<"ente the first num a:";
     cin>>a;

     cout<<"enter the second num b";
     cin>>b;

     cout<<"enter the third num c:";
     cin>>c;
     d=a*b*c;

     cout<<"multi of the two num"<<d;
*/
/*int atm;
cout<<"enter atm pin";
cin>>atm;
if(atm==1323577){
    cout<<"check your balence";
}*/
/*
int a,b, max;
cout<<"enter the two num: ";
cin>>a>>b;
if(a>b)
{
    cout<<"a="<<a;
}
    else 

    {
        cout<<"b="<<b;
    }

  max=(a>b)? a:b;
  cout<<max;
  */
 int ch;
 cout<<"enter the choise :";
 cin>>ch;
 switch (ch)
 {
 case 1: 
    cout<<"sunday";
    break;
 case 2:
    cout<<"monday";
    break;
case 3:
    cout<<"tuesday";
    break;
case 4:
    cout<<"wednesday";
    break;
case 5:
    cout<<"thersday";
    break;
case 6:
    cout<<"friday";
    break;
case 7:
    cout<<"saturday";
    break;

 default:
 cout<< "choise";
 
 } 
 return 0;    
}