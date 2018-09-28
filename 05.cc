       #include <iostream>
       using namespace std;
       
       int main()
       {
           int i=1,a=0,b,k;
           cin>>k;
           while(i<=k){
                   cin>>b;
               a+=b;
               i++;
           }
           cout<<a/(k);
       }
