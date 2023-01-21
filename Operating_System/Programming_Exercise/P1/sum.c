#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int sumation(int x,int y);

int main()
{ 
	int ans,x,y;
	printf("enter x:\t");
	scanf("%d",&x);
	printf("enter y:\t");
	scanf("%d",&y);
	ans=sumation(x,y);
	printf("sum of x and y is :\t  %d\n",ans); 
	return 0;
} 

int sumation(int x,int y)
{ 
	return x+y;
}
