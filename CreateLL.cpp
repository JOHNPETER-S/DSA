#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};
node* head,*newNode,*temp;
int main() {
    int n;
    cin>>n;
    
    head=0;
    for(int i=0;i<n;i++){
        newNode=new node();
        cin>>newNode->data;
        newNode->next=nullptr;
        
        
        if(head == nullptr){
            head=temp=newNode;
        }else{
            temp->next=newNode;
            temp=newNode;
        }
        
    }
    
    temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    

return 0;
}
