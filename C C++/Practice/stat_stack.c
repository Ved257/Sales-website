#include<stdio.h>
#include<stdlib.h>

int  arr[5],top=-1;

void pop()
{
    if (top==-1)
    {
        printf("The stack is empty");
    }
    else
    {
        printf("The element which is deleted is:%d",arr[top]);   
        --top;
    }
}

void push()
{
    if(top==4)
    {
        printf("Stack is full");
    }
    else
    {
        int x;
        printf("Enter the element to be pushed:");
        scanf("%d",&x);
        arr[top]=x;
        ++top;
    }
}

void display()
{
    int i;
    printf("The stack elements are:\n");
    for(i=0;i<=top;i++)
    {
        printf("%d\n",arr[i]);
    }

}

void main()
{
    int opt;
    
        printf("MAIN MENU:\n");
        printf("1.Pop from stack\n");
        printf("2.Push to stack\n");
        printf("3.Display stack\n");
        printf("4.Exit\n");
        printf("Enter your choice:");
        switch(opt)
        {
            case 1:
            pop();
            break;
            case 2:
            push();
            break;
            case 3:
            display();
            break;
            case 4:
            break;
            break;
        }      
        
    
}