
#include<stdio.h>
#include"test.h"
void f(void);
void sub(void *);
int main() {
	void (*fp)();
	fp = f;
	//fp();
	sub(f);
}
void f() {
	extern int g_sub;
	printf("iam f");
	printf("%d", g_sub);
}
