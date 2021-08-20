#include<stdio.h>
#include<conio.h>
int main()
{
int sem;
printf("\t\t\t\t\t\tCGPA calculator");
printf("\n\nEnter the semester:");
scanf("%d",&sem);
if((sem < 1) || (sem > 8))
{
printf("Invalid semester ");
return 0;
}
printf("\t\t\t\t\t\t General Instruction");
printf("\n\n\n If grade is O - Press 1");
printf("\n\n If grade is A+ - Press 2");
printf("\n\n If grade is A - Press 3");
printf("\n\n If grade is B+ - Press 4");
printf("\n\n If grade is B - Press 5");
}
