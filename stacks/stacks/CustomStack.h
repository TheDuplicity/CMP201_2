#ifndef CUSTOMSTACK_H
#define CUSTOMSTACK_H

/** A stack of integers. */
template <typename T> class CustomStack
{
public:
	/** Return true if the stack is empty, false otherwise. */
	bool empty()
	{
		if (stackTop == -1) {
			return true;
		}
		return false; // FIXME implement this properly
	}

	/** Add an item to the top of the stack. */
	void push(T value)
	{
		// FIXME implement this properly
		if (stackTop <= (int)(sizeof(stackItems)/sizeof(stackItems[0]))) {

			stackTop++;
			stackItems[stackTop] = value;
		}
	}

	/** Remove the item at the top of the stack. */
	void pop()
	{
		// FIXME implement this properly
		if (stackTop > -1) {
			stackTop--;
		}
	}

	/** Return the item at the top of the stack. */
	T& top()
	{
		return stackItems[stackTop]; // FIXME implement this properly
	}

	/** Return the number of items on the stack. */
	int size()
	{
		return stackTop + 1; // FIXME implement this properly
	}
	T stackItems[40];
	int stackTop = -1;
};

#endif