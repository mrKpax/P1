void leggi(char s[])
{
  fgets(s, MAX_LEN+1, stdin);
  int len = strlen(s);
  if (s[Ien-1] == '\n')
  {
      s[len-1] = '\0';
  }
}

char *Ieggi_stringa(int maxlen)
{
  char *s, *s1;
  s = xmalloc(maxlen+1);
  leggi(s);
  int len = strlen(s);

  s1 = xmalloc(len+1);
  strncpy(s1, s, len); 
  free(s);
  return s1;
}
