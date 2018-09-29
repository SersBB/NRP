#include <iostream>
using namespace std;
int main(){
    int k, v=0;
    cin>>k;
int input[k];
for(int i =0; i<k;i++){
    cin>>input[i];
    v+= input[i];
}
cout <<"Vsota"<<v;
return 0;
}
