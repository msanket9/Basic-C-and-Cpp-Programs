#include <iostream>
using namespace std;

struct Node { 
   float data; 
   struct Node *next; 
}; 

struct Node *top = NULL; 

void push(float val) {
   struct Node *newnode;
   
   newnode = new Node;
   newnode->data = val; 
   newnode->next = top; 
   top = newnode; 
}
void pop() {
   if(top==NULL)
      cout<<"\n\nStack Underflow"<<endl;
   else {
      cout<<"\n\nThe popped element is "<< top->data <<endl;
      top = top->next;
   }
}
void display() {
   struct Node* ptr;
   
   if(top==NULL)
      cout<<"\n\nStack is empty";
   else {   
      ptr = top; 
      cout<<"\n\nStack elements are: ";
      while (ptr != NULL) { 
         cout<< ptr->data <<", "; 
         ptr = ptr->next; 
      } 
     
   }
   cout<<endl;
}
int main() {
   int ch;
   float val; 
   
   do {
     cout<<"\n\n--------STACK OPERATIONS-----------\n"
        			<<"1.Push\n"
        			<<"2.Pop\n"
                	<<"3.Display\n"
                	<<"4.Exit\n"
                	<<"-----------------------"
                	<<"\nEnter your choice:\t";
                	
      cin>>ch;
      
      switch(ch) {
         case 1: {   
            cout<<"\n\nEnter value to be pushed:"<<endl;
            cin>>val;
            push(val);
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
