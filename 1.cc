#include <iostream>
#include <vector>
using namespace std;

int main()
{
  string name;
  int a;
  vector<string> A;
  vector<string> B;
  vector<string> C;
    cout << "Enter an name: ";
    cin >> name;
    cout << "Age:";
    cin >> a;
    if (a<16){
      A.push_back(name);
    }else if(a>17){
      C.push_back(name);
    }else{
      B.push_back(name);
    }
    return 0;
}
