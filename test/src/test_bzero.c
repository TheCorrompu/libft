#include <stdio.h>
#include <strings.h>
#include <string.h>
#include <assert.h>

#include "libft/libft.h"

typedef struct Params {
    const char *s;
    const size_t n; 
} Params;

int main()
{
    const Params parameters[] = {
        { .s = "", .n = 0 },
        { .s = "", .n = 10 },
        { .s = "abc123", .n = 0 },
        { .s = "abc123", .n = 3 },
        { .s = "abc123", .n = 6 },
        { .s = "abc123", .n = 12 },
    };

    printf("---------- TEST %s ----------\n", __FILE_NAME__);

    for (unsigned i = 0; i < (sizeof(parameters) / sizeof(*parameters)); ++i)
    {
        const Params *parameter = &parameters[i];
        const char *s = parameter->s;
        const size_t len = strlen(s); 
        const size_t n = parameter->n;

        char buffer[2][256] = {};
        for (unsigned j = 0; j < (sizeof(buffer) / sizeof(*buffer)); ++j)
            strlcpy(buffer[j], s, sizeof(buffer[j]));

        bzero(buffer[0], n);
        ft_bzero(buffer[1], n);

        printf("bzero(\"%s\") == ft_bzero(\"%s\")\n", s, s);
        for (unsigned j = 0; j < (sizeof(buffer) / sizeof(*buffer)); ++j) {
            printf("    -> \"");
            for (unsigned k = 0; k < len;  ++k)
                printf("%c", buffer[j][k]);
            printf("\"\n");
        }

        assert(strcmp(buffer[0], buffer[1]) == 0);
        for (unsigned k = 0; k < len;  ++k)
            assert(buffer[0][k] == buffer[1][k]);      
    }
}
