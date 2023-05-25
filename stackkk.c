#include<stdio.h>

#include<stdlib.h>

#define Size 4

int Top=-1, inp_array[Size],array[Size
];
void Push(int a);
void Pop();
void show();

int main()
{
	int choice,a;


	do{
		printf("\nOperations performed by Stack");
		printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
		printf("\n\nEnter the choice:");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
			    for(int i=0;i<Size;i++)
                {
                    scanf("%d",&a);
			    Push(a);
                }
					break;
			case 2: Pop();
					break;
			case 3: show();
					break;
			case 4: exit(0);//buildin fn

			default: printf("\nInvalid choice!!");
		}
	}while(1);
}

void Push(int a)
{
	int x;

	if(Top==Size-1)
	{
		printf("\nOverflow!!");
	}
	else
	{

		Top=Top+1;
		inp_array[Top]=a;
	}
}

void Push1(int a)
{


	if(Top==Size-1)
	{
		printf("\nOverflow!!");
	}
	else
	{

		Top=Top+1;
		array[Top]=a;
	}

}

void Pop()
{
	if(Top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
		printf("\nPopped element:  %d",inp_array[Top]);
		Top=Top-1;
	}
}

void show()
{


	if(Top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
		printf("\nElements present in the stack: \n");




		for(int i=Top;i>=0;--i)
			printf("%d\n",inp_array[i]);


	}
}

void reverse()
{
    if(Top!=-1)
    {
		printf("\nPopped element:  %d",inp_array[Top]);
		Push1(inp_array[Top]);
		Top=Top-1;
	}
}


#include <stdio.h>
 
#define MAXSIZE 7
#define TRUE 1
#define FALSE 0 
 
// Structure defining Stack data structure
struct Stack {
    int top;
    int array[MAXSIZE];
} st;
 
/*
Initializes the top index to -1
*/
void initialize() {
 st.top = -1;
}
 
/*
 Checks if Stack is Full or not 
*/
int isFull() {   
    if(st.top >= MAXSIZE-1)
        return TRUE;
    else
        return FALSE;
}
 
/*
 Checks if Stack is Empty or not
*/
int isEmpty() {
 if(st.top == -1)
     return TRUE;
 else
     return FALSE;
}
 
/*
 Adds an element to stack and then increment top index 
*/
void push(int num) {
    if (isFull())
        printf("Stack is Full...\n");
    else {
        st.array[st.top + 1] = num;
        st.top++;
    }
}
 
/*
 Removes top element from stack and decrement top index
*/
int pop() {
    if (isEmpty())
        printf("Stack is Empty...\n");
    else {
     st.top = st.top - 1;
        return st.array[st.top+1];
    }
}
 
/*
 Prints elements of stack using recursion
*/
void printStack(){
 if(!isEmpty()){
     int temp = pop();
     printStack();
     printf(" %d ", temp);
     push( temp);
    }
}
void insertAtBottom(int item) {
    if (isEmpty()) {
        push(item);
    } else {
  
        /* Store the top most element of stack in top variable and 
        recursively call insertAtBottom for rest of the stack */
        int top = pop();
        insertAtBottom(item);
  
        /* Once the item is inserted at the bottom, push the 
        top element back to stack */
        push(top);
    }
}
 
void reverse() {
    if (!isEmpty()) {
        /* keep on popping top element of stack in 
        every recursive call till stack is empty  */
        int top = pop();
        reverse();
  
        /* Now, instead of inserting element back on top 
        of stack, we will insert it at the bottom of stack */
        insertAtBottom(top);
    }
}
/*
Returns the number of elements in Stack
*/
int getSize(){
 return st.top+1;
}
 
int main() {
 /* Initializing top index of stack */
    initialize(st);
    /* Adding elements in stack */
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    printf("Original Stack\n");
    printStack();
    reverse();
    printf("\nReversed Stack\n");
    printStack();
    return 0;
}