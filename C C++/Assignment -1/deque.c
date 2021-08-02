# include<stdio.h>
# define MAX 5

int deque_arr[MAX];
int left = -1;
int right = -1;

/*Begin of insert_right*/
void insert_right()
{
	int added_item;
	if((left == 0 && right == MAX-1) || (left == right+1))
	{	printf("Queue Overflow\n");
		return;}
	if (left == -1)  /* if queue is initially empty */
	{	left = 0;
		right = 0;}
	else
	if(right == MAX-1)  /*right is at last position of queue */
		right = 0;
	else
		right = right+1;
	printf("Input the element for adding in queue : ");
	scanf("%d", &added_item);
	deque_arr[right] = added_item ;
}
/*End of insert_right*/

/*Begin of insert_left*/
void insert_left()
{	int added_item;
	if((left == 0 && right == MAX-1) || (left == right+1))
	{	printf("Queue Overflow \n");
		return;	 }
	if (left == -1)/*If queue is initially empty*/
	{	left = 0;
		right = 0;	 }
	else
	if(left== 0)
		left=MAX-1;
	else
		left=left-1;
	printf("Input the element for adding in queue : ");
	scanf("%d", &added_item);
	deque_arr[left] = added_item ;	 }
/*End of insert_left*/

/*Begin of delete_left*/
void delete_left()
{	if (left == -1)
	{	printf("Queue Underflow\n");
		return ;	}
	printf("Element deleted from queue is : %d\n",deque_arr[left]);
	if(left == right) /*Queue has only one element */
	{	left = -1;
		right=-1;	 }
	else
		if(left == MAX-1)
			left = 0;
		else
			left = left+1;
}
/*End of delete_left*/

/*Begin of delete_right*/
void delete_right()
{if (left == -1)
	{printf("Queue Underflow\n");
		return ;	 }
	printf("Element deleted from queue is : %d\n",deque_arr[right]);
	if(left == right) /*queue has only one element*/
	{	left = -1;
		right=-1;	 }
	else
		if(right == 0)
			right=MAX-1;
		else
			right=right-1;	}
/*End of delete_right*/

/*Begin of input_que*/
void display_queue()
{	int front_pos = left,rear_pos = right;
	if(left == -1)
	{	printf("Queue is empty\n");
		return;	 }
	printf("Queue elements :\n");
	if( front_pos <= rear_pos )
	{	while(front_pos <= rear_pos)
		{	printf("%d ",deque_arr[front_pos]);
			front_pos++;	}	}
	else
	{	while(front_pos <= MAX-1)
		{	printf("%d ",deque_arr[front_pos]);
			front_pos++;	}
		front_pos = 0;
		while(front_pos <= rear_pos)
		{	printf("%d ",deque_arr[front_pos]);
			front_pos++;
		}
	}
	printf("\n");
}

/*Begin of main*/
void main()
{	int choice;
	do
	{	printf("1.Insert at right\n");
		printf("2.Insert at left\n");
		printf("3.Delete from left\n");
		printf("4.Delete from right\n");
		printf("5.Display\n");
		printf("6.Quit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);

		switch(choice)
		{	case 1:
			insert_right();
			break;
		 case 2:
			insert_left();
			break;
		 case 3:
			delete_left();
			break;
		 case 4:
			delete_right();
			break;
		 case 5:
			display_queue();
			break;
		 case 6:
            break;
		 default:
			printf("Wrong choice\n");
		}
	}while(choice!=6);
}
/*End of main*/