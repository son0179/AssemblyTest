int __attribute__((stdcall)) f(int fa, int fb){
	return fa+fb;
}
int main(void){
	f(1,2);
	return 0;
}
