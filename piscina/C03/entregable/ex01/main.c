#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n); 

int main() 
{ 
	char *s1 = "holatt"; 
	char *s2 = "hola";
	int a = ft_strncmp(s1, s2, 6); 
	printf("%d", a); 
} 
