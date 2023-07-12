// parent process is sender and chiled process is reader.
#include<iostream>
#include<unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

#define BUFFER_SIZE 100

int main() {
   int fd[2],n; //fd[1] - writing fd[0] - reading
   char pbuff[100],cbuff[100];
   pid_t p;
   pipe(fd);
   p = fork();   // calling fork() system call to create parent and child process.
   if(p == -1){
	   std::cout<<"Error in pipe creation"<<std::endl;
	   return 1;
   }

   if(p>0) // Parent process
   {
	close(fd[0]);
	printf("Enter messages to send to child process\n");
        while (true) {
		printf("Enter message: ");
	fgets(pbuff, BUFFER_SIZE, stdin);

	// Remove trailing newline character
	pbuff[strcspn(pbuff, "\n")] = 0;

	// Exit loop if user input "exit"
	if (strcmp(pbuff, "exit") == 0) {
	break;
	}	

	write(fd[1], pbuff, strlen(pbuff) + 1);

	// Read from pipe
	read(fd[0], cbuff, BUFFER_SIZE);
	printf("\nChild sent: %s\n\n", cbuff);
	}

      close(fd[1]);

     /*std::cout<<"Enter msg to child process:\n";
    fgets(pbuff,100,stdin);
     std::cout<<"Parent Passing value to child\n";
     write(fd[1],pbuff,n); 
     wait(NULL);*/
     
   }else { // child process if p == 0
     
     close(fd[1]);

while (true) {
read(fd[0], pbuff, BUFFER_SIZE);
printf("\nParent sent: %s\n", pbuff);

// Exit loop if parent sent "exit"
if (strcmp(pbuff, "exit") == 0) {
break;
}

printf("Enter message: ");
fgets(cbuff, BUFFER_SIZE, stdin);

// Remove trailing newline character
cbuff[strcspn(cbuff, "\n")] = 0;

write(fd[1], cbuff, strlen(cbuff) + 1);
}
close(fd[0]);

    /* std::cout<<"Msg from parent process\n";
     n = read(fd[0],cbuff,100);
     write(1,cbuff,n);*/

    }
   return 0;
 }

