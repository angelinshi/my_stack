/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
 *
 */
#include <stdio.h>
#include "include/my_stack.h"
#define STACK_INIT_SIZE 5

int stack[STACK_INIT_SIZE];
int top=0;
int base=0;


void stack_push(int x)
{
	stack[top]=x;
	top++;
}

int stack_pop()
{
	top--;
	return stack[top];
	
}
int stack_is_empty()
{
	if(top==base)
	{
		return 1;
	}
	else 
		return 0;
}

int stack_is_full()
{
	if(top>stack_capacity())
		return 1;
	else 
		return 0;

}
int stack_capacity()
{
	return STACK_INIT_SIZE;
}
int stack_size()
{
	return top;
}

