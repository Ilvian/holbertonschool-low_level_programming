#include <stdarg.h>
#include <stdio.h>
/**
 *print_all - function that prints everything
 *@format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
    const char *ptr = format;
    char c;
    char *s;

    va_start(args, format);

    while (ptr && *ptr)
    {
        c = *ptr;

        switch (c)
        {
            case 'c':
                printf("%c", va_arg(args, int));
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                break;
            case 'f':
                printf("%f", va_arg(args, double));
                break;
            case 's':
                s = va_arg(args, char *);
                if (s)
                    printf("%s", s);
                else
                    printf("(nil)");
                break;
            default:
                break;
        }

        ptr++;

        while (*ptr && (*ptr != 'c' && *ptr != 'i' && *ptr != 'f' && *ptr != 's'))
            ptr++;

        if (*ptr)
            printf(", ");
    }

    va_end(args);

    printf("\n");
}
