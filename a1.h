/*  a1.h
    Header File for Asignment 1.
    By: James Arthur Anderson
    Student ID #: 1013076
    Date: Sept. 15, 2018
*/
/*including of standard libraries*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
#include<math.h>

#ifndef A1_H
#define A1_H

void recurveCarbon (char *unusedLetter, char *givenString);

long long ackermannFunction(long long m, long long n);
void ackermannBoundry ();

void recurveNewton (double a, double x, double accuracy);
void interativeNewton (double x, double accuracy);

#endif

  
