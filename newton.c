/*  newton.c
    Function file for CIS 2520 A1 Q3"Newton".
    By: James Arthur Anderson
    Student ID #: 1013076
    Date: Sept. 15, 2018
*/
#include"a1.h"
//Function thar calcualtes the auare root of a number using newtons number recursivly 
void recurveNewton (double a, double x, double accuracy){
    a = a/2;
    if (fabs((a*a)-x)<= accuracy){
        printf("Recursive Newton value:%f\n",a);
        return;
    }else{
        recurveNewton((a+(x/a)),x,accuracy);
    }

}
//Function thar calcualtes the auare root of a number using newtons number interativly 
void interativeNewton (double x, double accuracy){
    double a = -1;
    a = x/2.0;
    while (fabs((a*a)-x)>accuracy){
        a = (a+(x/a))/2;
    }
    printf("Iterative Newton value:%f\n",a);
}
