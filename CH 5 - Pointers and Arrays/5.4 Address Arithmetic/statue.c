#define ALLOCSIZE 10000  // size of available space

static char   allocbuf[ALLOCSIZE];     // storage for alloc
static char*  allocp = allocbuf;       // next free position