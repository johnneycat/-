#include <stdio.h>
#include <stdarg.h>

//base structure & functions

typedef struct _TYPE_
{
	int round;
	int rect;
	int oct;
}TYPE;

typedef struct _BASE_OPS_
{
	void (*read)(const char *filename,const char *mode);
	void (*write)(const char *filename,const char *mode);
	void (*ioctrl)(...);
	TYPE type;
}BASE_OPS;

type struct _ELECTRONICS_
{
	BASE_OPS ops;
	int screen_size;
	int confortable_level;
}ELECTRONICS;



