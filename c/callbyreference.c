#include<stdio.h>

void swap(int *a, int *b);


int main(void){

    printf("\n" "Call by reference demo...""\n");

    int x= 10;
    int y =5;
    printf("The values of x and y  before swap.\n");
    printf("The value of x is:%d\n""The value of y is:%d\n",x,y);

    

    int temp;
    temp =y;
    y=x;
    x=temp;
    printf("The values of x and y after the swap...\n");
    printf("The values of x:%d \nThe value of y:%d\n",x,y);

    printf("Swap funtion call here...\n");
    swap(&x,&y);
    printf("The values of x:%d \nThe value of y:%d\n",x,y);
    swap(&x,&y);
    printf("The values of x:%d \nThe value of y:%d\n",x,y);



    return 0;
}

void swap(int *a,int *b){

    int temp;
    temp =*b;
    *b=*a;
    *a=temp;

}