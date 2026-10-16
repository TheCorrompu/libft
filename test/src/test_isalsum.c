#include <stdio.h>
#include <ctype.h>
#include <assert.h>

#include "libft/libft.h"

int main()
{
    printf("---------- TEST %s ----------\n", __FILE_NAME__);

    for (int c = 0; c < 255; ++c)
    {
        const int result1 = isalnum(c) != 0;
        const int result2 = ft_isalnum(c) != 0;

        printf("isalnum(%d) == ft_isalnum(%d) : %d == %d\n", c, c, result1, result2);
        assert(result1 == result2);
    }
}
