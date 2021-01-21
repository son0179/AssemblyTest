static int g_sub;
void sub(void *p) {
	void(*fp)() = (void (*)(void))p;
	//int a;
	fp();
	g_sub = 5;
}