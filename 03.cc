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
                if(r<k-i)
                     vek[i][r]=k-i-r;
        else vek[i][r]=0;
        }
    }
    for(i=0;i<k;i++){
        for(r=0;r<k;r++){
        cout<<vek[i][r]<<"  ";
        }
        cout<<endl;
    }
}
