#include<iostream>


using namespace std;

int main()
{

  int a ,b ,c,d ,e, f,g;

  cout<<"Enter Two Number"<<endl;
  cin>>a>>b;

  //Performing Bitwise AND

  c=a&b;

  //Performing Bitwise OR

  d=a|b;

  //Performing Bitwise EXOR

  e=a^b;

  //Performing Bitwise RIGHT SHIFT

  f=a>>b;

  //Performing Bitwise LEFT SHIFT

  g=a<<b;


  cout<<"The result of Bitwise AND "<<c<<endl;
  cout<<"The result of Bitwise OR "<<d<<endl;
  cout<<"The result of Bitwise EXOR "<<e<<endl;
  cout<<"The result of Bitwise RIGHT SHIFT "<<f<<endl;
  cout<<"The result of Bitwise LEFT SHIFT "<<g<<endl;


  return 0;

}
