/*
    step 1 : undersand the problem statement
    step 2 : write the algorithm
    step 3 : decide the programming language
    step 4 : write the program
    step 5 : test the program

*/


//////////////////////////////////////////////
//
// step 1 : undersand the problem statement
//           user is going to enter any 2 number
//           and we have to perform addition 
//
//////////////////////////////////////////////


//////////////////////////////////////////////
//
// step 2 : write the algorithm
/*
        START 
            Accept first number an No1
            Accept second number an No2
            Creatr the variable as Ans to store the resultperform the additon and store into ans
            Disply the result from ans


        END
*/
//
//////////////////////////////////////////////



//////////////////////////////////////////////
//
// step 3 : decide the programming language
//           we select c programming lanuguage
//
//////////////////////////////////////////////


//////////////////////////////////////////////
//
// step 4 : write the program
//
//////////////////////////////////////////////




#include <stdio.h>

int main()
{
    int iValue1 , iValue2 , iResult;

    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);


    iResult = iValue1 + iValue2;        // Business logic

    printf("%d \n",iResult);

    return 0;
}