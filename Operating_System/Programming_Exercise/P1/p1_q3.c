/*Write a program which accepts two integers x, and y. Now use exec to execute
another user defined program that prints the sum of x and y.*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
 	char *args[]={"./sum.out",NULL}; 
 	execvp(args[0],args); 
 	return 0;
}  
