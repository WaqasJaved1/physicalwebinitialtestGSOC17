#include"median_queue.cpp"
using namespace std;

void main(){

	queue q;
	int number_of_commands;
	int temp;

	try{
		cin >> number_of_commands;

		for (int i = 0; i < number_of_commands; i++)
		{
			cin >> temp;
			switch (temp)
			{
			case 1:
				cin >> temp;
				q.put(temp);
				break;
			case 2:
				q.pop();
				break;
			case 3:
				cout << q.peek() << endl;
				break;
			default:
				throw;
				break;
			}
		}

	}
	catch (...){
		cout << "Unexpected input";
	}
}