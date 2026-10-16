
#include <string.h>
void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char   *p1;
    unsigned char   *p2;
    size_t  i;

    if (!dst && !src)
        return (NULL);
    p1 = (unsigned char *)src;
    p2 = (unsigned char *)dst;
    i = 0;
    while (i < n)
    {
        p2[i] = p1[i];
        ++i;
    }
    return (dst);
}

/* #include <stdio.h>
int main(void)
{
    char dst[20] = "Bonjour";
    char *cpy;
    cpy = ft_memcpy(dst, "Bonsoir", 8);
    printf("%s\n", cpy);
    return (0);
} */