#include <iostream>
using namespace std;
int main(){
    int k;
    cin>>k;
int input[k];
for(int i =0; i<k;i++){
    cin>>input[i];
}
for(int i =0; i<k;i++){
    if(input[i]%4!=0)
    cout<<input[i]<<endl;
}
return 0;
}
