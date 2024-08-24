#include <cstring>

int Path(const char cale[], char d[101][101])
{
   int i;
   char calee[101];
   strcpy(calee, cale);

   char* folder;
   folder = strtok(calee, "\\");

   i = 0;
   while (folder != NULL)
   {
      strcpy(d[i], folder);
      folder = strtok(NULL, "\\");
      i++;
   }

   return i;
}