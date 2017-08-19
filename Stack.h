#ifndef __STACK_H__
#define __STACK_H__

#include <vector>
using namespace std;

template <class T>
class Stack
{
public:
	Stack();
	void push(const T&);
	T pop();
private:
	int size;
	vector<T> values;
};

#endif // __STACK_H__
