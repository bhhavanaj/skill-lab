#include <stdio.h>
#include <math.h>
int main() {
    int a,b,c;
    float root1,root2,realp,imagp,disc;
    printf("enter the value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if(a==0||b==0||c==0){
        printf("roots cant't be found");
        return 0;
    }
    disc=b*(-4*a*b);
    if(disc==0){
        printf("roots are equal\n");
        root1=root2=-b/(a*2);
        printf("%f=root1=root2",root1);
    }
    else if(disc>0){
        printf("roots are real and distict");
        root1=(-b+sqrt(disc))/(2*a);
        root2=(-b-sqrt(disc))/(2*a);
        printf("%f=root1\n %f=root2",root1,root2);
    }
    else if(disc<0){
        printf("roots are imaginary");
        realp=-b/(2*a);
        imagp=sqrt(fabs(disc))/(2*a);
        printf("root1=%f+i%f\n root2=%f+i%f",realp,imagp,realp,imagp);
    }
}

