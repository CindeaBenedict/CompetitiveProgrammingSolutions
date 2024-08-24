#include <cstring>

int IndexOf(char s[], char ch)
{
   char *pos = strchr(s, ch);
   if (pos != NULL)
      return (pos - s);
   return -1;
}

int LastIndexOf(char s[], char ch)
{
   char *pos = strrchr(s, ch);
   if (pos != NULL)
      return (pos - s);
   return -1;
}

int NthIndex(char s[], char ch, int k)
{
   if (k <= 0)
      return -1;

   char *pos = strchr(s, ch);

   for (int i = 1; (i < k) && (pos != NULL); ++i)
      pos = strchr(pos+1, ch); // nu mai cautam in tot sirul, cautam doar in sirul din dreapta pozitiei gasite

   if (pos != NULL)
      return (pos - s);
   return -1;
}