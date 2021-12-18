void leggi(char s[])
{
	fgets(s, MAX_LEN+1, stdin);
	int len = strlen(s);
	if (s[len-1] == '\n')
	{
		s[len-1] = '\0';
	}
}

char *leggi_stringa(int maxlen)
{
    char *s, *s1;
    s = (char *) malloc(maxlen+1);
    
    if (!s) 
    {
        return NULL;
    }
    
    leggi(s);
    
    int len = strlen(s);
    
    s1 = malloc(len+1);
    if (!s)
    {
        free(s);
        return NULL;
    }
    
    strncpy(s1, s, len);
    free(s);
    return s1;
}
