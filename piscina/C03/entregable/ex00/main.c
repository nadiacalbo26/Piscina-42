#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2); 

int main() 
{ 
	char *s1 = "hola"; 
	char *s2 = "hola";
	int a = ft_strcmp(s1, s2); 
	printf("%d", a); 
} 
