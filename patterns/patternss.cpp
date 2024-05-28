#include <iostream>
using namespace std;
/*int main(){
    int i=1,n;
    cout<<"enter the number"<<endl;
    cin>>n;
    while(i<=n){
       int j=1;
       int count=i;
       while(j<=i){
        cout<<count<<" ";
        count-=1;
        j+=1;
       }
       cout<<endl;
       i+=1;
    }
}*/
/*int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
     int i=1;char value='A';
     while(i<=n){
         int j=1;
         while(j<=i){
            cout<<value;
            value+=1;
            j+=1;
         }cout<<endl;
         
         i+=1;
     }
}*//*int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
       int space=n-i;
       while(space)
       {
        cout<<" ";
        space=space-1;
       }
       int j=1;
       while(j<=i){
       cout<<"*";
       j+=1;
       }
      cout<<endl;
      i+=1;
    }
}*/
int main()
{int n;
cout<<"enter the number"<<endl;
cin>>n;
int i=1;
while(i<=n){
  int star=n-i+1;
  while(star){
  cout<<"*";
  star-=1;
  }
  cout<<endl;
  i+=1;
}
}