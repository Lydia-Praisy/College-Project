#include<stdio.h>
#include<conio.h>
#include<math.h>
int CalculateSubjectGpa(int subjectCreditScore, int subjectGradePoint);
int main()
{
int sem,HS8151,MA8151,PH8151,CY8151,GE8151,GE8152,GE8161,BS8161,HS8251,MA8251,PH8252,BE8255,GE8291,CS8251,GE8261,CS8261,MA8351,CS8351,CS8391,CS8392,EC8395,CS8381,CS8383,CS8382,HS8381,MA8402,CS8491,CS8492,CS8451,CS8493,CS8494,CS8481,CS8461,HS8461,MA8551,CS8591,EC8691,CS8501,CS8592,EC8681,CS8582,CS8581,OpenElectiveI,CS8651,CS8691,CS8601,CS8602,CS8603,ProfessionalElective1,CS8661,CS8662,CS8611,HS8581,MG8591,CS8792,CS8791,OpenElectiveII,ProfessionalElectiveII,ProfessionalElectiveIII,CS8711,IT8761,ProfessionalElectiveIV,ProfessionalElectiveV,ProjectWork;
printf("\t\t\t\t\t\tCGPA calculator - 2017 Regulation");
printf("\n\n\t\t\t\t\t\tComputer Science And Engineering");
printf("\n\n\t\t\t\t\t\t      General Instruction");
printf("\n\n\n\n ! If grade is O - Press 1");
printf("\n\n ! If grade is A+ - Press 2");
printf("\n\n ! If grade is A - Press 3");
printf("\n\n ! If grade is B+ - Press 4");
printf("\n\n ! If grade is B - Press 5");
printf("\n.....................................................................................................................");
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
    if(HS8151>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        HS8151 = CalculateSubjectGpa(4, HS8151);
    }
    
    printf("\t\n   Enter the grade for MA8151 : ");
    scanf("%d",&MA8151);
    if(MA8151>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        MA8151 = CalculateSubjectGpa(4, MA8151);
    }
    
    printf("\t\n   Enter the grade for PH8151 : ");
    scanf("%d",&PH8151);
    if(PH8151>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        PH8151 = CalculateSubjectGpa(3, PH8151);
    }
    
    printf("\t\n   Enter the grade for CY8151 : ");
    scanf("%d",&CY8151);
    if(CY8151>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CY8151 = CalculateSubjectGpa(3, CY8151);
    }
    
    printf("\t\n   Enter the grade for GE8151 : ");
    scanf("%d",&GE8151);
    if(GE8151>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        GE8151 = CalculateSubjectGpa(3, GE8151);
    }
    
    printf("\t\n   Enter the grade for GE8152 : ");
    scanf("%d",&GE8152);
    if(GE8152>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        GE8152 = CalculateSubjectGpa(4, GE8152);
    }
    
    printf("\t\n   Enter the grade for GE8161 : ");
    scanf("%d",&GE8161);
    if(GE8161>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        GE8161 = CalculateSubjectGpa(2, GE8161);
    }
    
    printf("\t\n   Enter the grade for BS8161 : ");
    scanf("%d",&BS8161);
    if(BS8161>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        BS8161 = CalculateSubjectGpa(2, BS8161);
    }
    
    int Gpa = HS8151+MA8151+PH8151+CY8151+GE8151+GE8152+GE8161+BS8161;
    int totalCredits =4+4+3+3+3+4+2+2;
    float cgpa = (float)Gpa / (float)totalCredits;
    printf("\n\n\n\n   Your CGPA is :%.2f ",cgpa);
    break;
    
    

    case 2:
    printf("\n\n   Enter the grade for HS8251 : ");
    scanf("%d",&HS8251);
    if(HS8251>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        HS8251 = CalculateSubjectGpa(4, HS8251);
    }
    
    printf("\t\n   Enter the grade for MA8251 : ");
    scanf("%d",&MA8251);
    if(MA8251>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        MA8251 = CalculateSubjectGpa(4, MA8251);
    }
    
    printf("\t\n   Enter the grade for PH8252 : ");
    scanf("%d",&PH8252);
    if(PH8252>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        PH8252 = CalculateSubjectGpa(3, PH8252);
    }
    
    printf("\t\n   Enter the grade for BE8255 : ");
    scanf("%d",&BE8255);
    if(BE8255>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        BE8255 = CalculateSubjectGpa(3, BE8255);
    }
    
    printf("\t\n   Enter the grade for GE8291 : ");
    scanf("%d",&GE8291);
    if(GE8291>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        GE8291 = CalculateSubjectGpa(3, GE8291);
    }
    
    printf("\t\n   Enter the grade for CS8251 : ");
    scanf("%d",&CS8251);
    if(CS8251>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CS8251 = CalculateSubjectGpa(2, CS8251);
    }

    printf("\t\n   Enter the grade for GE8261 : ");
    scanf("%d",&GE8261);
    if(GE8261>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        GE8261 = CalculateSubjectGpa(2, GE8261);
    }

    printf("\t\n   Enter the grade for CS8261 : ");
    scanf("%d",&CS8261);
    if(CS8261>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CS8261 = CalculateSubjectGpa(2, CS8261);
    }

    int Gpa1 = HS8251+MA8251+PH8252+BE8255+GE8291+CS8251+GE8261+CS8261;
    int totalCredits1 =4+4+3+3+3+3+2+2;
    float cgpa1 = (float)Gpa1 / (float)totalCredits1;
    printf("\n\n\n\n   Your CGPA is :%.2f ",cgpa1);
    break;
    
    case 3:
    printf("\n\n   Enter the grade for MA8351 : ");
    scanf("%d",&MA8351);
    if(MA8351>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        MA8351 = CalculateSubjectGpa(4, MA8351);
    }

    printf("\t\n   Enter the grade for CS8351 : ");
    scanf("%d",&CS8351);
    if(CS8351>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CS8351 = CalculateSubjectGpa(4, CS8351);
    }

    printf("\t\n   Enter the grade for CS8391 : ");
    scanf("%d",&CS8391);
    if(CS8391>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CS8391 = CalculateSubjectGpa(3, CS8391);
    }

    printf("\t\n   Enter the grade for CS8392 : ");
    scanf("%d",&CS8392);
    if(CS8392>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CS8392 = CalculateSubjectGpa(3, CS8392);
    }

    printf("\t\n   Enter the grade for EC8395 : ");
    scanf("%d",&EC8395);
    if(EC8395>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        EC8395 = CalculateSubjectGpa(3, EC8395);
    }

    printf("\t\n   Enter the grade for CS8381 : ");
    scanf("%d",&CS8381);
    if(CS8381>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CS8381 = CalculateSubjectGpa(2, CS8381);
    }

    printf("\t\n   Enter the grade for CS8383 : ");
    scanf("%d",&CS8383);
    if(CS8383>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CS8383 = CalculateSubjectGpa(2, CS8383);
    }

    printf("\t\n   Enter the grade for CS8382 : ");
    scanf("%d",&CS8382);
    if(CS8382>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CS8382 = CalculateSubjectGpa(2,CS8382);
    }

    printf("\t\n   Enter the grade for HS8381 : ");
    scanf("%d",&HS8381);
    if(HS8381>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        HS8381 = CalculateSubjectGpa(1,HS8381);
    }

    int Gpa2 = MA8351+CS8351+CS8391+CS8392+EC8395+CS8381+CS8383+CS8382+HS8381;
    int totalCredits2 =4+4+3+3+3+2+2+2+1;
    float cgpa2 = (float)Gpa2 / (float)totalCredits1;
    printf("\n\n\n\n   Your CGPA is :%.2f ",cgpa2);
    break;

    case 4:
    printf("\t\n   Enter the grade for MA8402 : ");
    scanf("%d",&MA8402);
    if(MA8402>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        MA8402 = CalculateSubjectGpa(4,MA8402);
    }

    printf("\t\n   Enter the grade for CS8491 : ");
    scanf("%d",&CS8491);
    if(CS8491>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CS8491 = CalculateSubjectGpa(3,CS8491);
    }

    printf("\t\n   Enter the grade for CS8492 : ");
    scanf("%d",&CS8492);
    if(CS8492>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CS8492 = CalculateSubjectGpa(3,CS8492);
    }

    printf("\t\n   Enter the grade for CS8451 : ");
    scanf("%d",&CS8451);
    if(CS8451>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CS8451 = CalculateSubjectGpa(3,CS8451);
    }

    printf("\t\n   Enter the grade for CS8493 : ");
    scanf("%d",&CS8493);
    if(CS8493>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CS8493 = CalculateSubjectGpa(3,CS8493);
    }

    printf("\t\n   Enter the grade for CS8494 : ");
    scanf("%d",&CS8494);
    if(CS8494>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CS8494 = CalculateSubjectGpa(3,CS8494);
    }

    printf("\t\n   Enter the grade for CS8481 : ");
    scanf("%d",&CS8481);
    if(CS8481>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CS8481 = CalculateSubjectGpa(2,CS8481);
    }

    printf("\t\n   Enter the grade for CS8461 : ");
    scanf("%d",&CS8461);
    if(CS8461>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CS8461 = CalculateSubjectGpa(2,CS8461);
    }

    printf("\t\n   Enter the grade for HS8461 : ");
    scanf("%d",&HS8461);
    if(HS8461>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        HS8461 = CalculateSubjectGpa(1,HS8461);
    }

    int Gpa3 = MA8402+CS8491+CS8492+CS8451+CS8493+CS8494+CS8481+CS8461+HS8461;
    int totalCredits3 =4+3+3+3+3+3+2+2+1;
    float cgpa3 = (float)Gpa3 / (float)totalCredits3;
    printf("\n\n\n\n   Your CGPA is :%.2f ",cgpa3);
    break;

    case 5:
    printf("\t\n   Enter the grade for MA8551 : ");
    scanf("%d",&MA8551);
    if(MA8551>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        MA8551 = CalculateSubjectGpa(4,MA8551);
    }

    printf("\t\n   Enter the grade for CS8591 : ");
    scanf("%d",&CS8591);
    if(CS8591>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CS8591 = CalculateSubjectGpa(3,CS8591);
    }

    printf("\t\n   Enter the grade for EC8691 : ");
    scanf("%d",&EC8691);
    if(EC8691>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        EC8691 = CalculateSubjectGpa(3,EC8691);
    }

    printf("\t\n   Enter the grade for CS8501 : ");
    scanf("%d",&CS8501);
    if(CS8501>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CS8501 = CalculateSubjectGpa(3,CS8501);
    }

    printf("\t\n   Enter the grade for CS8592 : ");
    scanf("%d",&CS8592);
    if(CS8592>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CS8592 = CalculateSubjectGpa(3,CS8592);
    }

    printf("\t\n   Enter the grade for EC8681 : ");
    scanf("%d",&EC8681);
    if(EC8681>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        EC8681 = CalculateSubjectGpa(2,EC8681);
    }

    printf("\t\n   Enter the grade for CS8592 : ");
    scanf("%d",&CS8582);
    if(CS8582>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CS8582 = CalculateSubjectGpa(2,CS8582);
    }

    printf("\t\n   Enter the grade for CS8581 : ");
    scanf("%d",&CS8581);
    if(CS8581>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CS8581 = CalculateSubjectGpa(2,CS8581);
    }

    printf("\t\n   Enter the grade for Open Elective I : ");
    scanf("%d",&OpenElectiveI);
    if(OpenElectiveI>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        OpenElectiveI = CalculateSubjectGpa(3,OpenElectiveI);
    }

    int Gpa4 = MA8551+CS8591+EC8691+CS8501+CS8592+EC8681+CS8582+CS8581+OpenElectiveI;
    int totalCredits4 =4+3+3+3+3+2+2+2+3;
    float cgpa4 = (float)Gpa4 / (float)totalCredits4;
    printf("\n\n\n\n   Your CGPA is :%.2f ",cgpa4);
    break;
    

    case 6:
    printf("\t\n   Enter the grade for CS8651 : ");
    scanf("%d",&CS8651);
    if(CS8651>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CS8651 = CalculateSubjectGpa(3,CS8651);
    }

    printf("\t\n   Enter the grade for CS8691 : ");
    scanf("%d",&CS8691);
    if(CS8691>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CS8691 = CalculateSubjectGpa(3,CS8691);
    }

    printf("\t\n   Enter the grade for CS8601 : ");
    scanf("%d",&CS8601);
    if(CS8601>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CS8601 = CalculateSubjectGpa(3,CS8601);
    }

    printf("\t\n   Enter the grade for CS8602 : ");
    scanf("%d",&CS8602);
    if(CS8602>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CS8602 = CalculateSubjectGpa(4,CS8602);
    }

    printf("\t\n   Enter the grade for CS8603 : ");
    scanf("%d",&CS8603);
    if(CS8603>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CS8603 = CalculateSubjectGpa(3,CS8603);
    }

    printf("\t\n   Enter the grade for Professional Elective 1 : ");
    scanf("%d",&ProfessionalElective1);
    if(ProfessionalElective1>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        ProfessionalElective1 = CalculateSubjectGpa(3,ProfessionalElective1);
    }

    printf("\t\n   Enter the grade for CS8661 : ");
    scanf("%d",&CS8661);
    if(CS8661>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CS8661 = CalculateSubjectGpa(2,CS8661);
    }

    printf("\t\n   Enter the grade for CS8662 : ");
    scanf("%d",&CS8662);
    if(CS8662>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CS8662 = CalculateSubjectGpa(2,CS8662);
    }

    printf("\t\n   Enter the grade for CS8611 : ");
    scanf("%d",&CS8611);
    if(CS8611>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CS8611 = CalculateSubjectGpa(1,CS8611);
    }

    printf("\t\n   Enter the grade for HS8581 : ");
    scanf("%d",&HS8581);
    if(HS8581>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        HS8581 = CalculateSubjectGpa(1,HS8581);
    }

    int Gpa5 = CS8651+CS8691+CS8601+CS8602+CS8603+ProfessionalElective1+CS8661+CS8662+CS8611+HS8581;
    int totalCredits5 =3+3+3+4+3+3+2+2+1+1;
    float cgpa5 = (float)Gpa5 / (float)totalCredits5;
    printf("\n\n\n\n   Your CGPA is :%.2f ",cgpa5);
    break;

    case 7:
    printf("\t\n   Enter the grade for MG8591 : ");
    scanf("%d",&MG8591);
    if(MG8591>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        MG8591 = CalculateSubjectGpa(3,MG8591);
    }

    printf("\t\n   Enter the grade for CS8792 : ");
    scanf("%d",&CS8792);
    if(CS8792>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CS8792 = CalculateSubjectGpa(3,CS8691);
    }

    printf("\t\n   Enter the grade for CS8791 : ");
    scanf("%d",&CS8791);
    if(CS8791>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CS8791 = CalculateSubjectGpa(3,CS8791);
    }

    printf("\t\n   Enter the grade for Open Elective II : ");
    scanf("%d",&OpenElectiveII);
    if(OpenElectiveII>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        OpenElectiveII = CalculateSubjectGpa(3,OpenElectiveII);
    }

    printf("\t\n   Enter the grade for Professional Elective II : ");
    scanf("%d",&ProfessionalElectiveII);
    if(ProfessionalElectiveII>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        ProfessionalElectiveII = CalculateSubjectGpa(3,ProfessionalElectiveII);
    }

    printf("\t\n   Enter the grade for Professional Elective III: ");
    scanf("%d",&ProfessionalElectiveIII);
    if(ProfessionalElectiveIII>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        ProfessionalElectiveIII = CalculateSubjectGpa(3,ProfessionalElectiveIII);
    }

    printf("\t\n   Enter the grade for CS8711 : ");
    scanf("%d",&CS8711);
    if(CS8711>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        CS8711 = CalculateSubjectGpa(2,CS8711);
    }

    printf("\t\n   Enter the grade for IT8761 : ");
    scanf("%d",&IT8761);
    if(IT8761>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        IT8761 = CalculateSubjectGpa(2,IT8761);
    }
    
    int Gpa6 = MG8591+CS8792+CS8691+OpenElectiveII+ProfessionalElectiveII+ProfessionalElectiveIII+CS8711+IT8761;
    int totalCredits6 =3+3+3+3+3+3+2+2;
    float cgpa6 = (float)Gpa6 / (float)totalCredits6;
    printf("\n\n\n\n   Your CGPA is :%.2f ",cgpa6);
    break;
    
    case 8:
    printf("\t\n   Enter the grade for Professional Elective IV : ");
    scanf("%d",&ProfessionalElectiveIV);
    if(ProfessionalElectiveIV>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        ProfessionalElectiveIV = CalculateSubjectGpa(3,ProfessionalElectiveIV);
    }

    printf("\t\n   Enter the grade for Professional Elective V : ");
    scanf("%d",&ProfessionalElectiveV);
    if(ProfessionalElectiveV>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        ProfessionalElectiveV = CalculateSubjectGpa(3,ProfessionalElectiveV);
    }

    printf("\t\n   Enter the grade for Project Work : ");
    scanf("%d",&ProjectWork);
    if(ProjectWork>5)
    {
        printf("\n\n   Wrong input, Try again");
        break;
    }
    else
    {
        ProjectWork = CalculateSubjectGpa(10,ProjectWork);
    }
    
    int Gpa7 = ProfessionalElectiveIV+ProfessionalElectiveV+ProjectWork;
    int totalCredits7 =3+3+10;
    float cgpa7 = (float)Gpa7 / (float)totalCredits7;
    printf("\n\n\n\n   Your CGPA is :%.2f ",cgpa7);
    break;
}
}

int CalculateSubjectGpa(int subjectCreditScore, int subjectGradePoint)
{
    int actualGradePoint = (10 - (subjectGradePoint - 1));
    return subjectCreditScore * actualGradePoint;
}
