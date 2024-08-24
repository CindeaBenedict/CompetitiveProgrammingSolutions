int bitcmp(int a, int b)  

{
   int c=a-b;
   switch(c)
   {
       case 0:
          return 0;
           break;
       default:
           int d=c&(1<<31);
           switch(d) {
               case 0:
                 return 1;
                   break;
               default:
                   return -1;

           }

   }

}