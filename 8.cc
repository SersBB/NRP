#include <iostream>
using namespace std;

int main()
{
  float a, b;
  cout<<"Vpisi St. Litrov Opravljeno pot v KM"<<endl;
  cin>>b>>a;
  if(b/a>=.05)
    cout <<"Avto ni varcen"<<endl;else
        cout <<"Avto je varcen"<<endl;
  cout<<b/a*100<<"L/100Km"<<endl;
  return 0;
}
