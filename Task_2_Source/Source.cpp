#include"median_queue.cpp"
using namespace std;

void main(){
	median_queue q;

	int number_of_commands;

	try{
		int temp;
		cin >> number_of_commands;

		for (int i = 0; i < number_of_commands; i++)
		{
			cin >> temp;
			q.put(temp);
		}
	}
	catch (...){
		cout << "Wrong Input";
	}
}