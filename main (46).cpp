#include<iostream>
using namespace std;
int main(){
    int i = 1;
    int k = 0;
    int j =0;
  while(i<=5){
      j =1;
      k= 1;
      while(j <= 10){
         // k = 1;
          if(j <= 6-i){
              k = 1;
              cout<<k ;
              k++;
              j++;
          }
          else if(j>=6-i|| j<=5+i){
              cout<<'*';
                j++;
          }
         // k = 6-i;
          else  
           if(j>=i){
              k = 6-i;
              cout<< k;
              k--;
              j++;
          }
          
          
          
      }
      cout<< endl;
      i++;
  }
  }  