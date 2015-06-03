/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
 *
 */
#define MAXSIZE 10
struct stack
{
	int r[MAXSIZE];
	int top;
}s;
struct stack s;

void stack_push(int x)
{
	s.r[s.top++]=x;
}
int stack_pop()
{
	return s.r[--s.top];
}

// The capacity of the stack
int stack_capacity()
{
	return MAXSIZE;
}

// Current available size of the stack
int stack_size()
{
	return s.top;
}


/*
 * return 0/1 to check if stack is empty or full
 * 0 - No
 * 1 - Yes
 */
int stack_is_empty()
{
	if(s.top==0)
		return 1;
	return 0;
}
int stack_is_full()
{
	if(s.top == MAXSIZE)
		return 1;
	return 0;
}
