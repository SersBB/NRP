#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
    int k, v=0;
    cin>>k;
int input[k];
srand( time( NULL ) );
for(int i =0; i<k;i++){
    input[i] = rand() %10 -11;
    v+= input[i];
}
for(int i =0; i<k;i++){
    cout<<input[i]<<endl;
}
cout <<"Vsota"<<v;
return 0;
}
