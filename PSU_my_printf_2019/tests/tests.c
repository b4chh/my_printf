/*
** EPITECH PROJECT, 2019
** tests unitaire
** File description:
** unit test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../my.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_string, .init = redirect_all_std)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test(my_printf2, diplay_char, .init = redirect_all_std)
{
    my_printf("%c", 'a');
    cr_assert_stdout_eq_str("a");
}

Test(my_printf3, diplay_str, .init = redirect_all_std)
{
    my_printf("%s", "hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test(my_printf4, diplay_int, .init = redirect_all_std)
{
    my_printf("%i", 213);
    cr_assert_stdout_eq_str("213");
}

Test(my_printf5, diplay_decimal, .init = redirect_all_std)
{
    my_printf("%d", 213);
    cr_assert_stdout_eq_str("213");
}

Test(my_printf6, diplay_binaire, .init = redirect_all_std)
{
    my_printf("%b", 100);
    cr_assert_stdout_eq_str("1100100");
}

Test(my_printf7, diplay_octal, .init = redirect_all_std)
{
    my_printf("%o", 8);
    cr_assert_stdout_eq_str("10");
}

Test(my_printf8, diplay_hexadecimal, .init = redirect_all_std)
{
    my_printf("%x", 15);
    cr_assert_stdout_eq_str("f");
}

Test(my_printf9, diplay_hexa_maj, .init = redirect_all_std)
{
    my_printf("%X", 10);
    cr_assert_stdout_eq_str("A");
}

Test(my_printf10 , simple_string , . init = redirect_all_std )
{
    my_printf("%u", 212 );
    cr_assert_stdout_eq_str("212");
}

Test(my_printf11, diplay_S, .init = redirect_all_std)
{
    char str[5] = "toto";

    str[1] = 6;
    my_printf("%S", str);
    cr_assert_stdout_eq_str("t\\006to");
}
