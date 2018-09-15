#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "convolution/convolution.h"

void argvRearrange(int argc, char **argv){
	for(int i = 0; i < argc; i++){
		if(i+1 < argc) argv[i] = argv[i+1];
	}
}


int main(int argc, char **argv ){
	char * command = argv[1];

	argvRearrange(argc, argv);
	argc -= 1;
	if(strcmp(command, "convolution") == 0){
		Convolution conv(argc, argv);
		conv.run();
	}else{
		printf("Invalidate command");
	}

	return 0;

}

