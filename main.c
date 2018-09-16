/*  main.c
    Main Function file for CIS 2520 A1.
    By: James Arthur Anderson
    Student ID #: 1013076
    Date: Sept. 15, 2018
*/
#include"a1.h"

int main(){
    char carbon[] = "carbon";   
    char carbonInput[] = "";
    long long userM, userN;
    recurveCarbon (carbon,carbonInput);
    printf("Please input value for m to be used in ackerman's function: ");
    scanf ("%lld",&userM);
    printf("Please input value for n to be used in ackerman's function: ");
    scanf ("%lld",&userN);
    printf("The result of ackerman's function is '%lld'\n",ackermannFunction(userM,userN));
    ackermannBoundry();
    return 0;
}

