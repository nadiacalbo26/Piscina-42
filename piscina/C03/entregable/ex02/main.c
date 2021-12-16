#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src); 

int main() 
{ 
	char *dest = "wp32l"; 
	char src[20] = "hola";   
		
	char *tmp; 
	tmp  = ft_strcat(dest, src);
	int aux = 0; 
   	while (tmp[aux])
	{
	   write(1, &tmp[aux], 1);
		aux++; 	   
	} 
}
