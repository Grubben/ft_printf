## Miscellanious
char* the_string : I can change the char to which the_string points, and I can modify the char at which it points.

const char* the_string : I can change the char to which the_string points, but I cannot modify the char at which it points.

char* const the_string : I cannot change the char to which the_string points, but I can modify the char at which it points.

const char* const the_string : I cannot change the char to which the_string points, nor can I modify the char at which it points

## Variadic functions
### Docs
-va_start(va_list pargs, last)
	This macro accepts two arguments.
		    -The first argument is a variable declared as va_list type, which is an argument pointer variable.
			-The second argument is the last fixed argument accepted by the variadic function.
	This macro initialises the argument pointer variable pargs to point to the first optional argument accepted by the variadic function.

-va_arg(va_list pargs, type)
	This macro accepts two arguments.
			-This first argument is same as the first argument in va_start() macro.
			-The second argument specified the expected data type pointed by pargs.
	This function returns the value of the argument pointed by pargs, and also update the pargs to point to the next argument in the list.

-va_end(va_list pargs)
	This macro ends the use of pargs. According to this manual page, after calling va_end(pargs), further va_arg calls with pargs may not work. However, in GNU C library, va_end does nothing, so you may not necessary to use it except for portability reason.

### Implementation
They need some sort of limit for it to stop. Usually it's the first (defined) argument.
In this case, I propose it not have a limit and va_arg be called only and every time it's necessary
```C
// while iterating over the string
if (is_replaceable())
	va_arg(...);
```


## Strat ( a mix between python and C )
```C
func:	is_replace(char	*str)
	if (*str == '%')
	{
		if *(str + 1) in "cspdiuxX%"
		{
			return (1);
		}
		printf("This shouldn't happen, not reachable.")
		return (0);
	}
	return (0);

func:	CONVERT(char *str)
	if *(str + 1) == 'c'
		toChar()
	if *(str + 1) == 's'
		toString()
	if *(str + 1) == 'p'
		toPointer()
	if *(str + 1) == 'd'
		toDecimal()
	if *(str + 1) == 'i'
		toInteger()
	if *(str + 1) == 'u'
		toUdecimal()
	if *(str + 1) == 'x'
		toLoHexadecimal()
	if *(str + 1) == 'X'
		toUpHexadecimal()
	if *(str + 1) == '%'
		toPercent();


func:	ft_printf(const char *format)
	
	while (*format)
	{
		if (is_replace(format))
		{
			CONVERT(format);
			# this is to skip over those 2 chars when done
			# Could be done in CONVERT 
			format = format + 2;
		}

		format++;
	}
```
