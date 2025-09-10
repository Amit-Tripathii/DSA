#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str1;
    cout<<"Emter the string"<<endl;
    getline(cin,str1);

    string revStr=str1;
    reverse(revStr.begin(),revStr.end());

    if(str1==revStr){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"not a palindrome"<<endl;
    }
    return 0;
}