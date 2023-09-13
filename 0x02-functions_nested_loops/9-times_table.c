#include "main.h"
/**
 * times_table - Print the 9 times table starting with 0
 * Return: 0
 */

void times_table(void) 
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++) 
		{
			_putchar(' ')
            		_putchar('0' + i * j);
            			if (j < 9) 
	    			{	
                			_putchar(',');
            			}
        	}
        		
		 _putchar('\n');	
	}
}

