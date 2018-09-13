#include <iostream>
using namespace std;

int main()
{
  float a,b,c,d,v;
  cout<<"Vpisi Volumen soda,Visina soda, Razdalja luknje od tleh, L/min, koliko min"<<endl;
  cin>>a>>c>>d>>b>>v;
  v*=b;
  a*=(c-d)/c;
  if(v>a)v=a;
  cout<<v<<"L je izteklo iz soda v primeru da sod stoji pokonci in nima spremenjajocega premera";
  return 0;
}
