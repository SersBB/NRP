#include <iostream>
using namespace std;

int main()
{
  float a, b;
  cout<<"Vpisi st moznih dock in dosezene"<<endl;
  cin>>b>>a;
  if(a/b<0.6)
    cout<<a/b*100<<"%  Zelo pomanjklivo"<<endl;else
  if(a/b<0.7)
    cout<<a/b*100<<"%  Pomanjklivo"<<endl;else
  if(a/b<0.8)
    cout<<a/b*100<<"%  Dobro"<<endl;else
  if(a/b<0.9)
    cout<<a/b*100<<"%  Zelo dobro"<<endl;
  if(a/b>=0.9)
    cout<<a/b*100<<"%  odlicno"<<endl;
  return 0;
}
