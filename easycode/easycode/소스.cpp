int glo;
int main() {
	_asm {
		NOP
	}
	
	int a;
	register int r;
	static int s;
	
	_asm {
		NOP
	}
	
	a = 1;
	r = 3;
	s = 5;
	glo = 7;
	
	_asm {
		NOP
	}
	
	int* pa, * pr, * ps, * pglo;
	
	_asm {
		NOP
	}
	
	pa = &a;
	pr = &r;
	ps = &s;
	pglo = &glo;

	_asm {
		NOP
	}

}