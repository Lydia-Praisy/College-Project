#include<stdio.h>
#include<conio.h>
#include<math.h>
int CalculateSubjectGpa(int subjectCreditScore, int subjectGradePoint);
int main()
{
int sem,HS8151,MA8151,PH8151,CY8151,GE8151,GE8152,GE8161,BS8161,HS8251,MA8251,PH8252,BE8255,GE8291,CS8251,GE8261,CS8261,MA8351,CS8351,CS8391,CS8392,EC8395,CS8381,CS8383,CS8382,HS8381;
printf("\t\t\t\t\t\tCGPA calculator");
printf("\n\n\t\t\t\t\t\tGeneral Instruction");
printf("\n\n\n\n ! If grade is O - Press 1");
printf("\n\n ! If grade is A+ - Press 2");
printf("\n\n ! If grade is A - Press 3");
printf("\n\n ! If grade is B+ - Press 4");
printf("\n\n ! If grade is B - Press 5");
printf("\n..............................................................................................................................................");
printf("\n\nEnter the semester:");
scanf("%d",&sem);                                                               
if((sem < 1) || (sem > 8))
{
printf("Invalid semester ");
return 0;
}
switch(sem)
{
    case 1:
    printf("\n\n   Enter the grade for HS8151 : ");
    scanf("%d",&HS8151);
    HS8151 = CalculateSubjectGpa(4, HS8151);
    
    printf("\t\n   Enter the grade for MA8151 : ");
    scanf("%d",&MA8151);
    MA8151 = CalculateSubjectGpa(4, MA8151);
    
    printf("\t\n   Enter the grade for PH8151 : ");
    scanf("%d",&PH8151);
    PH8151 = CalculateSubjectGpa(3, PH8151);
    
    printf("\t\n   Enter the grade for CY8151 : ");
    scanf("%d",&CY8151);
    CY8151 = CalculateSubjectGpa(3, CY8151);
    
    printf("\t\n   Enter the grade for GE8151 : ");
    scanf("%d",&GE8151);
    GE8151 = CalculateSubjectGpa(3, GE8151);
    
    printf("\t\n   Enter the grade for GE8152 : ");
    scanf("%d",&GE8152);
    GE8152 = CalculateSubjectGpa(4, GE8152);
    
    printf("\t\n   Enter the grade for GE8161 : ");
    scanf("%d",&GE8161);
    GE8161 = CalculateSubjectGpa(2, GE8161);
    
    printf("\t\n   Enter the grade for BS8161 : ");
    scanf("%d",&BS8161);
    BS8161 = CalculateSubjectGpa(2, BS8161);
    
    int Gpa = HS8151+MA8151+PH8151+CY8151+GE8151+GE8152+GE8161+BS8161;
    int totalCredits =4+4+3+3+3+4+2+2;
    float cgpa = Gpa / totalCredits;
    printf("\n\n\n\n   Your CGPA is :%f ",cgpa);
    

    case 2:
    printf("\n\n   Enter the grade for HS8251 : ");
    scanf("%d",&HS8251);
    HS8251 = CalculateSubjectGpa(4, HS8251);
    
    printf("\t\n   Enter the grade for MA8251 : ");
    scanf("%d",&MA8251);
    MA8251 = CalculateSubjectGpa(4, MA8251);
    
    printf("\t\n   Enter the grade for PH8252 : ");
    scanf("%d",&PH8252);
    PH8252 = CalculateSubjectGpa(3, PH8252);
    
    printf("\t\n   Enter the grade for BE8255 : ");
    scanf("%d",&BE8255);
    BE8255 = CalculateSubjectGpa(3, BE8255);
    
    printf("\t\n   Enter the grade for GE8291 : ");
    scanf("%d",&GE8291);
    GE8291 = CalculateSubjectGpa(3, GE8291);
    
    printf("\t\n   Enter the grade for CS8251 : ");
    scanf("%d",&CS8251);
    CS8251 = CalculateSubjectGpa(2, CS8251);
    
    printf("\t\n   Enter the grade for GE8261 : ");
    scanf("%d",&GE8261);
    GE8261 = CalculateSubjectGpa(2, GE8261);
    
    printf("\t\n   Enter the grade for CS8261 : ");
    scanf("%d",&CS8261);
    CS8261 = CalculateSubjectGpa(2, CS8261);
    
    int Gpa1 = HS8251+MA8251+PH8252+BE8255+GE8291+CS8251+GE8261+CS8261;
    int totalCredits1 =4+4+3+3+3+3+2+2;
    float cgpa1 = Gpa1 / totalCredits1;
    printf("\n\n\n\n   Your CGPA is :%f ",cgpa1);
    
    case 3:
    printf("\n\n   Enter the grade for MA8351 : ");
    scanf("%d",&MA8351);
    MA8351 = CalculateSubjectGpa(4, MA8351);
    
    printf("\t\n   Enter the grade for CS8351 : ");
    scanf("%d",&CS8351);
    CS8351 = CalculateSubjectGpa(4, CS8351);
    
    printf("\t\n   Enter the grade for CS8391 : ");
    scanf("%d",&CS8391);
    CS8391 = CalculateSubjectGpa(3, CS8391);
    
    printf("\t\n   Enter the grade for CS8392 : ");
    scanf("%d",&CS8392);
    CS8392 = CalculateSubjectGpa(3, CS8392);
    
    printf("\t\n   Enter the grade for EC8395 : ");
    scanf("%d",&EC8395);
    EC8395 = CalculateSubjectGpa(3, EC8395);
    
    printf("\t\n   Enter the grade for CS8381 : ");
    scanf("%d",&CS8381);
    CS8381 = CalculateSubjectGpa(2, CS8381);
    
    printf("\t\n   Enter the grade for CS8383 : ");
    scanf("%d",&CS8383);
    CS8383 = CalculateSubjectGpa(2, CS8383);
    
    printf("\t\n   Enter the grade for CS8382 : ");
    scanf("%d",&CS8382);
    CS8382 = CalculateSubjectGpa(2,CS8382);
    
    printf("\t\n   Enter the grade for HS8381 : ");
    scanf("%d",&HS8381);
    HS8381 = CalculateSubjectGpa(1,HS8381);
    
    int Gpa2 = MA8351+CS8351+CS8391+CS8392+EC8395+CS8381+CS8383+CS8382+HS8381;
    int totalCredits2 =4+4+3+3+3+2+2+2+1;
    float cgpa2 = Gpa2 / totalCredits1;
    printf("\n\n\n\n   Your CGPA is :%f ",cgpa2);
}
}

int CalculateSubjectGpa(int subjectCreditScore, int subjectGradePoint)
{
    int actualGradePoint = (10 - (subjectGradePoint - 1));
    return subjectCreditScore * actualGradePoint;
}
