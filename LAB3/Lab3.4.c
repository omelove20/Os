#include <unistd.h>
#include <stdio.h>
#include <math.h>

int main (int argc,char *argv[]){
	
	char *who;
	int status;
	
	if (fork ()){
		who = "weerapong";
		printf("pi=%f\n",4*atan(1));
		wait (&status);
		exit (0);
	} else {
		who = "child";
		execlp ("/bin/my-script","my-script","a","b",(char *)0);
	}
}
