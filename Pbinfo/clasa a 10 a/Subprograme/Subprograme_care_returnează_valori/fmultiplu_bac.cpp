unsigned int multiplu(unsigned int n)
{
   unsigned int short gasit=0;
   unsigned int next=1,m=n;
   while(!gasit)
   {
       m=n*next;
       if(((float)sqrt(m)*(float)sqrt(m))==m)
           gasit=1;
       next++;
   }
   return m;
}