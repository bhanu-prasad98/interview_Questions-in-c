#include <stdio.h>
struct ravi
{
	char name[100];
	int roll;
	double percentage;
}; 

void main()
{
	int abhi=10;
	struct ravi harsha={"shiva",1,97.2};
	printf("abhi=%d\n",abhi);
	printf("harsha name=%s\n",harsha.name);
	printf("harsha roll no=%d\n",harsha.roll);
	printf("harsha percentage=%lf\n",harsha.percentage);
}