#include <iostream>
using namespace std;


bool findPalindrome(char arr[], int n){
int s=0;
int e=n-1;
while(s<=e){
     if(arr[s]!=arr[e]){
       return 0;
     }
     else{
        s++;
        e--;
     }
}
return 1;
}







void reverse(char name[],int n){

int s=0;
int e=n-1;
while(s<=e) {
    swap(name[s++],name[e--]);
}
}




int getLength(char name[]){
      int count=0;
      for(int i=0;name[i]!='\0';i++){
        count ++;
      }


     return count;

}



int main(){
     char name[20];
     cout<<"Enter your name"<<endl;
     cin>>name;
     cout<<"your name is"<<" "<<name<<endl;
     int len=getLength(name);
     cout<<"length"<<len<<endl;
reverse(name,len);
cout<<"your name is"<<" "<<name<<endl;
cout<<"check palindrome"<<findPalindrome(name,len)<<endl;
return 0;
}