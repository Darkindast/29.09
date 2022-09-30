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
    
    double p = 1, sum = p, y =x*x;
    int i = 1;
    
    while (p>e){
        
        p = ((p*poww(-1, i)*y)/i);
        i+=1;
        sum+=p;
        p = ab(p);
    }
    
    return sum;
}
 
int main(){
    
    double x, e;
    
    scanf("%lf", &x);
    scanf("%lf", &e);
    printf("%le\n",f2(x, e));
    
    return 0;
}
