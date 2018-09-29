#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
    int k;
    cin>>k;
int input[k];
srand( time( NULL ) );
for(int i =0; i<k;i++){
    input[i] = rand() %10 -11;
}
for(int i =0; i<k;i++){
    cout<<input[i]<<endl;
}
return 0;
}
