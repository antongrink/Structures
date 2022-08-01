#include <iostream>
#include <vector>


template<typename T>
class CircularQueue
{

public:
	void insert(const T& value)
	{
		queue.push_back(value);
	}

	const T& retrive()
	{

		if (queue.size())
		{
			T tmp{ queue[0] };
			queue.erase(queue.begin());
			queue.push_back(tmp);
			return tmp;
		}
	}

	bool empty() { return queue.size(); }


private:
	std::vector <T> queue;
};


int main()
{

	CircularQueue<int> que;
	que.insert(19);
	que.insert(-2);
	que.insert(100);


	std::cout << que.retrive() << std::endl;
	std::cout << que.retrive() << std::endl;
	std::cout << que.retrive() << std::endl;
	std::cout << que.retrive() << std::endl;





}