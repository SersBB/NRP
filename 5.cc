#include <iostream>
using namespace std;

int main()
{
  float a=0,b=0,c=0;
  cin>>a>>b>>c;
  if((a+b<c||a+c<b||b+c<a)&&a>0&&b>0&&c>0){
    cout<<"je mogoc";
  }else{
    cout<<"ni mogoc";
  }
  return 0;
}
