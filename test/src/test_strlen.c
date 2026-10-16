#include <stdio.h>
#include <string.h>
#include <assert.h>

#include "libft/libft.h"

int main()
{
    const char *tests[] = {"", "abc123"};

    printf("---------- TEST %s ----------\n", __FILE_NAME__);

    for (unsigned i = 0; i < (sizeof(tests) / sizeof(*tests)); ++i)
    {
        const char *t = tests[i];
        const unsigned len1 = strlen(tests[i]);
        const unsigned len2 = ft_strlen(tests[i]);

        printf("strlen(%s) == ft_strlen(%s) : %d == %d\n", t, t, len1, len2);
        assert(len1 == len2);
    }
}
