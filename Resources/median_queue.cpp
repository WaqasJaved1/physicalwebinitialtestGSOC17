#include"queue.cpp"

using namespace std;

class median_queue : public queue{
private:
	bool is_odd;
	node *mid;
public:

	median_queue(){
		is_odd = false;
		mid = NULL;
	}

	void put(int value){
		//create new element assign value;
		node* new_element = new node;
		new_element->element = value;
		new_element->next_element = NULL;

		//insert head if emptylist
		if (head == NULL){
			head =mid= tail = new_element;
			size++;
			is_odd = !is_odd;
			cout << mid->element << endl;
			return;
		}
		//insert at end
		tail->next_element = new_element;
		tail = new_element;
		size++;
		is_odd = !is_odd;

		//print median if odd
		if (is_odd){
			mid = mid->next_element;

			cout << mid->element << endl;
			return;
		}

		//print median if even
		cout << (float)((float)mid->element + (float)mid->next_element->element) / 2.0 << endl;
	}

	
};