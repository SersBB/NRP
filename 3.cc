#include <iostream>
using namespace std;

int main()
{
  int a, i=0;
  while(true==true){
    cout << "Ugani stevilo:";
    cin >> a;
    i++;
    if (a==6){
      cout << "Bravo! Zadel si!"<<endl<<"Uganil si v ";
      break;
    }else if(a>6){
      cout << "Preveliko"<<endl;
    }else{
      cout << "Premalo"<<endl;
    }
  }
  cout <<i<<". Poskusu"<<endl;
  return 0;
}
