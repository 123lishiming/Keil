
int f0(int a)
{
	return a * (a + 1);
}

__attribute__ ((always_inline)) int f1(int a)
{
	return a * (a + 2);
}
int num = 0;
int main (void) {      
		num = f0(num);
		num = f0(num);
		num = f0(num);
		num = f0(num);
		num = f1(num);
		num = f1(num);
	  num = f1(num);
		num = f1(num);
		for(;;){}
}
