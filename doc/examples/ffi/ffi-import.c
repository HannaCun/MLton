#include "platform.h"

Int FFI_INT = 13;

Char ffi (Pointer a1, Pointer a2, Int n) {
	double *ds = (double*)a1;
	int *p = (int*)a2;
	int i;
	double sum;

	sum = 0.0;
	for (i = 0; i < GC_arrayNumElements (a1); ++i) {
		sum += ds[i];
		ds[i] += n;
	}
	*p = (int)sum;
	return 'c';
}
