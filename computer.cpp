#include "base.h"


//_COMPUTER_
// struct _COMPUTER_
// {
// 	BASE_OPS ops;
// 	int screen_size;
// 	int confortable_level;
// }COMPUTER;

void computer_read(const char *filename,const char *mode)
{
	printf("%s\n", "computer_read!!!");
}

void computer_write(const char *filename,const char *mode)
{
	printf("%s\n", "computer_write!!!");
}

void computer_write_ioctrl(...)
{
	printf("%s\n", "computer_write_ioctrl");
}

struct ELECTRONICS computer = {
	.ops.read = computer_read,
	.ops.write = computer_write,
	.ops.ioctrl = computer_write_ioctrl,
}