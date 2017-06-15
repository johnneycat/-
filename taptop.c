#include "base.h"


//_TAPTOP_

// struct _TAPTOP_
// {
// 	BASE_OPS ops;
// 	int screen_size;
// 	int confortable_level;
// }TAPTOP;

void taptop_read(const char *filename,const char *mode)
{
	printf("%s\n", "taptop_read!!!");
}

void taptop_write(const char *filename,const char *mode)
{
	printf("%s\n", "taptop_write!!!");
}

void taptop_write_ioctrl(...)
{
	printf("%s\n", "taptop_write_ioctrl");
}

//
struct ELECTRONICS taptop = {
	.ops.read = taptop_read,
	.ops.write = taptop_write,
	.ops.ioctrl = taptop_write_ioctrl,
}

