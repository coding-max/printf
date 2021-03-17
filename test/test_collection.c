#include "holberton.h"

#define RED printf("\033[0;31m");
#define BLUE printf("\033[0;34m");
#define GREEN printf("\033[0;32m");
#define RESET printf("\033[0m");

/**
 * output - check expected and obtained code.
 * Return: 0 for success, 1 for error.
 */
 int output(int a, int b)
{
	printf("\n");
	if (a == b)
	{
		GREEN;
		printf("Success: %d chars printed.", a);
		RESET;
		return (0);
	}
	RED;
	printf("Error: expected %d, obtained %d.", a, b);
	RESET;
	return (1);
}

/**
 * main - test collection for _printf.
 * Return: nothing
 */
int main(void)
{
	int a, b, cont = 0;







	BLUE;
	printf("\nTEST WITHOUT ARGUMENTS:\n\n");
	RESET;

	printf("Test 1");
	printf("\nexpected: ");
	a = printf("Buenas Noches America");
	printf("\nobtained: ");
	fflush(stdout);
	b = _printf("Buenas Noches America");
	cont = cont + output(a,b);

	printf("\n---------------\n");

	printf("Test 2");
	printf("\nexpected: ");
	a = printf(" ");
	printf("\nobtained: ");
	fflush(stdout);
	b = _printf(" ");
	cont = cont + output(a,b);
	
	printf("\n---------------\n");

	printf("Test 3");
	printf("\nexpected: ");
	a = printf("");
	printf("\nobtained: ");
	fflush(stdout);
	b = _printf("");
	cont = cont + output(a,b);
	
	printf("\n---------------\n");
	
	printf("Test 4");
	printf("\nexpected: ");
	a = printf(NULL);
	printf("\nobtained: ");
	fflush(stdout);
	b = _printf(NULL);
	cont = cont + output(a,b);

	printf("\n---------------\n");

	printf("Test 5");
	printf("\nexpected: ");
	a = printf("%%");
    printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%%");
	cont = cont + output(a,b);

    printf("\n---------------\n");

	printf("Test 6");
	printf("\nexpected: ");
	a = printf("%%s%");
    printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%%s%");
	cont = cont + output(a,b);

	printf("\n---------------\n");

	printf("Test 7");
	printf("\nexpected: ");
	a = printf("%%s");
    printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%%s");
	cont = cont + output(a,b);

    printf("\n---------------\n");

	printf("Test 8");
	printf("\nexpected: ");
	a = printf("s%%s%%cc");
    printf("\nobtained: ");
    fflush(stdout);
	b = _printf("s%%s%%cc");
	cont = cont + output(a,b);

	printf("\n---------------\n");

	printf("Test 9");
	printf("\nexpected: ");
	a = printf("%%s%%r%1buelaaaaaas%%s%%%%%%%%%%sali de %k");
    printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%%s%%r%1buelaaaaaas%%s%%%%%%%%%%sali de %k");
	cont = cont + output(a,b);

	printf("\n---------------\n");

	printf("Test 10");
	printf("\nexpected: ");
	a = printf("%N&&S%%s%%ID%%");
    printf("\nobtained: ");
    fflush(stdout);
	b = _printf("%N&&S%%s%%ID%%");
	cont = cont + output(a,b);

	printf("\n---------------\n");

	printf("Test 11");
	printf("\nexpected: ");
	a = printf(NULL);
    printf("\nobtained: ");
    fflush(stdout);
	b = _printf(NULL);
	cont = cont + output(a,b);
	
	printf("\n===============\n");







	BLUE;
	printf("\nTEST USING %%c SPECIFIER:\n\n");
	RESET;

	printf("Test 12");
	printf("\nexpected: ");
	a = printf("%%c%c", 'B');
    printf("obtained: ");
    fflush(stdout);
    b = _printf("%%c%c", 'B');
	cont = cont + output(a,b);
	
	printf("\n---------------\n");

	printf("Test 13");
	printf("\nexpected: ");
	a = printf("Comiend%c oreja af", 'o');
    printf("\nobtained: ");
    fflush(stdout);
	b = _printf("Comiend%c oreja af", 'o');
	cont = cont + output(a,b);

    printf("\n---------------\n");

	printf("Test 14");
	printf("\nexpected: ");
	a = printf("%c%c%c%c", 'c', 'a', 'c', 'a');
    printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%c%c%c%c", 'c', 'a', 'c', 'a');
	cont = cont + output(a,b);

	printf("\n---------------\n");

	printf("Test 15");
	printf("\nexpected: ");
	a = printf("%%c%c%%c", 90);
    printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%%c%c%%c", 90);
    cont = cont + output(a,b);

	printf("\n---------------\n");

	printf("Test 16");
	printf("\nexpected: ");
	a = printf("%cantidad inecesaria de texto", 40);
    printf("\nobtained: ");
    fflush(stdout);
    b =	_printf("%cantidad inecesaria de texto", 40);
	cont = cont + output(a,b);

	printf("\n---------------\n");

	printf("Test 17");
	printf("\nexpected: ");
	a = printf("%%%%c%%c%c", 90, NULL);
    printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%%%%c%%c%c", 90, NULL);
    cont = cont + output(a,b);

	printf("\n---------------\n");

	printf("Test 18");
	printf("\nexpected: ");
	a = printf("%c", NULL);
    printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%c", NULL);
    cont = cont + output(a,b);

	printf("\n===============\n");
	






	BLUE
	printf("\nTEST USING %%s SPECIFIER:\n");
	RESET;
	
	printf("Test 19");
	printf("\nexpected: ");
	a = printf("TENGO TREMENDO %s", "CALOOOOOOOOOOR%");
	printf("\nobtained: ");
    fflush(stdout);
    b = _printf("TENGO TREMENDO %s", "CALOOOOOOOOOOR%");
	cont = cont + output(a,b);

	printf("\n---------------\n");
	
	printf("Test 20");
	printf("\nexpected: ");
	a = printf("%s", "Perfe%k%t%o%");
	printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%s", "Perfe%k%t%o%");
	cont = cont + output(a,b);

	printf("\n---------------\n");
	
	printf("Test 21");
	printf("\nexpected: ");
	a = printf("%%%s%%%", "No me quiero ir Sr. Stark :(");
	printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%%%s%%%", "No me quiero ir Sr. Stark :(");
	cont = cont + output(a,b);

	printf("\n---------------\n");
	
	printf("Test 22");
	printf("\nexpected: ");
	a = printf("%s%c%c%c%c%s", "Pan ", 'c', 'a', 'c', 'a', " Pan");
	printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%s%c%c%c%c%s", "Pan ", 'c', 'a', 'c', 'a', " Pan");
	cont = cont + output(a,b);

	printf("\n---------------\n");
	
	printf("Test 23");
	printf("\nexpected: ");
	a = printf("D%s Ellia%s", "enis", "s");
	printf("\nobtained: ");
    fflush(stdout);
    b = _printf("D%s Ellia%s", "enis", "s");
	cont = cont + output(a,b);

	printf("\n---------------\n");

	printf("Test 24");
	printf("\nexpected: ");
	a = printf("%s%", "sabeloko");
	printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%s%", "sabeloko");
	cont = cont + output(a,b);

	printf("\n---------------\n");

	printf("Test 25");
	printf("\nexpected: ");
	a = printf("%s", NULL);
	printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%s", NULL);
	cont = cont + output(a,b);

	printf("\n---------------\n");

	printf("Test 26");
	printf("\nexpected: ");
	a = printf("Le dicen %c%c la rompe corazones, %s %s", 'l', 'a', "falsas", NULL);
	printf("\nobtained: ");
    fflush(stdout);
    b = _printf("Le dicen %c%c la rompe corazones, %s %s", 'l', 'a', "falsas", NULL);
	cont = cont + output(a,b);

	printf("\n===============\n");







	BLUE;
	printf("\nTEST USING %%d or %%i SPECIFIER:\n");
	RESET;

	printf("Test 27");
	printf("\nexpected: ");
	a = printf("%i", 0);
	printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%i", 0);
	cont = cont + output(a,b);

	printf("\n---------------\n");

	printf("Test 28");
	printf("\nexpected: ");
	a = printf("%i", INT_MAX);
	printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%i", INT_MAX);
	cont = cont + output(a,b);

	printf("\n---------------\n");

	printf("Test 29");
	printf("\nexpected: ");
	a = printf("%i", INT_MIN);
	printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%i", INT_MIN);
	cont = cont + output(a,b);

	printf("\n---------------\n");

	printf("Test 30");
	printf("\nexpected: ");
	a = printf("%d %d", INT_MIN + 34, INT_MAX - 33);
	printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%d %d", INT_MIN + 34, INT_MAX - 33);
	cont = cont + output(a,b);

	printf("\n===============\n");







	BLUE;
	printf("\nTEST USING %%b:\n");
	RESET;
	
	printf("Test 31");
	printf("\nexpected: ");
	a = printf("0"); /* binary of 0 */
	printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%b", 0);
	cont = cont + output(a,b);

	printf("\n---------------\n");

	printf("Test 32");
	printf("\nexpected: ");
	a = printf("11001"); /* binary of 25 */
	printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%b", 25);
	cont = cont + output(a,b);

	printf("\n---------------\n");

	printf("Test 33");
	printf("\nexpected: ");
	a = printf("11101110000110100100001000110111"); /* binary of 3994698295 */
	printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%b", 3994698295);
	cont = cont + output(a,b);

	printf("\n---------------\n");

	printf("Test 34");
	printf("\nexpected: ");
	a = printf("11111111111111111111111111111111"); /* binary of UINT_MAX */
	printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%b", 4294967295);
	cont = cont + output(a,b);

	printf("\n===============\n");







	BLUE;
	printf("\nTEST USING %%u SPECIFIER:\n");
	RESET;

	printf("Test 35");
	printf("\nexpected: ");
	a = printf("%u", 0);
	printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%u", 0);
	cont = cont + output(a,b);

	printf("\n---------------\n");

	printf("Test 36");
	printf("\nexpected: ");
	a = printf("%u", INT_MAX);
	printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%u", INT_MAX);
	cont = cont + output(a,b);

	printf("\n---------------\n");

	printf("Test 37");
	printf("\nexpected: ");
	a = printf("%u", UINT_MAX);
	printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%u", UINT_MAX);
	cont = cont + output(a,b);

	printf("\n===============\n");






	BLUE;
	printf("\nTEST USING %%o SPECIFIER:\n");
	RESET;

	printf("Test 38");
	printf("\nexpected: ");
	a = printf("%o", 0);
	printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%o", 0);
	cont = cont + output(a,b);

	printf("\n---------------\n");

	printf("Test 39");
	printf("\nexpected: ");
	a = printf("%o", 6746749);
	printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%o", 6746749);
	cont = cont + output(a,b);

	printf("\n---------------\n");

	printf("Test 40");
	printf("\nexpected: ");
	a = printf("%o", INT_MAX);
	printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%o", INT_MAX);
	cont = cont + output(a,b);

	printf("\n===============\n");







	BLUE;
	printf("\nTEST USING %%x SPECIFIER:\n");
	RESET;

	printf("Test 41");
	printf("\nexpected: ");
	a = printf("%x", 0);
	printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%x", 0);
	cont = cont + output(a,b);

	printf("\n---------------\n");

	printf("Test 42");
	printf("\nexpected: ");
	a = printf("%x", 6746749);
	printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%x", 6746749);
	cont = cont + output(a,b);

	printf("\n---------------\n");

	printf("Test 43");
	printf("\nexpected: ");
	a = printf("%x", INT_MAX);
	printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%x", INT_MAX);
	cont = cont + output(a,b);

	printf("\n===============\n");







	BLUE;
	printf("\nTEST USING %%X SPECIFIER:\n");
	RESET;

	printf("Test 44");
	printf("\nexpected: ");
	a = printf("%X", 0);
	printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%X", 0);
	cont = cont + output(a,b);

	printf("\n---------------\n");

	printf("Test 45");
	printf("\nexpected: ");
	a = printf("%X", 6746749);
	printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%X", 6746749);
	cont = cont + output(a,b);

	printf("\n---------------\n");

	printf("Test 46");
	printf("\nexpected: ");
	a = printf("%X", INT_MAX);
	printf("\nobtained: ");
    fflush(stdout);
    b = _printf("%X", INT_MAX);
	cont = cont + output(a,b);

	printf("\n===============\n");








	if (cont == 0)
	{
		GREEN;
		printf ("\n\n46 CASES CHECKED, 0 ERRORS.\n\n");
		RESET;
	}
	else
	{
		RED;
		printf ("\n\n46 CASES CHECKED, %d ERRORS.\n\n", cont);
		RESET;
	}
	return (cont);
}