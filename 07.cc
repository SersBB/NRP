       #include <iostream>
       #include <stdlib.h>
       #include <time.h>
       using namespace std;
       
       int main()
       {
           int i=1,k;
           cin>>k;
           srand (time(NULL));
           while(i<=k){
               cout<<rand()%10+1;
               i++;
           }
       }
