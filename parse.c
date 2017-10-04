// analyse la chaine 
int parse (char *src, char *s1, char *s2)
{ 
	char *p, *ps = src;
	p = s1;
	while (*ps != '\0' && *ps != '=')
		{
		*p = *ps;
		p++;
		ps++;
		}
	if (*ps == '\0' )
		return 0;
	p = s2;
	ps++;
	while (*ps != '\0')
		{
		*p = *ps;
		p++;
		ps++;
		}	
	return 1;
}
