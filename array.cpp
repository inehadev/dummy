
#include <iostream>
using namespace std;

int DeleteElement(int arr[] , int n, int key){
    int i;
    for( i=0;i<n;i++){
        if(arr[i]==key){
           break;
        }
    }
    if(i==n){
        cout<<"key not found";
        return n;
    }
    
    for(int j=i;j<n-1;j++ ){
        arr[j]=arr[j+1];
    }
    return n-1;
  
}
void PrintArray(int arr[] , int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main() {
    int n;
  int key;
    cout<<"enter the value of n"<<endl;
    cin>>n;
      int arr[n];
    cout<<"enter the value of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter element to delete"<<endl;
    cin>>key;
    cout<<"the traversal of array is:"<<endl;
   PrintArray(arr , n);
    
    n= DeleteElement(arr, n,  key);
   cout<<"after deleteion of the element "<<endl;
   PrintArray(arr , n);
   
   
   
    
    

    return 0;
}