#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "ft_printf.h"

int main(void)
{
    void *ptr = NULL;
    char *str = "pontero";
    int x = 42;

    printf("\n========== FT_PRINTF TEST ==========\n\n");

    printf("---- %%c ----\n");
    printf("Real : %c %c %c\n", 'A', 48, '0');
    ft_printf("Mine : %c %c %c\n\n", 'A', 48, '0');

    printf("---- %%s ----\n");
    printf("Real : %s %s %s\n", "test_case", NULL, str);
    ft_printf("Mine : %s %s %s\n\n", "test_case", NULL, str);

    printf("---- %%p ----\n");
    printf("Real : %p %p %p\n", &x, ptr, NULL);
    ft_printf("Mine : %p %p %p\n\n", &x, ptr, NULL);

    printf("---- %%d / %%i ----\n");
    printf("Real : %d %d %d %d\n", 42, -42, INT_MIN, INT_MAX);
    ft_printf("Mine : %d %d %d %d\n\n", 42, -42, INT_MIN, INT_MAX);

    printf("---- %%u ----\n");
    printf("Real : %u %u %u\n", 42, -1, INT_MAX);
    ft_printf("Mine : %u %u %u\n\n", 42, -1, INT_MAX);

    printf("---- %%x ----\n");
    printf("Real : %x %x %x\n", 0, 255, INT_MAX);
    ft_printf("Mine : %x %x %x\n\n", 0, 255, INT_MAX);

    printf("---- %%X ----\n");
    printf("Real : %X %X %X\n", 0, 255, INT_MAX);
    ft_printf("Mine : %X %X %X\n\n", 0, 255, INT_MAX);

    printf("---- %%%% ----\n");
    printf("Real : %% %% %%\n");
    ft_printf("Mine : %% %% %%\n\n");

    printf("---- MIXED ----\n");
    printf("Real : %s %d %x %p %%\n", "Hi", -42, 255, &x);
    ft_printf("Mine : %s %d %x %p %%\n\n", "Hi", -42, 255, &x);

    printf("====================================\n");

	printf("\n===== EXTRA EDGE TESTS =====\n\n");

/* 1️⃣ Empty string */
printf("---- EMPTY STRING ----\n");
printf("Real : '%s'\n", "");
ft_printf("Mine : '%s'\n\n", "");

/* 2️⃣ Only percent (undefined ama crash olmamalı) */
printf("---- ONLY %% ----\n");
printf("Mine : ");
ft_printf("%");
printf("\n\n");

/* 3️⃣ Many percent */
printf("---- MANY %% ----\n");
printf("Real : ");
printf("%%%%%%\n");
printf("Mine : ");
ft_printf("%%%%%%\n\n");

/* 4️⃣ Multiple arguments */
printf("---- MULTI ARG ----\n");
printf("Real : %d %d %d %d\n", 1, 2, 3, 4);
ft_printf("Mine : %d %d %d %d\n\n", 1, 2, 3, 4);

/* 5️⃣ Null char */
printf("---- NULL CHAR ----\n");
int r1 = printf("Real : %c END\n", 0);
int r2 = ft_printf("Mine : %c END\n", 0);
printf("Real len = %d | Mine len = %d\n\n", r1, r2);

/* 6️⃣ Long string */
printf("---- LONG STRING ----\n");
printf("Real : %s\n",
"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
ft_printf("Mine : %s\n\n",
"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");

/* 7️⃣ INT_MIN again */
printf("---- INT_MIN ----\n");
printf("Real : %d\n", INT_MIN);
ft_printf("Mine : %d\n\n", INT_MIN);

/* 8️⃣ Return value check */
printf("---- RETURN CHECK ----\n");
r1 = printf("Hello %d %x %%\n", 42, 255);
r2 = ft_printf("Hello %d %x %%\n", 42, 255);
printf("Real len = %d | Mine len = %d\n\n", r1, r2);

printf("===== END EXTRA TESTS =====\n");

    return 0;
}
