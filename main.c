#include <stdio.h>
#include <stdlib.h>

//Author: Cauê Eugênio
//Date: 19/08/2019
//Version: 1.0

void addition();
void multiplication();
void subtraction();
void division();

int main(){
    int choose, repeat;
    printf("\t\t\t\t\t++++CALCULATOR VERSION 1.0++++\n\n");
    printf("Choose the operation.:: Addition[1] Subtraction[2] Multiplication[3] Division[4]\n\n");
    printf("Write here: ");
    scanf("%i",&choose);

    switch(choose){ //switch start

    case 1:
        printf("\n[You select Addition]\n\n");
        addition(); //here the program will call the function addition
        printf("You want do again? Yes[1] No[2]: ");
        scanf("%i",&repeat);
        if(repeat == 1){  //this condition verify if the user want continue
            system("cls"); //this condition clean the console
            main();
        }else{
            return 0;
        }
        break;

    case 2:
        printf("\n[You select Subtraction]\n\n");
        subtraction(); //here the program will call the function subtraction
        printf("You want do again? Yes[1] No[2]: ");
        scanf("%i",&repeat);
        if(repeat == 1){  //this condition verify if the user want continue
            system("cls"); //this condition clean the console
            main();
        }else{
            return 0;
        }
        break;

    case 3:
        printf("\n[You select Multiplication]\n\n");
        multiplication(); //here the program will call the function multiplication
        printf("You want do again? Yes[1] No[2]: ");
        scanf("%i",&repeat);
        if(repeat == 1){  //this condition verify if the user want continue
            system("cls"); //this condition clean the console
            main();
        }else{
            return 0;
        }
        break;

    case 4:
        printf("\n[You select Division]\n\n");
        division(); //here the program will call the function division
        printf("You want do again? Yes[1] No[2]: ");
        scanf("%i",&repeat);
        if(repeat == 1){  //this condition verify if the user want continue
            system("cls"); //this condition clean the console
            main();
        }else{
            return 0;
        }
        break;

    default:
        printf("\n[I don't understand what you need, please try again]\n\n");
        main();
        break;

    }//switch end


}

void addition(){
     int num1, num2, result;
     printf("Insert the 1 number: ");
     scanf("%i",&num1);
     printf("Insert the 2 number: ");
     scanf("%i",&num2);
     result = num1 + num2;
     printf("\n\nThe result is %i\n\n",result);
}
void subtraction(){
     int num1, num2, result;
     printf("Insert the 1 number: ");
     scanf("%i",&num1);
     printf("Insert the 2 number: ");
     scanf("%i",&num2);
     if(num1 > num2){
        result = num1 - num2;
     }else{
        result = num2 - num1;
     }

     printf("\n\nThe result is %i\n\n",result);
}
void multiplication(){
     int num1, num2, result;
     printf("Insert the 1 number: ");
     scanf("%i",&num1);
     printf("Insert the 2 number: ");
     scanf("%i",&num2);
     result = num1 * num2;
     printf("\n\nThe result is %i\n\n",result);
}
void division(){
     int num1, num2, result;
     printf("Insert the 1 number: ");
     scanf("%i",&num1);
     printf("Insert the 2 number: ");
     scanf("%i",&num2);
     result = num1 / num2;
     printf("\n\nThe result is %i\n\n",result);
}
