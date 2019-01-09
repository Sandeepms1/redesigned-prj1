#include<stdio.h>
struct a
{
 int a ;char b;float c;

};
struct aa
{
int a1;
int a2;
int a3;
int a4;
struct a var;
};

struct b
{
int a;
struct aa var1;
};
struct b element={
.a=10,
.var1.a1=10,
.var1.var.a=10
};


int main()
{
//element={{.a=10},{.a1=10,.var.a1=20}};
//element.a=10;
//element.var1.a1=10;
//element.var1.var.a=10;
printf("val1 %d\n",element.a);

}
