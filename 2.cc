#include <iostream>
using namespace std;

int main()
{
  int a;
    cout << "points:";
    cin >> a;
    if (a<6){
      cout << "nzd(1)";
    }else if(a==6){
      cout << "zd(2)";
    }else if(a==7){
      cout << "db(3)";
    }else if(a==8){
      cout << "pdb(4)";
    }else{
      cout << "odl(5)";
    }
    return 0;
}
