#include<iostream>
#include<stack>
using namespace std;

class Stack{
   public:
   int *arr;
   int top;
   int size;


   Stack(int size){
      this->size=size;
      arr=new int[size];
      top=-1;
   }


void push(int element){
if(size-top>1){
top++;
arr[top]=element;
}
else{
cout<<"stack overflow"<<endl;
}
}


void pop(){
if(top>=0){
top--;
}
else{
cout<<"stack underflow"<<endl;
}
} 


int peek(){
   if(top>=0){
      return arr[top];
   }
   else{
      cout<<"stack is empty"<<endl;
   }

}


bool empty(){
if(top==-1){
   return true;
}
else{
   return false;
}
}
};







int main(){
Stack st(5);
st.push(77);
st.push(7);
st.push(78);
st.push(97);
st.push(57);
cout<<st.peek()<<endl;

   /*
stack<int> s;
s.push(2);
s.push(4);
s.push(8);
s.pop();
cout<<s.top()<<endl;
if(s.empty()){
cout<<"string is empty"<<endl;
}
else{
cout<<"string is not empty"<<endl;
}
cout<<s.size()<<endl;*/
return 0;
}