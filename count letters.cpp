#include <stdio.h>

#define NLOWER 26   /* if you need a constant, define one */

int main (void) {

    int c,                              /* var to hold each char */
        prev = 0,                       /* var to hold previous char */
        count = 1;                      /* sequential count */

    while ((c = getchar()) != EOF) {    /* loop over each char */
        if (prev) {                     /* does prev contain a char ? */
            if (prev == c)              /* same as last ? */
                count++;                /* imcrement count */
            else {                      /* chars differ */
                printf ("%d", count);   /* output count */
                count = 1;              /* reset count */
            }
        }
        prev = c;                       /* save c as prev */
    }
    putchar ('\n');

    return 0;
}
