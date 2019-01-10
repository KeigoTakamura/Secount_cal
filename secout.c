#include<stdio.h>
#include<math.h>
#define max_cout 1000

double f(double x){
    return (x-2.0)*(x*x+1.0);
}


int main()
{

    const double eps = 0.0001;
    double x0=0.0,x1=5.0,x2=4.0;
     
     for(int i = 0; ; i++)
        {   
            x0=x1;
            x1=x2;
            x2=x1-f(x1)*((x1-x0)/(f(x1)-f(x0)));
            
            printf("cout%d suba ans=%lf \n",i,x2);

            if(fabs(x2-x1) < eps){
                printf("cal end! \n");
                break;
            }
            
            if (i > max_cout) {
                printf("max cal end\n");
                break;
            }
            
         
        }

    printf("ans=%lf\n",x2);

return 0;
}
