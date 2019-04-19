#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{				
	printf("             ****Welcome to the program of the Page-fault:**** \n");

}
	printf(" Name : Farhad Rashid Reshi \n Reg-No:11716391 Section: k17EX \n Rollno :B67 \n Project-Name: Maximum page-fault Rate \n ");
		
    float m,n,x,y,z,p;
    printf("Enter the value of Page fault service time (not modified) : ");
    scanf("%f",&n);
    printf("Enter  page fault service time (modified) : ");
    scanf("%f",&m);
    printf("Enter the memory access time :  ");
    scanf("%f",&x);
    printf("Enter the effective time access : ");
    scanf("%f",&y);
    printf("Enter  the page replace modified percentage : ");
    scanf("%f",&z);
    p=(y-x)/(((z*m)+(1-z)*n)+x);
    printf(" the mamximum acceptable page fault rate is  %f",p);
}
