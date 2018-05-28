/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "dum.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

float *
average_1(X_array *argp, CLIENT *clnt)
{
	static float clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, average,
		(xdrproc_t) xdr_X_array, (caddr_t) argp,
		(xdrproc_t) xdr_float, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

max_min *
maxmin_1(X_array *argp, CLIENT *clnt)
{
	static max_min clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, maxmin,
		(xdrproc_t) xdr_X_array, (caddr_t) argp,
		(xdrproc_t) xdr_max_min, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

rX *
product_1(r_times_X *argp, CLIENT *clnt)
{
	static rX clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, product,
		(xdrproc_t) xdr_r_times_X, (caddr_t) argp,
		(xdrproc_t) xdr_rX, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}
