#include <iostream>
using namespace std;

void intersectarray(int arr1[],int arr2[], int sz1,int sz2)
{
    
    for (int i = 0; i < sz1; i++){
        for(int j=0;j<sz2;j++){
            if (arr1[i]==arr2[j]){
                cout<<arr2[j]<<" ";
            }
        }
    }
    cout<<endl;
}

int main(){
int nums[]={1,2,4,6,8,9,6,5};
int sz=8;
int num2[]={2,9,0,6,7,22,3};
int sz2=7;
intersectarray(nums,num2,8,7);

}