#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

	printf("PID of exc1.c = %d\n", getpid());
	char* args[] = {"hello", "there", NULL};
	execv("./ex2", args);
	printf("Back to ex1.c");
	return 0;
}