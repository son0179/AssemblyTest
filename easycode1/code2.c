int __attribute__((cdecl)) f(int fa, int fb){
	return fa+fb;
}
int main(void){
	f(1,2);
	return 0;
}
