#include <iostream>
#include <vector>


template<typename T>
class Queue
{

public:
	void insert(const T& value)
	{
		queue.push_back(value);
	}

	T retrive()
	{

		if (queue.size())
		{
			T tmp{ queue[0] };
			queue.erase(queue.begin());
			return tmp;
		}
		else {
			std::cout << "Underflow\nProgram Terminated\n";
			std::exit(EXIT_FAILURE);
		}
	}

	bool empty() { return queue.size(); }


private:
	std::vector <T> queue;
};


int main()
{

	Queue<int> que;
	que.insert(19);
	que.insert(-2);
	que.insert(100);


	std::cout << que.retrive() << std::endl;
	std::cout << que.retrive() << std::endl;
	std::cout << que.retrive() << std::endl;
	std::cout << que.retrive() << std::endl;





}