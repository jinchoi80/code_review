#include <queue>

template <typename T> 
class templatePriorityQueue {
	private:
		std::priority_queue<T> storage;
	public:
		templatePriorityQueue();
		~templatePriorityQueue();
		bool IsEmpty() const;
		const T& GetTop() const;
		int GetSize();
		void push(const T&);
		void pop();	
};
