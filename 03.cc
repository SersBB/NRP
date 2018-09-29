#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
int input[10];
srand( time( NULL ) );
for(int i =0; i<10;i++){
    input[i] = rand() %10 -11;
}
for(int i =9; i>=0;i--){
    cout<<input[i]<<endl;
}
return 0;
}
