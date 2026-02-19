# include<stdio.h>
# include<stdbool.h>
bool freeze_C(int temperature){
    if(temperature <=0) return true;
    else return false;
}
bool freeze_F(int temperature){
    if (temperature <=32) return true;
    else return false;
}
// pointer funtion as parameter
void is_freezing(bool(*check_freezing)(int)){
int temperature = 0;
printf("Enter the temperature:\n");
scanf("%d",&temperature);
if(check_freezing(temperature))
printf("Its freezing...\n");
else
printf("Its not freezing\n");
}
int main(){
    printf("In celsius...");

    is_freezing(freeze_C);
    is_freezing(freeze_C);
    is_freezing(freeze_F);
    is_freezing(freeze_F);




    return 0;
}