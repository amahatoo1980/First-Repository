#include<stdio.h>

/*function declaration*/

int maxValue(int number1, int number2);

int main(int argc, char* argv[]){
    int a = 100;
    int b = 200;
    int returnValue;

    /*Callin a function to get the Max Value*/

    returnValue = maxValue(a,b);

    printf("Max Value is : %d\n" , returnValue);

    return 0;
}

int maxValue(int number1, int number2){
    
    /*local veriable declaration*/

    int result;

    if(number1>number2)
        result = number1;
    else 
        result = number2;

    return result;
}

