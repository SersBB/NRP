#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i=0,k,r=0;
    cin>>k;
    int vek[k][k]={0};
    for(i=0;i<k;i++){
        int b=0;
        for(r=0;r<k;r++){
                if(r+2>k-i){
                    b++;
                    vek[i][r]=k-b+1;
                }
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
