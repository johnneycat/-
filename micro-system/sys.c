#include <stdio.h>
#include <stdlib.h>

 #define sys_import(sysfunc) sys_##sysfunc
// #define garden_true 1
// #define garden_false 0

// //top interface
// struct Tree
// {
// 	void (*sys_seed)();
// 	void (*sys_growup)();
// 	void (*sys_getfruits)();
// };


// //register to sys
// /*
// *keep a objects chain 
// */
// static Garden{
// 	struct Tree* prev_tree;
// 	struct Tree* this_tree;
// 	struct Tree* next_tree;
// };

// /*if one has registered,then repeat register is not allowed
// *this will cost some resource
// *i think this should be varying by time
// */
// #define check_repeat(garden,tree)
// {\
// 	Tree* temp = garden;\
// 	while(temp->next_tree)\
// 		{\
// 			if(temp == tree)
// 				return garden_false
// 			temp = temp->next_tree;\
// 		}
// 	return garden_false;
// }

// #define register(garden,tree) \
// {\
// 	if(!(garden && tree)) \
// 	{\
// 		printf("%s\n", "error: invalid params");\
// 		return garden_false;\
// 	}\
// 	if(check_repeat(garden, tree))\
// 		return garden_false;
// 	Tree* temp = garden;\
// 	while(temp->next_tree) \
// 		temp = temp->next_tree;\
// 	tree->prev_tree = temp->next_tree;\
// 	tree->next_tree = NULL;\
// 	return garden_true;\
// }

// #define unregister(garden,tree)\
// {\
// 		if(!(garden && tree)) \
// 	{\
// 		printf("%s\n", "error: invalid params");\
// 		return garden_false;\
// 	}\
// 	if(!check_repeat(garden, tree))\
// 		return garden_false;\
// 	tree->next_tree->prev_tree = tree->prev_tree;\
// 	tree->prev_tree->next_tree = tree->next_tree;\
// 	free(tree);\
// }
void sys_hello()
{
	printf("%s\n", "this is world");
}

void hello()
{
	//sys_hello();
	char* var = __FUNCTION__;
	sys_import(#__FUNCTION__)();

}

int main()
{
	hello();
}


