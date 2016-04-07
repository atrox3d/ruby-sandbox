#include <stdio.h>
#include <string.h>
char *getCmdArgument(char attribute[], char value[], char outArgument[]);
char outCmdArgument[100];
char *cmdArgument;

int main () {
    char passwd[] = "laMia PAssword";
    char argument[]= "passwd=";
    cmdArgument = getCmdArgument(argument, passwd, outCmdArgument);
    printf("Password: %s", cmdArgument );

   return 0;
}
char *getCmdArgument(char attribute[], char value[], char outArgument[]){
    char emptyString[] = " ";
    char doubleQuotes[]="\"";
    //char argument[100];

    if (strstr(value, emptyString)){
        snprintf(outArgument, 100, "%s%s%s%s", doubleQuotes, attribute, value, doubleQuotes );
    } else {
        snprintf(outArgument, 100, "%s%s", attribute, value);
    }

    return outArgument;
}