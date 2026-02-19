# include<stdio.h>
void function(int x)
    {
        printf("x:%d",x);
    }

double add(double x,double y){
    return x+y;
}

int subtract(int x, int y)
{
    return x-y;
}

int multiple(int x,int y){
    return x*y;
}

int divide(int x,int y){
    return x/y;
}
//return pointer funtions
int (*select_operation())(int,int){
    int option =0;
    printf("Select an operation\n");
    printf("For subtract option=1\n");
    printf("For multiple option=2\n");
    printf("For divide option=3\n");
    printf("Enter:");
    scanf("%d",&option);

    if(option==1) return subtract;
        else if (option==2) return multiple;
        else if (option==3) return divide;
        else NULL;
    

}
int main(){
    
// funtion pointer declaration
    void (*function_pointer) (int);
// assigning the funtion address
    function_pointer = &function;
//dereferencing the pointer and passing value to function
    (*function_pointer)(4);
    printf("\n");
// funtion pointer declaration and assignment = add or =&add
double (*add_pointer)(double,double) = add;

double a =4;
double b=5;
double result= add_pointer(a,b);

printf("Result:%f\n",result);
//funtion pointer stored in array
int (*array[])(int,int) = {subtract,multiple,divide};

int multi= (*array[1])(12,10);
int sub= (*array[0])(12,10);
int div= (*array[2])(12,10);

printf("Multiplication:%dSubtraction:%dDivision:%d\n",multi,sub,div);
// funtion pointer declaration and assignment with pointer to funtion return type.
int (*operation)(int, int) = select_operation();

printf("Result:%d",operation(20,10));

    return 0;
}