#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"Vnesi zacetno stran in potem koncno"<<endl;
    cin>>a>>b;
    if(b-a>8){
        cout<<"Prebral je minimalno kolicino strani"<<endl;
        if(b-a>15)
            cout<<"Prebral je dovolj za nagrado"<<endl;
        }else
        cout <<"Ni prebral dovolj strani"<<endl;

  return 0;
}
