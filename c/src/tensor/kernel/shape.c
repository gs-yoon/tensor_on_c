

#define SHAPE(...) __VA_ARGS__
#define DIM(N) N

// int* shape(int dim , ...)
// {
// 	va_list ap; 
// 	va_start(ap, d); 
// 	int a[10] = {0};
// 	int i = 0;

// 	for (i = 1; i <= dim; i++)
// 		a[i] = va_arg(ap, int);
    
// 	va_end(ap);
// 	return a;
// }
