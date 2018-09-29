#include <iostream>
using namespace std;
int main(){
    int k,v=1;
    cin>>k;
int input[k];
for(int i =0; i<k;i++){
    cin>>input[i];
    if(input[i]%2==0)
    v*=input[i];
}
cout<<v;
return 0;
}
