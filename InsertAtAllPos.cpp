#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};
node* head,*newNode,*temp,*val;
int main() {
    int n;
    cin>>n;
    
    head=nullptr;
    for(int i=0;i<n;i++){
        newNode=new node();
        cin>>newNode->data;
        
        if(head == nullptr){
            head=temp=newNode;
        }else{
            temp->next=newNode;
            temp=newNode;
        }
        
    }
    int pos,value;
    cin>>pos>>value;
    val=new node();
    val->data=value;
    temp=head;
  //when you want to add a val at the beginning
    if(pos==1){
        val->next=head;
        head=val;
    }
    int count=0;
  //when you want to add the value at a specific position
    while(temp!=nullptr){
        count++;
        if(count==pos-1){
            val->next=temp->next;
            temp->next=val;
        }else{
            temp=temp->next;
        }
        
    }
    
    temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    

return 0;
}
