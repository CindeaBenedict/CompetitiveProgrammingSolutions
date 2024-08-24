int suma(int a, int b) {

int s=0;
int i;
for(i=1;i<=a;i++){
if(a%i==0 && b%i==0){
s=s+i;
}}
return s;}