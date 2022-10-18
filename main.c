#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
    for (i=0;i<5;i++)
    {
        int temp = 1;
        printf("temp = %d\n", temp);
        temp++;//계산후temp값은사라짐 계속해서1만print 
    }
    return 0;
}

