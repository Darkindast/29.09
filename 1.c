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
 
double f2(double x, double e){
    double x0 = 1;
    double sum = x0;
    int i = 1;
    double y = x*x;
 while (ab(x0)>e){
 
    x0 = ((x0*poww(-1, i)*y)/i);
    i+=1;
    sum+=x0;
    }
    return sum;
}
 
int main(){
    double x, e;
    scanf("%lf", &e);
    scanf("%lf", &x);
    printf("%lf\n",f2(x, e));
    return 0;
}
