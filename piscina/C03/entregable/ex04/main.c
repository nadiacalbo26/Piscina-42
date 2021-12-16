#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find); 

int main() 
{ 
	char *to_find = "ewe"; 
	char str[20] = "hoeeweeewla";   
		 
   	char *tmp  = ft_strstr(str, to_find);
    int aux = 0;  	
    while (tmp[aux])
	{
	write(1, &tmp[aux], 1);
	aux++; 	   
	} 
}
