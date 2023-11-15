#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
 int main()
 {
 	pid_t child_pid, parent_pid;
 	child_pid=fork();
 	if(child_pid<0)
    {
    	perror("Fork failed");
    	return 1;
	}
	else if(child_pid==0)
	{
		child_pid=getpid();
		parent_pid=getpid();
		printf("Child Process-PID:%d,Parent PID:%d\n",child_pid,parent_pid);
	}
	else
	{
		parent_pid=getpid();
		printf("Parent Process-PID:%d\n",parent_pid);
	}
	return 0;	
}
