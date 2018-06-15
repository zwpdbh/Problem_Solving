#include <stdarg.h>
#include <stdio.h>

char   buf[256];
double pi = 3.1415926;
char   c  = 'l';
int    i  = 35;
char*  s  = "abcdefg";
int    j;

/**This demo shows the different usage of print function, include
 * sprintf(), Print Formatted Data to Buffer
 * snprintf(), Print Formatted Data to Buffer
 * vfprintf(), Print Argument Data to Stream
 *
 * vsprintf(), Print Argument Data to Buffer, The vsprintf() function works just
 * like the sprintf() function, except that arg_ptr points to a list of
 * arguments whose number can vary from call to call in the program.
 *
 * vsnprintf(), Print Argument Data to Buffer. The vsnprintf() function works
 * just like the snprintf() function, except that arg_ptr points to a list of
 * arguments whose number can vary from call to call in the program.
 */
int main() {
    /*shows the usage of sprintf*/
    j = sprintf(buf, "%s\n", s);
    j += sprintf(buf + j, "%c\n", c);
    j += sprintf(buf + j, "%d\n", i);
    j += sprintf(buf + j, "%f\n", pi);
    printf("output from sprintf:\n%s\ncharacter count = %d\n", buf, j);

    /*shows the usage of snprintf*/
    j = 0;
    j = snprintf(buf, 6, "%s\n", s);
    j += snprintf(buf + j, 6, "%c\n", c);
    j += snprintf(buf + j, 6, "%d\n", i);
    j += snprintf(buf + j, 6, "%f\n", pi);
    printf("\noutput from snprintf:\n%s\ncharacter count = %d\n", buf, j);
    return 0;
}