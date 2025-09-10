#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
    //
    //     char str[] = "apna college";
    //     int len = 0;
    //     for (int i = 0; i < str[i] != '\0'; i++)
    //     {
    //         len++;
    //     }
    //     cout << "Length of string:" << len << endl;

    // string str = "apna college"; // dynamic->runtime resize
    // cout << str << endl;
    // str="hello";
    // cout << str << endl;

    // string str1="apna";
    // string str2="college";

    // string str3=str1+str2; //concatenation
    // cout<<str3<<endl;

    // string str1="shradha";
    // string str2="shradha";
    // cout<<(str1==str2)<<endl;
    // cout<<str1.length()<<endl;

    // string str;

    // getline(cin,str);
    // cout<<"Output:"<<str<<endl;

    // string str="apna college:";
    // for(int i=0;i<str.length();i++){
    //     cout<<str[i]<<" ";
    // }
    // cout<<endl;

    //reverse a string
    string str="apna college";
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    return 0;
}