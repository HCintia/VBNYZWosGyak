#include<stdlib.h>
#include<stdio.h>

#include<sys/types.h>
#include<sys/wait.h>

int main(int argc, char* argv[]){
	char input[20];
	int status=1;
	while (status == 1){
		printf("Command: ");
		scanf("%s", input);
		status = system(input);

		if(WIFEXITED(status)){
			printf("Output: %dn", WEXITSTATUS(status));
			status = 1;
		}
		else{
			printf("hamis\n");
			status = 1;
		}
	}
}
