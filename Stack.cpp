// Implement a Stack using a vector
//

#include "Stack.h"

template<class T>
Stack<T>::Stack()
{
	size = 0;
}

template<class T>
void Stack<T>::push(const T& value) {
	size++;
	values.push_back(value);
}
template<class T>
T Stack<T>::pop() {
	if (size > 0) {
		T last_address = values[size - 1];
		size--;
		values.pop_back();
		return last_address;
	}
	else {
		return NULL;
	}
}
