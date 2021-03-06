#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
//time code found at https://stackoverflow.com/questions/9596945/how-to-get-appropriate-timestamp-in-c-for-logs
//To be implemented!

#define BUFFER_LENGTH 1024

int main(void)
{
	int pipe_arr[2];
	char buf[BUFFER_LENGTH];

	//Could use popen as an alternative to piping
	//Create Pipe - pipe 0 is to read the value and pipe 1 is to write the value
	pipe(pipe_arr);

	//Add while loop to keep executing this command and show timestamps for server being up or down etc
	//Look at C terminal graphics and stylings to create columns for multiple pings and info etc
	
	if (fork() == 0)  //child
	{
		//dup2 - takes output from ping and assigns it to the pipe write (1)
		dup2(pipe_arr[1], STDOUT_FILENO);
		//the actual ping command - will change to take input in executing 
		execl("/bin/ping", "ping", "-c 1", "8.8.8.9", (char*)NULL);
	}
	else //parent
	{
		wait(NULL);
		//reads the pipe
		read(pipe_arr[0], buf, BUFFER_LENGTH);
		//prints the buf result from ping

		char str[10];
		int result;		
		strncpy(str, buf + 155, 1);
		sscanf(str, "%d", &result);
		
		//C output color found at http://web.theurbanpenguin.com/adding-color-to-your-output-from-c/
		if (result == 1)
		{
			printf("\033[0;32m");
			printf("\nServer Online!\n");
			printf("\033[0m");
		}
		else
		{
			printf("\033[0;31m");
			printf("\nServer is Offline!!!\n");
			printf("\033[0m");
		}
	}

	close(pipe_arr[0]);
	close(pipe_arr[1]);
}

