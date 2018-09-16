/*  carbon.c
    Function file for CIS 2520 A1 Q1"Carbon".
    By: James Arthur Anderson
    Student ID #: 1013076
    Date: Sept. 15, 2018
*/
#include"a1.h"

void recurveCarbon (char *unusedLetter, char *givenString){
    int i =0;
    int j =0;
    char *newString = NULL;
    char *tempUnused= NULL;
    char letter [1];

    /*base case*/
    if (strlen(unusedLetter) == 0){
        printf("%s\n",givenString);
        return;
    } else {
        /*printf("%d\n",strlen(unusedLetter));
        */
         for (i =0; i< strlen(unusedLetter); i++){
            /*allocating memory for tstrings that will be pased on*/
            newString = malloc(strlen(givenString)+2);
            tempUnused = malloc(strlen(givenString)+1);

            /*copying values into passing strings*/
            strcpy(newString,"");

            strcpy(newString, givenString);

            strcpy(tempUnused, unusedLetter);
            letter[0] = unusedLetter[i];

            /*adding leter to end of the newString to be pased to function*/


            strcat(newString, letter);

            /*removing the leter added to the end of the new string fromunused letters*/
            for (j = i; j <= strlen(unusedLetter); j++) {
                tempUnused[j]= tempUnused [j+1]; 
            }
            /*realloc(tempUnused,strlen(unusedLetter));
            */
            /*calling function again with updated variables*/
            /*printf("String given '%s' unusedLetter '%s'\n",givenString, unusedLetter);
            */
             recurveCarbon(tempUnused,newString);
            /*freeing memory previously alocated*/
            free (newString);
            free (tempUnused);
        }
    }
}
