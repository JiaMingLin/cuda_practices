#include "convolution.h"

Convolution::Convolution(int argc, char **argv){
	example = argv[0];
	generate_fack_array(width, &N);
	generate_fack_array(maskWidth, &M);
	P = (float*)malloc(sizeof(float) * width);

	width = 1024;
	maskWidth = 11;
}

Convolution::~Convolution(){
	free(N);
	free(M);
	free(P);
}

void
Convolution::run(){

}
