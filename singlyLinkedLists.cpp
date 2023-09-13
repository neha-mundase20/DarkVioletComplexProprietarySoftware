#include<iostream>
using namespace std;

class node{
  private :
  int val;
  node*next;

  public:
  node* insertNode(node*head){
    node*p=new node();
    cout<<"\n"<<"Enter the data you want to insert:"<<"\n";
    cin>>p->val;
    p->next=NULL;
    if(head==NULL){
      head=p;
    }
    else if(head->next==NULL){
      head->next=p;
    }
    else{
      node*q=head;
      while(q->next!=NULL){
        q=q->next;
      }
      q->next=p;
    }
    return head;
  }

  void printLinkedList(node*head){
    node*p=new node();
    p=head;
    while(p->next!=NULL){
      cout<<p->val<<"\t";
      p=p->next;
    }
    cout<<p->val<<"\t";
  }
};

int main(){
  int choice;
  node*t=NULL;
  node*head=new node();
  head=NULL;
  do{
    cout<<"\n"<<"Choose from the dropdown below:"<<"\n";
    cout<<"\n"<<"1. Insert Node"<<"\n";
    cout<<"\n"<<"2. Print Linked List"<<"\n";
    cout<<"\n"<<"3. Exit"<<"\n";
    cin>>choice;

    switch(choice){
      case 1:{
        head=t->insertNode(head);
        break;
      }
      case 2:{
        t->printLinkedList(head);
        break;
      }
    }
  }while(choice!=3);
  return 0;
}