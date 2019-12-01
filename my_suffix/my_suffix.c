#include <stdio.h>
#include <string.h>
#define MAX 127 /* the max value for the input */

/* 
function to print all suffix after the c char and return how many times the char c is in str[]
char str[] - a string to search a char in
char c - the char to loog for in str[]
return - the number the char c found in str[]
 */
int suffix(char str[], char c)
{
    int i;
    int counter = 0;
    int length = strlen(str);
    
    /* loop throw the input, discard the first 2 charts since they are irlevent (char and a space) */
    for(i=2; i<=length; i++){
        
        if(str[i] == c){
            
            /*
             print the str array from the i index and forword,
             the ‘&’ sign is used to provide the address of the variable to the printf
            */
            printf("\n%s", &(str[i]));
            
            /* bump the counter by 1 */
            counter++;
        }
    }

    return counter;

}

int main()
{
    char input[MAX];
    int charInStr;

    /* handle input */
    printf("\nEnter a char, and a string: ");
    fgets(input, MAX, stdin); 

    printf("\nThe string you've enterd is: %s", input);

    /* call suffix funcation */
    charInStr = suffix(input,input[0]);

    printf("\nThe char \'%c\' can be found %d times inside the input.\n", input[0], charInStr);

    return 0;
}
