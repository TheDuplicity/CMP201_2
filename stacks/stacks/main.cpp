// Stacks lab exercise
// Adam Sampson <a.sampson@abertay.ac.uk>

#include <cassert>
#include <iostream>
#include <stack>

#include "CustomStack.h"

// Import things we need from the standard library
using std::cout;
using std::endl;
using std::stack;

// Test the stack class.
void testStack()
{
	// FIXME Put stuff here
	CustomStack myStack;
	myStack.push(5);
	myStack.push(2);
	for (int i = 0; i < 2; i++)
	{
		cout << myStack.top();
		myStack.pop();
	}
	//check push and top
	assert(myStack.empty());
	myStack.push(2);
	assert(myStack.top() == 2);
	assert(!myStack.empty());
	myStack.pop();
	//new check for pop
	myStack.push(10);
	myStack.push(3);
	assert(!myStack.empty());
	assert(myStack.size() == 2);
	assert(myStack.top() == 3);
	myStack.pop();
	assert(myStack.top() == 10);
	assert(myStack.size() == 1);


}

int main(int argc, char *argv[])
{
	testStack();

	return 0;
}