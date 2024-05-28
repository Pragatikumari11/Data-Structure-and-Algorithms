/*#include<iostream>
#include <math.h>
using namespace std;


int getMax(int arr[],int size){
    int max = INT_MIN;
    for(int i=0;i<size;i++){
    if(arr[i]>max)
    {max=arr[i];}
    }
    return max;
}

int getMin(int arr[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
    if(arr[i]<min)
    {min=arr[i];}
    }
    return min;
}

int main(){

int size ;
cin>> size;
 int arr[100];
  for (int i=0;i<size;i++){
cin>>arr[i];

  }
  cout<<"maximum number is"<<getMax(arr,size)<<endl;
  cout<<"minimum number is"<<getMin(arr,size)<<endl;

return 0;

}
*/





/*
#include<iostream>
#include<climits>
using namespace std;

int getMin(int num[], int n) {

    int mini = INT_MAX;
    
    for(int i = 0; i<n; i++) {
        
        mini = min( mini, num[i]);
        
        //if(num[i] < min){
        //    min = num[i];
        //}
    }

    //returning min value
    return mini;
}

int getMax(int num[], int n) {

    int maxi = INT_MIN;
    
    for(int i = 0; i<n; i++) {

        maxi = max(maxi, num[i]);

       // if(num[i] > max){
         //   max = num[i];
       // }
    }

    //returning max value
    return maxi;
}

int main() {

    int size;
    cin >> size;

    int num[100];

    //taking input in array
    for(int i = 0; i<size; i++) {
        cin >> num[i];
    }

    cout << " Maximum value is " << getMax(num, size) << endl;
    cout << " Minimum value is " << getMin(num, size) << endl;


    return 0;
}

*/






/*
#include <iostream>
using namespace std;
int sumofarr(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];

    } 
    return sum;
}
int main(){
int size;
cin>>size;
int arr[100];
for(int i=0;i<size;i++){
    cin>> arr[i];
}
cout<<"sum :"<<sumofarr(arr,size)<<endl;

}
*/









//Lenear Search




/*
#include <iostream>
using namespace std;
bool search(int arr[],int size,int key){

    for(int i=0;i<size;i++){
if(arr[i]==key){ 
    return 1;
}
    }
    return 0;
    }

int main(){
    int size=10;
    int arr[10]={2,4,33,45,98,222,444,980,77,76};
    int key;
    cout<<"enter the number you want to find:"<<endl;
    cin>>key;
    bool found=search(arr,size,key);
    {
        if(found){
            cout<<"element is present"<<endl;
        }
        else{
            cout<<"element not present"<<endl;
        }
    }
    return 0;
}*/








//swap elements of array




#include <iostream>
using namespace std;
void printarr(int arr[],int size)
{
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse(int arr[],int size){
int start=0;
int end=size-1;
while(start<=end){
     swap(arr[start],arr[end]);
     start++;
     end--;
}}


int main(){
    int arr[5]={1,4,55,76,88};
    int brr[5]={33,55,45,67,90};

    reverse(arr,5);
    reverse(brr,5);

    printarr(arr,5);
    printarr(brr,5);


    return 0;



}