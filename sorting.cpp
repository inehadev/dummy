// Insertion Sort


// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int InsertionSort (int arr[] , int n ){
    for(int i=1;i<n;i++){
        int current = arr[i];
        int j =i-1;
        while(j>=0 && arr[j]>current){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    return n-1;
    
}

void PrintArray(int arr[] , int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n ;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"The original array is"<<endl;
    PrintArray(arr , n);
    cout<<endl;
    cout<<"After sorting the array"<<endl;
    
    n=InsertionSort(arr,n);
    
    PrintArray(arr , n);
    
   

    return 0;
}


/// Selection sort 

// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int SelectionSort (int arr[] , int n){
    for(int i=0;i<n;i++){
        int min =i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i]  , arr[min]);
    }
    return n-1;
}

void PrintArray(int arr[] , int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n ;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"The original array is"<<endl;
    PrintArray(arr , n);
    cout<<endl;
    cout<<"After sorting the array"<<endl;
    
    n=SelectionSort(arr,n);
    
    PrintArray(arr , n);
    
   

    return 0;
}


/// Bubble Sort


// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int BubbleSort (int arr[] , int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i] ,arr[j]);
            }
        }
    }
    return n-1;
}
void PrintArray(int arr[] , int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n ;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"The original array is"<<endl;
    PrintArray(arr , n);
    cout<<endl;
    cout<<"After sorting the array"<<endl;
    
    n=BubbleSort(arr,n);
    
    PrintArray(arr , n);
    
   

    return 0;
}



/// Merge Sort 
// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void Merge(int arr[] , int low ,  int mid ,  int high ){
   
    int left = low;
    int right = mid+1;
    int temp[high-low+1];
    int k=0;
   
        while(left<=mid && right<=high){
            if(arr[left]<=arr[right]){
               temp[k++]= arr[left++];
            }else{
               temp[k++]= arr[right++];
            }
        }
        
        while(left<=mid){
              temp[k++]= arr[left++];
        }
        while(right<=high){
             temp[k++]= arr[right++];
        }
    
  
    
  
     for (int i = 0; i < k; i++) {
        arr[low + i] = temp[i];
    }
  
}

void MergeSort (int arr[] , int low , int high){
    if(low<high){;
    int mid = (low+high)/2;
    
    MergeSort(arr , low , mid);
    MergeSort(arr , mid+1 , high);
    
    Merge(arr , low , mid , high);
    }
   
}


void PrintArray(int arr[] , int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n ;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"The original array is"<<endl;
    PrintArray(arr , n);
    cout<<endl;
    cout<<"After sorting the array"<<endl;
    
    MergeSort(arr,0 , n-1);
    
    PrintArray(arr , n);
    
   

    return 0;
}



// Quick Sort 


