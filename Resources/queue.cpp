#include"node.cpp"
#include"iostream"

class queue{
protected:
	int size;
	node* head;
	node* tail;

public:

	queue(){
		head = tail = NULL;
	}
	void put(int value){
		//create and assign value to new element
		node* new_element = new node;
		new_element->element = value;
		new_element->next_element = NULL;

		//place as a new element
		if (head == NULL){
			head = tail = new_element;
		}
		else//place at last of queue
		{
			tail->next_element = new_element;
			tail = new_element;
		}
		size++;
	}

	int pop(){
		//Empty queue
		if (head == NULL){
			return NULL;
		}
		//save head to temp
		node* temp = head;
		//mode head to next
		head = head->next_element;

		//get value of prev head
		int x = temp->element;
		//free memory of prev head
		delete temp;
		//decrement size
		size--;
		//return value of prev head
		return x;
	}

	int peek(){
		//empty queue
		if (head == NULL){
			return NULL;
		}
		//return first element value
		return head->element;
	}
};