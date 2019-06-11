//Given a sentence,s , print each word of the sentence in a new line.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    int count =1, i;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    char space = ' ',ch;
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.

    for(int i=0;i<strlen(s);i++){
        ch = s[i];
        if(ch==space){
            printf("\n");
            continue;
        }
        printf("%c",ch);
    }
    return 0;
}

