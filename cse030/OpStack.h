#ifndef OpStack_h
#define OpStack_h

// Define the Link struct below...

struct Link {
	long data;
	char op;
	Link* next;
};

// Now define the Stack struct. It should be a stack of Links...

struct Stack {
   Link* front;
   

   Stack() {
	front = NULL;
		
}

   void push (long value, char let) {
	if (front == NULL){
		Link* newNode = new Link;
		newNode->data = value;
		newNode->op = let;
		newNode->next = NULL;
		front = newNode;
		
		}
 
	else {
		Link* newNode = new Link;
		newNode->data = value;
		newNode->op = let;
		newNode->next = front;
		front = newNode;
	
		}
		}
   bool isEmpty(){
	return (front == NULL);
}

   Link* pop(){
	Link* node = front;
		
		front = front->next;

		

	
	return node;
  }
};

#endif

