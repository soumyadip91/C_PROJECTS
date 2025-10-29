
#include<stdio.h>
#include<string.h>
#include<math.h>
double division (double,double);
int modulus (int,int);
void print_menu(){
 printf("\n Welcome to simple calculator\n");
    printf("----------------------------------------\n");
    printf("Choose one ofe the following operations\n");
    printf("1.Add\n");
    printf("2.Substrct\n");
    printf("3.Multiply\n");
    printf("4.Divide\n");
    printf("5.Modulus\n");
    printf("6.Power\n");
    printf("7.Exit\n");
    printf("Now , Enter your Choice :");
    
}
void main()
{
    int choice;
    double first,second,result;
    while(1)
    {
       print_menu();
       scanf("%d",&choice);

       if (choice==7)
       {
        break;
       }

       if (choice<1 || choice >7)
       {
        fprintf(stderr,"Invalied menue");
        continue;
       }
       
       printf("\n Enter num 1 :");
       scanf("%lf",&first);
       printf("Enter num 2 :");
       scanf("%lf",&second);
       switch (choice)
       {
       case 1: //add
       result = first+second;
        break;
       case 2: //sub
        result = first-second;
        break; 
       case 3: //mul
        result = first*second;
        break;
       case 4: //div
        result = division(first,second);
        break;
       case 5: //mod
        result = modulus((int)first,(int)second);
        break;
       case 6: //pow
        result = pow(first,second);
        break; 
       }
       if(!isnan(result)){
       printf("\n Result of the Operation : %2f",result);
       }
    }
}

double division (double a,double b){
if (b==0)
{
    fprintf(stderr,"Invalid argument for division");
    return NAN;
}else
{
    return a/b;
}
}

int modulus (int a,int b){
if (b==0)
{
    fprintf(stderr,"Invalid argument for modulus");
    return 1;
}else
{
    return a%b;
}
}