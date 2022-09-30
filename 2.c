#include <stdio.h>

double poww(double chislo, int stepen){ 

    if (stepen==0){
        return 1;
    }
    
    return chislo*poww(chislo, stepen-1);
}

double ab(double chislo){ 
    
    if (chislo < 0){
        chislo = chislo*(-1);
    }
 
    return chislo;
}
 
double f2(double x, int n){
    double x0 = 1, y=x*x, sum = x0;
    
    for(int i = 1; i <n; i++){
        x0 = ((x0*poww(-1, i)*y)/i);
        sum+=x0;
        x0 = ab(x0);
        
    }
    return sum;
}
 
int main(){
    double x;
    int n;
    
    printf("Введите степень  x:\n");
    scanf("%lf", &x);
    printf("Введите количество членов в ряде  n:\n");
    scanf("%d", &n);
    printf("%lf\n",f2(x, n));
    
    return 0;
}
