 /* Using pipes find the sum of an array. */

#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>
#define P 2
#define SIZE 6

static pid_t id[P];
static int elementsList[] = {1,7,4,6};
void SUM(int elements[], int start, int step, int size,int write_pipe);


int main()
{
	int fd[2], array_sum = 0,ans,bytes;
	pipe(fd);

	for( int i = 0; i < P; i++)
	{
		    id[i] = fork();
    		if(id[i] == 0)
    		{
               	close(fd[0]);
        		SUM(elementsList,i,P,SIZE,fd[1]);
		        return -1;
		    }
	}

	for(int i = 0; i < P; i++)
		wait(NULL);
	close(fd[1]);
	for(int i = 0; i < P; i++)
	{
		bytes = read(fd[0],&ans,sizeof ans);
		if(bytes > 0)
		{
	        	printf("Reading from pipe-%d\n",i+1);
        		array_sum += ans;
		}
     	else 
		        printf("Nothing on the pipe.\n");
	}  
	for(int i = 0; i < P; i++)
		kill(id[i],SIGKILL);

	printf("Sum of the array is: %d\n",array_sum);
	return 0;
}

void SUM(int elements[], int start, int step, int size,int write_pipe)
{
	int sum = 0;
	for(int i = start; i < size; i += step)
		    sum += elements[i];
	write(write_pipe,&sum,sizeof sum);
}
