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
    int o[k]={0};
    for(i=0;i<k;i++){
            int p=0;
        for(r=0;r<k;r++){
                o[r]+=vek[i][r];
                p+=vek[i][r];
        cout<<vek[i][r]<<"  ";
        }
        cout<<"         "<<p<<endl;
    }
    for(r=0;r<k;r++){
        cout<<o[r]<<"  ";
    }
}
