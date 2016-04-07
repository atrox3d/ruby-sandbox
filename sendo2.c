#include <stdio.h>
#include <string.h>
char *getCmdArgument(char attribute[], char value[], char outArgument[]);
char outCmdArgument[100];
char *cmdArgument;
int main () {
    char passwd[] = "Stringa di Prova";
    char *argument= "passwd=";
    cmdArgument = getCmdArgument(argument, passwd, outCmdArgument);
    printf("Password: %s", cmdArgument );


    char uname[] = "Sendo";
    argument="uname=";

    cmdArgument = getCmdArgument(argument, uname, outCmdArgument);
    printf("uname: %s", cmdArgument );

    return 0;
}
char *getCmdArgument(char attribute[], char value[], char outArgument[]){
    char emptyString[] = " ";
    char doubleQuotes[]="\"";

    if (strstr(value, emptyString)){
        snprintf(outArgument, 100, "%s%s%s%s", doubleQuotes, attribute, value, doubleQuotes);
        } else {
            snprintf(outArgument, 100, "%s%s", attribute, value);
        }

        return outArgument;
}
