#include <stdio.h>
#include <string.h>
#define MAX 127

/* function to print all suffix after the c char */
void suffix(char str[], char c)
{
    int i;
    int length = strlen(str);
    
    /* loop throw the input, discard the first 2 charts since they are irlevent (char and a space) */
    for(i=2; i<=length; i++){
        
        if(str[i] == c){
            /* print the str array from the i index and forword*/
            printf("\n%s", &(str[i]));

        }

    }

}

int main()
{
    char input[MAX];

    /* handle input */
    printf("\nEnter a char, and a string: ");
    fgets(input, MAX, stdin); 

    printf("\nThe string you've enterd is: %s", input);

    /* call suffix funcation */
    suffix(input,input[0]);

    return 0;
}
