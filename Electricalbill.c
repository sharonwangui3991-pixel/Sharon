/*
Name:Cecilia muthoni iregi 
REG: ct100/g /26194/25
*/
# include <stdio.h>//printf and scanf

 void electricBills(int  units,float bill)
{

if (units <=100)
     bill=units*10;
  else if ( units <=200)
     bill= 100*10+( units-100)*15;
   else{
       bill= (100*10 )+ ( units- 100)*15 + (( units - 200) * 20 );}
       printf("Total bill = Ksh.%2f\n",bill);

}
 int main()
 {
    int units;
    float bill;
    printf("enter units consumed");
    scanf("%d",&units);
    electricBills(units,bill);
    
     
    return 0;
 }