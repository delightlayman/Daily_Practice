#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning( disable : 6031)
static unsigned long int next = 1;

int rand1(void)
{
	next = next * 1103515245 + 12345;
	return (unsigned int)(next / 65536) % 32768;

}


void srand1(unsigned int seed)
{
	next = seed;
}