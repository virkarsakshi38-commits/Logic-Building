/*
  step 1: understand the problem statement
  step 2: write the algorithm
  step 3: decide the programming language 
  step 4: write the program 
  step 5: test the program

*/

////////////////////////////////////////////////////////////////////
//
//step 1: understand the problem statement
//         user is going to enter any 2 integers 
//         and we have to perform addition
///////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////
//step 2: write the algorithm
/*
    START
        Accept first number a no1
        Accept first number a no2
        Create the variable as ans to store the result
        Perform the addition and store into Ans 
        Display the result from Ans 

    END
*/
///////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////
//
//step 3: decide the programming language
//        we select c programming
          
//////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//       
//       step 4: write the program 
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function name:  Addition
//  Input        :  Integer,Integer   
//  output       :  Interger
//  description  :  performs addition
//  date         :  04/10/2026
//  author       :  Sakshi Dilip Shelke
//
//////////////////////////////////////////////////////////////////

int Addition(int iNo1, int iNo2)
{
    int iAns=0;

    iAns=iNo1+iNo2;   //Business logic 
    return iAns;
} 
///////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue1=0, iValue2=0, iReuslt=0;      
    //variable name is called naming convention mention datatype 

    printf("Enter First number:\n");
    scanf("%d",&iValue1);

    printf("Enter Second number:\n");
    scanf("%d",&iValue2);

    iReuslt=Addition(iValue1,iValue2);

    printf("Addition is: %d\n",iReuslt);



    return 0;   //success to o.s
}

/////////////////////////////////////////////////////////////////
//step 5: test the program
//

//Tested test cases
//----------------------------------------------
//    Input1   Input2    Output
//----------------------------------------------
//      10      11        21
//      11      0         11
//      0       21        21
//      20      -9        11
//      -9      -11       20
//----------------------------------------------
//
////////////////////////////////////////////////////////////////