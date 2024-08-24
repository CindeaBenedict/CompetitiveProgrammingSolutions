void FNume(char s[], char id[])
{
   strcpy(id, strchr(s, ' ') + 1);
   strcat(id, "2022");
}