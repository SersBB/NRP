#include <iostream>
#include <math.h>

using namespace std;
int main(){
int input[10];
for(int i =0; i<10;i++){
    cin>>input[i];
}
for(int i =9; i>=0;i--){
    if(input[i]>5)
    cout<<input[i]<<endl;
}
return 0;
}
