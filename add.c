#define range 25
int devision=sqrt(range);
int s_x=x0/devision,s_y=y0/devision;
char ch[]={0x0c,0xf9,0xa4,0x0b,0x99,0x92,0x82,0xf8,0x80,0x90};
char ch_off=0xff;
char ch_on=0x00;
void fun_dev(int x,int y)
{
	return x+y;
}
char bcd_high(int d)
{
	return ch[d/10];
}
char bcd_low(int d)
{
	return ch(d%10);
}
int main()
{
	
return 0;
}
