/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "dum.h"

float *average_1_svc(X_arr *argp, struct svc_req *rqstp)
{
	static float  result;

	printf("Average function called\n");
	
	int sum=0;
	int i;
	
	for(i=0;i<argp->X_size;i++)
		sum+=argp->X.X_val[i];
		
	result=(float)sum/argp->X_size;

	return &result;
}

max_min *max_and_min_1_svc(X_arr *argp, struct svc_req *rqstp)
{
	static max_min  result;

	printf("Max/Min function called\n");
	
	result.max=-999999;
	result.min=999999;
	
	int i;
	
	for(i=0;i<argp->X_size;i++)
		if(argp->X.X_val[i]>result.max)
			result.max=argp->X.X_val[i];
			
	for(i=0;i<argp->X_size;i++)
		if(argp->X.X_val[i]<result.min)
			result.min=argp->X.X_val[i];		

	return &result;
}

prod *product_1_svc(X_times_r *argp, struct svc_req *rqstp)
{
	static prod  result;

	printf("X[]*r function called\n");
	
	int i;
	
	result.prod.prod_len=argp->X_size;
	result.prod.prod_val=(float *)malloc(argp->X_size*sizeof(float));
	
	for(i=0;i<argp->X_size;i++)
		result.prod.prod_val[i]=(float)argp->r*argp->X.X_val[i];

	return &result;
}