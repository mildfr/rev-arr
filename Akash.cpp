#include <iostream>
using namespace std;
int main()
{
   int arr[4]={4,8,9,10};
   for(int i=0,j=3;i<j;i++,j--){
       int t=arr[i];
       arr[i]=arr[j];
       arr[j]=t;
   }
for(int i=0;i<4;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}