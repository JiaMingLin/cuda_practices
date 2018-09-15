/*
 * convolution.h
 *
 *  Created on: Sep 15, 2018
 *      Author: jiaming
 */

#include <stdio.h>
#include <stdlib.h>
#ifndef CONVOLUTION_H_
#define CONVOLUTION_H_

#include "../common.h"

class Convolution {
public:
	Convolution(int argc, char **argv);
	void run();
	~Convolution();
private:
	float *N;
	float *M;
	float *P;

	int width;
	int maskWidth;

	char *example;
};

/**
 * Convolution on CPU
 *
 * N: original input
 * M: convolution mask
 * P: output

void convolution_1D_CPU(float *N, float *M, float *P,
		int mask_width, int width){

	for(int p = 0; p < width; p++){
		int N_start_point = p - (mask_width/2);
		for(int i = 0; i< mask_width; i++){
			if(i + N_start_point >=0 && i + N_start_point < width){
				P[p] += M[i] * N[N_start_point + i];
			}
		}
	}
}
*/
#endif /* CONVOLUTION_H_ */
