#include <stdio.h>
#include <limits.h>
#include <float.h>

void main()
{
    // char 출력
    puts("1.char 자료형"); // 자료형 이름
    printf("%zd B\n", sizeof(char)); //  자료형 바이트
    printf("표현 최소값 =0\n"); //원래 0이 최소 값 한글등의 표현을 위한 음수 허용(SCHAR_MIN)
    printf("표현 최소값 =%d\n", SCHAR_MIN);
    printf("표현 최소값 =%d\n", SCHAR_MAX); //원래 0이 최소 값 한글등의 표현을 위한
    char ch='f';
    printf("변수 선언 및 초기화 : %c\n\n", ch);
    
    puts("2.short 자료형");
    printf("%zd B\n", sizeof(short));
    printf("표현 최소값 =%d\n", SHRT_MIN);
    printf("표현 최소값 =%d\n", SHRT_MAX);
    short s=8;
    printf("변수 선언 및 초기화 : %d\n\n", s);
    
    puts("3.int 자료형");
    printf("%zd B\n", sizeof(int));
    printf("표현 최소값 =%d\n", INT_MIN);
    printf("표현 최소값 =%d\n", INT_MAX);
    int i=15;
    printf("변수 선언 및 초기화 : %d\n\n", i);
    
    puts("4.long  자료형");
    printf("%zd B\n", sizeof(long));
    printf("표현 최소값 =%ld\n", LONG_MIN);
    printf("표현 최소값 =%ld\n", LONG_MAX);
    long j=112233445566778899;
    printf("변수 선언 및 초기화 : %ld\n\n", j);

    puts("5.longlong  자료형");
    printf("%zd B\n", sizeof(long long));
    printf("표현 최소값 =%lld\n", LLONG_MIN);
    printf("표현 최소값 =%lld\n", LLONG_MAX);
    long long k=111222333444555666;
    printf("변수 선언 및 초기화 : %lld\n\n", k); 
    
    puts("6.float  자료형");
    printf("%zd B\n", sizeof(float));
    printf("표현 최소값 =%f\n", FLT_MIN);
    printf("표현 최소값 =%f\n", FLT_MAX);
    float f=3.14159f;
    printf("변수 선언 및 초기화 : %f\n\n", f);
    
    puts("7.double  자료형");
    printf("%zd B\n", sizeof(double));
    printf("표현 최소값 =%g\n", DBL_MIN);
    printf("표현 최소값 =%g\n", DBL_MAX);
    double x=3.14159;
    printf("변수 선언 및 초기화 : %g\n\n", x);
    
    puts("8.long double  자료형");
    printf("%zd B\n", sizeof(long double));
    printf("표현 최소값 =%Le\n", LDBL_MIN);
    printf("표현 최소값 =%Le\n", LDBL_MAX);
    long double y=3.1415926;
    printf("변수 선언 및 초기화 : %Le\n\n", y);    
}
