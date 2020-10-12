#include <iostream>
using namespace std;

struct Node { 
   float data; 
   struct Node *next; 
}; 

struct Node *front=NULL,*rear,*temp; 

void push() {
	temp = new Node;
	
	cout<<"\n\nEnter value to be pushed:"<<endl;
    cin>>temp->data;
    temp->next=NULL;
    
    if(front==NULL)
        front=rear=temp;
    else
    {
        rear->next=temp;
        rear=temp;
    }
}
void pop() {
   if(front==NULL)
      cout<<"\n\nQueue Underflow"<<endl;
   else {
   	  temp=front;
      front=front->next;
      cout<<"\n\nThe popped element is "<< temp->data <<endl;
      delete(temp);
   }
}
void display() {

   if(front==NULL)
      cout<<"\n\nQueue is empty";
   else {   
     temp=front;
     cout<<"\n\nQueue elements are: ";
     
        while(temp!=NULL)
        {
            cout<<temp->data<<", ";
            temp=temp->next;
        }  
   }
   cout<<endl;
}
int main() {
   int ch;
   
   do {
     cout<<"\n\n--------Queue OPERATIONS-----------\n"
        			<<"1.Push\n"
        			<<"2.Pop\n"
                	<<"3.Display\n"
                	<<"4.Exit\n"
                	<<"-----------------------"
                	<<"\nEnter your choice:\t";
                	
      cin>>ch;
      
      switch(ch) {
         case 1: {   
            push();
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"\n\nExit"<<endl;
            break;
         }
         default: {
            cout<<"\n\nInvalid Choice"<<endl;
         }
      }
   }while(ch!=4); 
      return 0;
}  
