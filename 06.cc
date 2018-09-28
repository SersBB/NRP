#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i=0,k,r=0;
    cin>>k;
    int vek[k][k]={0};
    for(i=0;i<k;i++){
        for(r=0;r<k;r++){
            vek[i][r]=i+1;
        }
    }
    for(i=0;i<k;i++){
        for(r=0;r<k;r++){
        cout<<vek[i][r]<<"  ";
        }
        cout<<endl;
    }
}
