# include <stdio.h>
# include<stdlib.h>
int main(void){

    int *a = (int *)malloc(sizeof(int) * 10);

    for(int i=0;i<10;i++)
    a[i] =10-1;

    for(int i=0; i <10;i++)
    printf("%d=%d\n",i,a[i]);

    printf("\n");

    printf("The address of a:%p\n",a);

    free(a);
    return 0;

}

