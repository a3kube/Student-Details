#include<stdio.h> 
void main()
{
struct student 
{ 
char name[20]; 
int age; 
char prn[30];
};
struct student s[10]; 
int i,n; 
printf("Enter number of students in class :"); 
scanf("%d",&n); 
for(i=0;i<n;i++) 
{
printf(" Enter name, age and prn of the student %ci\t",i+1 ); 
scanf("%s%d%s",s[i].name,&s[i].age,s[i].prn); 
} 
printf("\tNAME\tAGE\tPRN\n"); 
for(i=0;i<n;i++) 
{
printf("\t%s\t%d\t%s\n",s[i].name,s[1].age,s[i].prn); 
}
}
