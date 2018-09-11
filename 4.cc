#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int a, i=0;
  string b;
  cout<<"kdo si:";
  cin >>b;
  cout<<"PIN:";
  cin>>a;
  if(b=="Direktor"&&a==1111)
    cout<<"Pravilno geslo";
  if(b=="Tajnica"&&a==8888)
    cout<<"Pravilno geslo";
  if(b=="Racunovodja"&&a==4444)
    cout<<"Pravilno geslo";
  if(b=="Delavci"&&a==7777)
    cout<<"Pravilno geslo";
  if(b=="Snayilka"&&a==3333)
    cout<<"Pravilno geslo";
  if(b=="Hisnik"&&a==5555)
    cout<<"Pravilno geslo";
  return 0;
}
