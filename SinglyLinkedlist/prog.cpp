#include<iostream>
using namespace std;
class Node {
     public:
     int data;
     Node* next;

     Node(int data){

       this->data=data;
       this->next=NULL;
     }
   ~Node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }



};
void insertAtHead(Node* &Head,int d)
{
    Node* temp=new Node(d);
    temp ->next=Head;
    Head=temp;
}
void insertAtTail(Node* &Tail,int d)
{
    Node* temp=new Node(d);
    Tail->next=temp;
    Tail=temp;
}
void insertAtPosition(Node* &Head,Node* &Tail,int position,int d){
    if(position==1){
         insertAtHead(Head,d);
         return;
    }
         Node* temp=Head;
         int cnt=1;
         while(cnt<position-1){
            temp=temp->next;
            cnt++;
         }
         if(temp->next=NULL){
         insertAtTail(Tail,d);
         return;
    }
        Node* nodeToInsert=new Node(d);
        nodeToInsert->next=temp->next;
        temp->next=nodeToInsert;
}

void print(Node* Head){
      Node* temp=Head;
      while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
      }
      cout <<endl;




}
void deleteNode(int position, Node* & head) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        //memory free start ndoe
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;

    }
}

int main(){
   Node* Node1= new Node(10);
   
  // cout<<Node1->data<<endl;
   //cout<<Node1->next<<endl;

Node* Head=Node1;
Node* Tail=Node1;
print(Head);


insertAtTail(Tail,12);
print(Head);
insertAtPosition(Head,Tail,1,66);
print(Head);
//insertAtPosition(Tail,Head,4,66);
//print(Head);
cout<<"head"<<Head->data<<endl;
cout<<"tail"<<Tail->data<<endl;
print(Head);

deleteNode(1,Head);
print(Head);


}