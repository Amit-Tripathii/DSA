#include<iostream>
using namespace std;
int main(){
    int n=4;
        char alph='A';
        int num=1;

        //top
    for(int i=0;i<n;i++){
     
      //stars1
        for(int j=0;j<i+1;j++){
          
            cout<<"*";
        }
        // spaces1
        
         for(int j=0;j<n-i-1;j++){
            cout<<" ";
         }
        //spaces2
         for(int j=0;j<n-i-1;j++){
            cout<<" ";
         }
         //stars2
         for(int j=0;j<i+1;j++){
          
            cout<<"*";
        }
        
        
      
        cout<<endl;
    }

          //bottom
    for(int i=0;i<n;i++){
     
      //stars1
        for(int j=0;j<n-i;j++){
          
            cout<<"*";
        }
        // spaces1
        
         for(int j=0;j<i;j++){
            cout<<" ";
         }
        //spaces2
         for(int j=0;j<i;j++){
            cout<<" ";
         }
         //stars2
         for(int j=0;j<n-i;j++){
          
            cout<<"*";
        }
        
        
      
        cout<<endl;
    }
}