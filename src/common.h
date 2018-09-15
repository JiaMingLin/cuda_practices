/*
 * common.h
 *
 *  Created on: Sep 12, 2018
 *      Author: jiaming
 */

#include <sys/time.h>

#ifndef COMMON_H_
#define COMMON_H_

#define CHECK(call)                                                            \
{                                                                              \
    const cudaError_t error = call;                                            \
    if (error != cudaSuccess)                                                  \
    {                                                                          \
        fprintf(stderr, "Error: %s:%d, ", __FILE__, __LINE__);                 \
        fprintf(stderr, "code: %d, reason: %s\n", error,                       \
                cudaGetErrorString(error));                                    \
        exit(1);                                                               \
    }                                                                          \
}

inline double seconds()
{
    struct timeval tp;
    struct timezone tzp;
    int i = gettimeofday(&tp, &tzp);
    return ((double)tp.tv_sec + (double)tp.tv_usec * 1.e-6);
}

inline void generate_fack_array(int width, float **output){
	srand(3333);
	float *result = (float*)malloc(sizeof(float) * width);
	for(int i = 0; i<width; i++){
		result[i] = rand() % 64;
	}
	*output = result;
}

inline void diff(float* a, float* b, int n){
        double s=0;
        for(int k=0; k<n; k++){
                double w=a[k]-b[k];
                if(w != 0) {
                	// printf("a[%d] = %f; b[%d] = %f \n", k, a[k], k, b[k]);
                	s+=w;
                }
        }
        printf("errors: %f \n", s);
}

#endif /* COMMON_H_ */
