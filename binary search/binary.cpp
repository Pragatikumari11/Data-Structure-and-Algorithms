/*#include <iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start +(end-start)/2;
      while(start<end)
      {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(arr[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=start +(end-start)/2;
      }
      return -1;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int key=3;
    int index=binarysearch(arr,5,3);
    cout<<index<<endl;
    return 0;}*/






/*
#include <iostream>
using namespace std;

int startelement(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start +(end-start)/2;
      while(start<end)
      {
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        if(arr[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=start +(end-start)/2;
      }
      return ans;
}

int endelement(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start +(end-start)/2;
      while(start<end)
      {
        if(arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        if(arr[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=start +(end-start)/2;
      }
      return ans;
}

int main()
{
int arr[5]={1,2,3,3,4};
cout<<"first occurance of 3 is"<<startelement(arr,5,3)<<endl;
cout<<"last occurance of 3 is"<<endelement(arr,5,3)<<endl;

return 0;




}*/











//pivot in an rotated array

/*
#include <iostream>
using namespace std;
int getpivot(int arr[],int n){
int e=n-1;
int s=0;
int mid=s+(e-s)/2;
while(s<e){
if(arr[mid]>=arr[0])
{
     s=mid+1;
}
else{
    e=mid;
}
    mid=s+(e-s)/2;
}
   return s;
}
int main(){


int arr[5]={8,9,1,2,3};
cout<<"pivote element :"<<getpivot(arr,3)<<endl;

return 0;
}*/




//search in an sorted array
/*

#include <iostream>
using namespace std;
int getpivot(int arr[],int n){
int e=n-1;
int s=0;
int mid=s+(e-s)/2;
while(s<e){
if(arr[mid]>=arr[0])
{
     s=mid+1;
}
else{
    e=mid;
}
    mid=s+(e-s)/2;
}
   return s;
}

int binarysearch(int arr[],int s,int e,int key){
    int start=s;
    int end=e;
    int mid=start +(end-start)/2;
      while(start<end)
      {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(arr[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=start +(end-start)/2;
      }
      return -1;
}



int findposition(int arr[],int n,int k)
{
int pivot= getpivot(arr,n);
if(k>=arr[pivot] && k<=arr[n-1])
{
    return binarysearch(arr,pivot,n-1,k);
}
else{
    return binarysearch(arr,0,pivot-1,k);
}    

}*/






//swapping  using swap funtion and vector
/*
#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse (vector<int> v){
      
       int s=0,e=v.size()-1;
          while(s<=e){
           swap(v[s],v[e]);
           s++;
           e--;
          }
        return v;
}

void print(vector<int> v){

        for(int i=0;i<v.size();i++){
           cout<<v[i]<<" ";
        }
           cout<<endl;
}

int main(){
    vector<int> v;

    v.push_back(2);
    v.push_back(4);
    v.push_back(9);
    v.push_back(88);
    v.push_back(11);

vector<int> ans=  reverse(v);

cout<<"printing reverse array"<<endl;
print(ans);

return 0;
}*/






//adding two sorted arrays in aone array


#include <iostream>
#include <vector>
using namespace std;


void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
      int i=0;int j=0;int k=0;
      while(i<n && j<m){
          if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];}
          else{
            arr3[k++]=arr2[j++];
          }
      }
      while(i<n){
           arr3[k++]=arr1[i++];
      }
       while(j<m){
           arr3[k++]=arr2[j++];
    }
}



void print(int ans[],int k){
      for(int i=0;i<k;i++){
       cout<<ans[i]<<" ";
      }
 cout<<endl;
}






int main(){

int arr1[5]={1,3,5,6,9};
int arr2[3]={2,4,7};
int arr3[8]={0};

merge(arr1,5,arr2,3,arr3);
print(arr3,8);


    return 0;
}


