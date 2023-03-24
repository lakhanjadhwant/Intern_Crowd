#include<stdio.h>

int main()
{
	int i,name1,name2,count=0;
	char arr[9]={'1','2','3','4','5','6','7','8','9'};
	printf("Wlecome in the TIC-TAC-TOE GAME!\n\n");


	printf(" %c | %c | %c \n---|---|---\n %c | %c | %c \n---|---|---\n %c | %c | %c \n",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);

	while(1)
	{
		if(arr[0]==arr[1] && arr[1]==arr[2] || arr[3]==arr[4] && arr[4]==arr[5] || arr[6]==arr[7] && arr[7]==arr[8] || arr[0]==arr[3] && arr[3]==arr[6] || arr[1]==arr[4] && arr[4]==arr[7] || arr[2]==arr[5] && arr[5]==arr[8] || arr[0]==arr[4] && arr[4]==arr[8] || arr[0]==arr[4] && arr[4]==arr[8] || arr[2]==arr[4] && arr[4]==arr[6])
		{
			if(arr[i-1]=='X')
			{
				printf("Player 1 Wins!");
			}
			else
			{
				printf("Player 2 Wins!");
			}
			break;
		}
		lable:
			printf("1st player type any digit from 1-9 to fill your X:");
			scanf("%d",&i);
	
		if(arr[i-1]=='X' || arr[i-1]=='O')
		{
			printf("\nEnter valid position\n");
			goto lable;
		}
		else
		{
			arr[i-1]='X';
			count++;
		}
		if(count==9)
		{
			printf("\n\nDRAWWW");
			break;
		}
		printf(" %c | %c | %c \n---|---|---\n %c | %c | %c \n---|---|---\n %c | %c | %c \n",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
		if(arr[0]==arr[1] && arr[1]==arr[2] || arr[3]==arr[4] && arr[4]==arr[5] || arr[6]==arr[7] && arr[7]==arr[8] || arr[0]==arr[3] && arr[3]==arr[6] || arr[1]==arr[4] && arr[4]==arr[7] || arr[2]==arr[5] && arr[5]==arr[8] || arr[0]==arr[4] && arr[4]==arr[8] || arr[0]==arr[4] && arr[4]==arr[8] || arr[2]==arr[4] && arr[4]==arr[6])
		{
			if(arr[i-1]=='X')
			{
				printf("Player 1 Wins!");
			}
			else
			{
				printf("Player 2 Wins!");
			}
			break;
		}
		table:
			printf("2nd player type any digit from 1-9 to fill your O:");
			scanf("%d",&i);
		
		if(arr[i-1]=='X' || arr[i-1]=='O')
		{
			printf("\nEnter valid position\n");
			goto table;
		}
		else
		{
			arr[i-1]='O';
			count++;
		}
		printf(" %c | %c | %c \n---|---|---\n %c | %c | %c \n---|---|---\n %c | %c | %c \n",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],arr[9]);
		 

	}

	
	
	return 0;
}
