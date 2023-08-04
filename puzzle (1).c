#include<stdio.h>
#include<time.h>
#include<stdlib.h>
const int m=4;
const int n=4;
void gamerules()
{
	printf("Game Rules : \n");
	printf("1.You can move only one step at a time by array key\nMove Up : by Up arrow key\nMove Down : by down arrow key\nMove Left : by Left arrow key\nMove Right : by Right arrow key\n2.You can move number at empty position only");
	printf("\n3.For each valid move : your total number of move will decreased by 1\n4.Winning situation : number in 4X4 matrix should be in order from 1 to 15");
}
void inputkey(int a[m][n]);
void swap(int* x,int* y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void creatematrix(int a[m][n])
{
	int i,j,random;
	printf("\nEnter the matrix\n");
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
void printmatrix(int a[m][n])
{
	system("cls");
	int i,j;
	for(i=0;i<4;i++){	
	for(j=0;j<4;j++)
	{
		if(a[i][j]==0)
		printf("  ");
		else
		printf("%d ",a[i][j]);
	}
	printf("\n");
}
} 
int main()
{
	int b,j,i,n=10;
	int a[4][4];
	gamerules();
	creatematrix(a);
	printmatrix(a);
	inputkey(a);
	return 0;             
}
void inputkey(int a[m][n]){
	int x,key,i,j,n=100;
	int ch1,ch2;
	char ch;
do                           
{
	x=0;
	/*printf("If you want to exit this game press e : ");fflush(stdin);scanf("%c",&ch);if(ch=='e')break;   */    
	printf("Remaining steps is %d\n",n);//l37 r39 u38 d40   u72 d80 l75  r77
	for(i=0;i<4;i++){
	for(j=0;j<4;j++)
	if(a[i][j]==0){
	x=1;
	break;}
	if(x==1)
	break;
	}
	ch1=getch();
	ch2=0;
	ch2=getch();
	switch(ch2)                 
	{                          
		case 72:    
			swap(&a[i+1][j],&a[i][j]);printmatrix(a);break;
		case 80:
			swap(&a[i-1][j],&a[i][j]);printmatrix(a);break;
		case 75:
			swap(&a[i][j+1],&a[i][j]);printmatrix(a);break;
		case 77:
			swap(&a[i][j-1],&a[i][j]);printmatrix(a);break;
	}                       
	n--;	
}while(n);
}
