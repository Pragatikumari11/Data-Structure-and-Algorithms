#include<iostream>
#include <queue>
using namespace std;
    class node{
        public:
           int data;
           node* left;
           node* right;

           node(int d){
              this->data=d;
              this->left=NULL;
              this->right=NULL;
           }
    };
   node* buildTree(node* root){
cout<<"enter the data:"<<endl;
int data;
cin>>data;
root=new node(data);
if(data==-1){
    return NULL;
}
cout<<"enter data for inserting in left:"<<data<<endl;
root->left=buildTree(root->left);
cout<<"enter data for inserting in right:"<<data<<endl;
root->right=buildTree(root->right);

return root;

   }


void levelOrderTraversal(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
        cout<<temp->data<<" ";
        if(temp->left)
        {q.push(temp->left);}
        if(temp->right)
        {q.push(temp->right);}


    }}

}
     void inOrder(node* root){
            if(root==NULL){
            return ;     
            }
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
 
     }
     void preOrder(node* root){
            if(root==NULL){
            return ;     
            }
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
 
     }
     void postOrder(node* root){
            if(root==NULL){
            return ;     
            }
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
 
     }
 void buildFromLevelOrder(node* &root) {
    queue<node*> q;

    cout << "Enter data for root" << endl;
    int data ;
    cin >> data;
    root = new node(data);
    
    q.push(root);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if(leftData != -1) {
            temp -> left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData != -1) {
            temp -> right = new node(rightData);
            q.push(temp->right);
        }
    }
 }
    int main(){
        node* root =NULL;
        buildFromLevelOrder(root);
        levelOrderTraversal(root);
//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
/*node* root=NULL;
root=buildTree(root);
cout<<endl<<"printing the level of traverse output"<<endl;
levelOrderTraversal(root);
cout<<"inOrder traversal is"<<" ";
inOrder(root);
cout<<endl<<"preorder traversal is"<<" ";
preOrder(root);
cout<<endl<<"postorder traversal is"<<" ";
postOrder(root);
*/

        return 0;
    }