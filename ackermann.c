/*  ackermann.c
    Function file for CIS 2520 A1 Q2"Ackermann".
    By: James Arthur Anderson
    Student ID #: 1013076
    Date: Sept. 15, 2018
*/
#include"a1.h"
/*Function that excutes Ackermann's Function*/
long long ackermannFunction (long long m, long long n){
    if (m == 0 && n>=0 ){
        return n+1;
    }else if (m > 0 && n == 0){
        return ackermannFunction(m-1, 1);
    }else if (m > 0 && n > 0){
        return ackermannFunction(m-1,ackermannFunction(m,n-1));
    }else{
        return -1;
    }
}

void ackermannBoundry (){
    long long i =0;
    long long j = 0;
    do{

        do{
            j++;
            //printf("%lld returns '%lld' \n",j, ackermannFunction(i,j));
        }while(ackermannFunction(i,j)<INT_MAX);
        printf("The range for n using m vale = %lld is (0 - %lld)\n",i,j-1);
        j = 0;
        i++;
    }while(ackermannFunction(i,j)<=INT_MAX);

}
