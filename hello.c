#include<stdio.h>
#define how_many_times_to_say_hello 3
void say_three_hi ();
int main (void)
{
    say_three_hi();
    return 0;
}

void say_three_hi()
{
	int i;
	for (i = 0; i < how_many_times_to_say_hello; i++) 
    {	
	    printf("hello word \n");
	}
}
