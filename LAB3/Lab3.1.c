#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int main( int argc, char *argv[] ) {
	
	char *who;
	int i;
	
	if (fork ()) {
		who = "weerapong";
	} else {
		who = "child";
	}
	
	for (i=0;i < 6;i++){
		printf ("*forkl: %s\n", who);
	}
	
	exit (0);
}
