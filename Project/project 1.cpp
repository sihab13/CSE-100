#include <stdio.h>
#include<conio.h>
#include <stdlib.h>

Rangpur()
{
    system("CLS");
    FILE *rangpur;
    char x[100];
    rangpur=fopen("rangpur.txt","r");
    while(fgets(x,sizeof(x),rangpur))
    {
        printf("%s \n",x);
    }
    fclose(rangpur);
    printf("..................................................\n");
    printf("  0. Back              9.Exit\n\n");
     int ch;
    scanf("%d",&ch);
    switch(ch)
    {
    case 0:
        return 0;
        break;
    case 9:
        exit(0);
        break;
    default:
        printf("Wrong Input");
    }
};
Khulna()
{
    system("CLS");
    FILE *khulna;
    char x[100];
    khulna=fopen("khulna.txt","r");
    while(fgets(x,sizeof(x),khulna))
    {
        printf("%s \n",x);
    }
    fclose(khulna);
    printf("..................................................\n");
    printf("  0. Back              9.Exit\n\n");
     int ch;
    scanf("%d",&ch);
    switch(ch)
    {
    case 0:
        return 0;
        break;
    case 9:
        exit(0);
        break;
    default:
        printf("Wrong Input");
    }
};
Sylhet()
{
    system("CLS");
    FILE *sylhet;
    char x[100];
    sylhet=fopen("sylhet.txt","r");
    while(fgets(x,sizeof(x),sylhet))
    {
        printf("%s \n",x);
    }
    fclose(sylhet);
    printf("..................................................\n");
    printf("  0. Back              9.Exit\n\n");
     int ch;
    scanf("%d",&ch);
    switch(ch)
    {
    case 0:
        return 0;
        break;
    case 9:
        exit(0);
        break;
    default:
        printf("Wrong Input");
    }
};
Chittagong()
{
    system("CLS");
    FILE *chittagong;
    char x[100];
    chittagong=fopen("chittagong.txt","r");
    while(fgets(x,sizeof(x),chittagong))
    {
        printf("%s \n",x);
    }
    fclose(chittagong);
   printf("..................................................\n");
    printf("  0. Back              9.Exit\n\n");
     int ch;
    scanf("%d",&ch);
    switch(ch)
    {
    case 0:
        return 0;
        break;
    case 9:
        exit(0);
        break;
    default:
        printf("Wrong Input");
    }
};
Barisal()
{
    system("CLS");
    FILE *barisal;
    char x[100];
    barisal=fopen("barisal.txt","r");
    while(fgets(x,sizeof(x),barisal))
    {
        printf("%s \n",x);
    }
    fclose(barisal);
    printf("..................................................\n");
    printf("  0. Back              9.Exit\n\n");
     int ch;
    scanf("%d",&ch);
    switch(ch)
    {
    case 0:
        return 0;
        break;
    case 9:
        exit(0);
        break;
    default:
        printf("Wrong Input");
    }
};
Rajshahi()
{
    system("CLS");
    FILE *rajshahi;
    char x[100];
    rajshahi=fopen("rajshahi.txt","r");
    while(fgets(x,sizeof(x),rajshahi))
    {
        printf("%s \n",x);
    }
    fclose(rajshahi);
    printf("..................................................\n");
    printf("  0. Back              9.Exit\n\n");
     int ch;
    scanf("%d",&ch);
    switch(ch)
    {
    case 0:
        return 0;
        break;
    case 9:
        exit(0);
        break;
    default:
        printf("Wrong Input");
    }

};
Mymensingh()
{
    system("CLS");
    FILE *mymensingh;
    char x[100];
    mymensingh=fopen("mymensingh.txt","r");
    while(fgets(x,sizeof(x),mymensingh))
    {
        printf("%s \n",x);
    }
    fclose(mymensingh);
    printf("..................................................\n");
    printf("  0. Back              9.Exit\n\n");
     int ch;
    scanf("%d",&ch);
    switch(ch)
    {
    case 0:
        return 0;
        break;
    case 9:
        exit(0);
        break;
    default:
        printf("Wrong Input");
    }

};
Dhaka()
{
    system("CLS");
    FILE *dhaka;
    char x[100];
    dhaka=fopen("dhaka.txt","r");
    while(fgets(x,sizeof(x),dhaka))
    {
        printf("%s \n",x);
    }
    fclose(dhaka);
    printf("..................................................\n");
    printf("  0. Back              9.Exit\n\n");
     int ch;
    scanf("%d",&ch);
    switch(ch)
    {
    case 0:
        return 0;
        break;
    case 9:
        exit(0);
        break;
    default:
        printf("Wrong Input");
    }

};
Add_Rangpur()
{
    system("cls");
    printf("              Welcome  To  Aidfast \n");
    printf("  :::::::::::::::::::::::::::::::::::::::::::\n");
    FILE *rangpur;
    int a,x;
    char name[20];
    char address[100];
    char phone[20];
    rangpur=fopen("rangpur.txt","a");
    if(rangpur==NULL)
    {
        printf("File does not exists \n");
    }
    printf("  How many doctors information do you want to add : ");
    scanf("%d",&a);
    for(int i=0; i<a; i++)
    {

        printf("\n  Enter the Doctor's Name:");
        scanf("%s",&name);
        fprintf(rangpur,"\n  Doctor's Name: %s \n",name);
        printf("\n  Address & Others Information.............\n  How many lines are needed for add this info: ");
        scanf("%d",&x);
        printf("  Enter Address & Others Information:\n");
        for(int i=0; i<x; i++)
        {
            scanf("%s",&address);
            fprintf(rangpur,"  %s \n",address);
        }
        printf("  Enter Contact information(Email & Phone):\n");
        scanf("%s",&phone);
        fprintf(rangpur,"  %s \n",phone);
    }
    fclose(rangpur);
};
Add_Khulna()
{
    system("cls");
    printf("              Welcome  To  Aidfast \n");
    printf("  :::::::::::::::::::::::::::::::::::::::::::\n");
    FILE *khulna;
    int a,x;
    char name[20];
    char address[100];
    char phone[20];
    khulna=fopen("khulna.txt","a");
    if(khulna==NULL)
    {
        printf("File does not exists \n");
    }
    printf("  How many doctors information do you want to add : ");
    scanf("%d",&a);
    for(int i=0; i<a; i++)
    {

        printf("\n  Enter the Doctor's Name:");
        scanf("%s",&name);
        fprintf(khulna,"\n  Doctor's Name: %s \n",name);
        printf("\n  Address & Others Information..............\n  How many lines are needed for add this info: ");
        scanf("%d",&x);
        printf("  Enter Address & Others Information:\n");
        for(int i=0; i<x; i++)
        {
            scanf("%s",&address);
            fprintf(khulna,"  %s \n",address);
        }
        printf("  Enter Contact information(Email & Phone):\n");
        scanf("%s",&phone);
        fprintf(khulna,"Phone: %s \n",phone);
    }
    fclose(khulna);

};
Add_Sylhet()
{
    system("cls");
    printf("              Welcome  To  Aidfast \n");
    printf("  :::::::::::::::::::::::::::::::::::::::::::\n");
    FILE *sylhet;
    int a,x;
    char name[20];
    char address[100];
    char phone[20];
    sylhet=fopen("sylhet.txt","a");
    if(sylhet==NULL)
    {
        printf("File does not exists \n");
    }
    printf("  How many doctors information do you want to add : ");
    scanf("%d",&a);
    for(int i=0; i<a; i++)
    {

        printf("\n  Enter the Doctor's Name:");
        scanf("%s",&name);
        fprintf(sylhet,"\n  Doctor's Name: %s \n",name);
        printf("\n  Address & Others Information:\n How many lines are needed for add this info: ");
        scanf("%d",&x);
        printf("  Enter Address & Others Information:\n");
        for(int i=0; i<x; i++)
        {
            scanf("%s",&address);
            fprintf(sylhet,"  %s \n",address);
        }
        printf("  Enter Contact information(Email & Phone):\n");
        scanf("%s",&phone);
        fprintf(sylhet,"  %s \n",phone);
    }
    fclose(sylhet);
};
Add_Chittagong()
{
    system("cls");
    printf("              Welcome  To  Aidfast \n");
    printf("  :::::::::::::::::::::::::::::::::::::::::::\n");
    FILE *chittagong;
    int a,x;
    char name[20];
    char address[100];
    char phone[20];
    chittagong=fopen("chittagong.txt","a");
    if(chittagong==NULL)
    {
        printf("File does not exists \n");
    }
    printf("  How many doctors information do you want to add : ");
    scanf("%d",&a);
    for(int i=0; i<a; i++)
    {

        printf("\n  Enter the Doctor's Name:");
        scanf("%s",&name);
        fprintf(chittagong,"\nDoctor's Name: %s \n",name);
        printf("\n  Address & Others Information...........\n  How many lines are needed for add this info: ");
        scanf("%d",&x);
        printf("  Enter Address & Others Information:\n");
        for(int i=0; i<x; i++)
        {
            scanf("%s",&address);
            fprintf(chittagong,"%s \n",address);
        }
        printf("  Enter Contact information(Email & Phone):\n");
        scanf("%s",&phone);
        fprintf(chittagong,"  %s \n",phone);
    }
    fclose(chittagong);

};
Add_Barisal()
{
    system("cls");
    printf("              Welcome  To  Aidfast \n");
    printf("  :::::::::::::::::::::::::::::::::::::::::::\n");
    FILE *barisal;
    int a,x;
    char name[20];
    char address[100];
    char phone[20];
    barisal=fopen("barisal.txt","a");
    if(barisal==NULL)
    {
        printf("File does not exists \n");
    }
    printf("  How many doctors information do you want to add : ");
    scanf("%d",&a);
    for(int i=0; i<a; i++)
    {

        printf("\n  Enter the Doctor's Name:");
        scanf("%s",&name);
        fprintf(barisal,"\n  Doctor's Name: %s \n",name);
        printf("\n  Address & Others Information..................\n  How many lines are needed for add this info: ");
        scanf("%d",&x);
        printf("  Enter Address & Others Information:\n");
        for(int i=0; i<x; i++)
        {
            scanf("%s",&address);
            fprintf(barisal,"%s \n",address);
        }
        printf("  Enter Contact information(Email & Phone):\n");
        scanf("%s",&phone);
        fprintf(barisal,"  %s \n",phone);
    }
    fclose(barisal);

};
Add_Rajshahi()
{
    system("cls");
    printf("              Welcome  To  Aidfast \n");
    printf("  :::::::::::::::::::::::::::::::::::::::::::\n");
    FILE *rajshahi;
    int a,x;
    char name[20];
    char address[100];
    char phone[20];
    rajshahi=fopen("rajshahi.txt","a");
    if(rajshahi==NULL)
    {
        printf("File does not exists \n");
    }
    printf("  How many doctors information do you want to add : ");
    scanf("%d",&a);
    for(int i=0; i<a; i++)
    {

        printf("\n  Enter the Doctor's Name:");
        scanf("%s",&name);
        fprintf(rajshahi,"\nDoctor's Name: %s \n",name);
        printf("\n  Address & Others Information..............\n  How many lines are needed for add this info: ");
        scanf("%d",&x);
        printf("  Enter Address & Others Information:\n");
        for(int i=0; i<x; i++)
        {
            scanf("%s",&address);
            fprintf(rajshahi,"  %s \n",address);
        }
        printf("  Enter Contact information(Email & Phone):\n");
        scanf("%s",&phone);
        fprintf(rajshahi,"  %s \n",phone);
    }
    fclose(rajshahi);

};
Add_Mymensingh()
{
    system("cls");
    printf("              Welcome  To  Aidfast \n");
    printf("  :::::::::::::::::::::::::::::::::::::::::::\n");
    FILE *mymensingh;
    int a,x;
    char name[20];
    char address[100];
    char phone[20];
    mymensingh=fopen("mymensingh.txt","a");
    if(mymensingh==NULL)
    {
        printf("File does not exists \n");
    }
    printf("  How many doctors information do you want to add : ");
    scanf("%d",&a);
    for(int i=0; i<a; i++)
    {

        printf("\n  Enter the Doctor's Name:");
        scanf("%s",&name);
        fprintf(mymensingh,"\nDoctor's Name: %s \n",name);
        printf("\n  Address & Others Information...............\n  How many lines are needed for add this info: ");
        scanf("%d",&x);
        printf("  Enter Address & Others Information:\n");
        for(int i=0; i<x; i++)
        {
            scanf("%s",&address);
            fprintf(mymensingh,"%s \n",address);
        }
        printf("  Enter Contact information(Email & Phone):\n");
        scanf("%s",&phone);
        fprintf(mymensingh,"%s \n",phone);
    }
    fclose(mymensingh);
};
Add_Dhaka()
{


    system("cls");
    printf("              Welcome  To  Aidfast \n");
    printf("  :::::::::::::::::::::::::::::::::::::::::::\n");
    FILE *dhaka;
    int a,x;
    char phone[20];
    char name[20];
    char address[100];
    dhaka=fopen("dhaka.txt","a");
    if(dhaka==NULL)
    {
        printf("File does not exists \n");
    }
    printf("  How many doctors information do you want to add : ");
    scanf("%d",&a);
    for(int i=0; i<a; i++)
    {

        printf("\n  Enter the Doctor's Name:");
        scanf("%s",&name);
        fprintf(dhaka,"\n  Doctor's Name: %s \n",name);
        printf("\n  Address & Others Information...........\n  How many lines are needed for add this info: ");
        scanf("%d",&x);
        printf("  Enter Address & Others Information:\n");
        for(int i=0; i<x; i++)
        {
            scanf("%s",& address);
            fprintf(dhaka,"  %s \n",address);
        }
        printf("  Enter Contact information(Email & Phone):\n");
        scanf("%s",& phone);
        fprintf(dhaka,"  %s \n",phone);
    }
    fclose(dhaka);



};
Add_About_us()
{

    system("cls");
    FILE *about_us;
    int x;
    char about[100];
    about_us=fopen("about_us.txt","a");
    if(about_us==NULL)
    {
        printf("File does not exists \n");
    }
    printf("  About Us.................\n  How many lines are needed for add this info: ");
    scanf("%d",&x);
    printf("  Enter info of About us:\n");
    for(int i=0; i<x; i++)
    {
        scanf("%s",&about);
        fprintf(about_us,"%s \n",about);
    }
    fclose(about_us);

};
Add_Important_prescriptions()
{
    system("cls");
    FILE *important_prescriptions;
    int x;
    char prescriptions[100];
    important_prescriptions=fopen("important_prescriptions.txt","a");
    if(important_prescriptions==NULL)
    {
        printf("File does not exists \n");
    }
    printf("  Important Prescriptions..........\n  How many lines are needed for add this info: ");
    scanf("%d",&x);
    printf("  Enter info of Important Prescriptions:\n");
    for(int i=0; i<x; i++)
    {
        scanf("%s",&prescriptions);
        fprintf(important_prescriptions,"  %s \n",prescriptions);
    }
    fclose(important_prescriptions);


};
Add_Abroad_treatment()
{
    system("cls");
    FILE *abroad_treatment;
    int x;
    char abroad[100];
    abroad_treatment=fopen("abroad_treatment.txt","a");
    if(abroad_treatment==NULL)
    {
        printf("File does not exists \n");
    }
    printf("  Abroad Treatment...........\n  How many lines are needed for add this info: ");
    scanf("%d",&x);
    printf("  Enter info of Abroad Treatment:\n");
    for(int i=0; i<x; i++)
    {
        scanf("%s",&abroad);
        fprintf(abroad_treatment,"  %s \n",abroad);
    }
    fclose(abroad_treatment);

};
Add_Special_Doctors_in_service()
{
    system("cls");
    FILE *special_Doctors_in_service;
    int x;
    char abroad[100];
    special_Doctors_in_service=fopen("special_Doctors_in_service.txt","a");
    if(special_Doctors_in_service==NULL)
    {
        printf("File does not exists \n");
    }
    printf("\n special Doctors in service \n How many lines are needed for add this info: ");
    scanf("%d",&x);
    printf(" Enter info of special Doctors :\n");
    for(int i=0; i<x; i++)
    {
        scanf("%s",&abroad);
        fprintf(special_Doctors_in_service,"%s \n",abroad);
    }
    fclose(special_Doctors_in_service);

};

Add_Hospital_or_Ambulance()
{
    system("cls");
    FILE *hospital_or_Ambulance;
    int x;
    char ambulance[100];
    hospital_or_Ambulance=fopen("hospital_or_Ambulance.txt","a");
    if(hospital_or_Ambulance==NULL)
    {
        printf("File does not exists \n");
    }
    printf("  Hospital or Ambulance............ \n  How many lines are needed for add this info: ");
    scanf("%d",&x);
    printf("  Enter info of Hospital or Ambulance :\n");
    for(int i=0; i<x; i++)
    {
        scanf("%s",&ambulance);
        fprintf(hospital_or_Ambulance,"  %s \n",ambulance);
    }
    fclose(hospital_or_Ambulance);

};
Add_Info()
{
    system("CLS");
    printf("              Welcome  To  Aidfast \n");
    printf("  :::::::::::::::::::::::::::::::::::::::::::\n");
    printf("  1.Dhaka Division\n");
    printf("  2.Mymensingh Division \n");
    printf("  3.Rajshahi Division \n");
    printf("  4.Barisal Division \n");
    printf("  5.Chittagong Division \n");
    printf("  6.Sylhet Division \n");
    printf("  7.Khulna Division \n");
    printf("  8.Rangpur Division \n");
    printf(".......................................\n");
    printf("  0. Back              9.Exit\n\n");
    int ch;
    printf("\n  Enter Your Choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        Add_Dhaka();
        break;
    case 2:
        Add_Mymensingh();
        break;
    case 3:
        Add_Rajshahi();
        break;
    case 4:
        Add_Barisal();
        break;
    case 5:
        Add_Chittagong();
        break;
    case 6:
        Add_Sylhet();
        break;
    case 7:
        Add_Khulna();
        break;
    case 8:
        Add_Rangpur();
        break;
    case 0:
        return 0;
        break;
    case 9:
        exit(0);
        break;


    default:
        printf("Wrong Input");
    }

};
About_us()
{
    system("CLS");
    printf("              Welcome  To  Aidfast \n");
    printf("  :::::::::::::::::::::::::::::::::::::::::::\n");
    FILE *about_us;
    char x[100];
    about_us=fopen("about_us.txt","r");
    while(fgets(x,sizeof(x),about_us))
    {
        printf("%s \n",x);
    }
    fclose(about_us);
    printf("..................................................\n");
    printf("  0. Back              9.Exit\n\n");
     int ch;
    scanf("%d",&ch);
    switch(ch)
    {
    case 0:
        return 0;
        break;
    case 9:
        exit(0);
    default:
        printf("Wrong Input");
    }

};
Important_prescriptions()
{
    system("CLS");
    printf("              Welcome  To  Aidfast \n");
    printf("  :::::::::::::::::::::::::::::::::::::::::::\n");
    FILE *important_prescriptions;
    char x[100];
    important_prescriptions=fopen("important_prescriptions.txt","r");
    while(fgets(x,sizeof(x),important_prescriptions))
    {
        printf("%s \n",x);
    }
    fclose(important_prescriptions);
    printf("..................................................\n");
    printf("  0. Back              9.Exit\n\n");
     int ch;
    scanf("%d",&ch);
    switch(ch)
    {
    case 0:
        return 0;
        break;
    case 9:
        exit(0);
    default:
        printf("Wrong Input");
    }

};
Abroad_treatment()
{
    system("CLS");
    printf("              Welcome  To  Aidfast \n");
    printf("  :::::::::::::::::::::::::::::::::::::::::::\n");
    FILE *abroad_treatment;
    char x[100];
    abroad_treatment=fopen("abroad_treatment.txt","r");
    while(fgets(x,sizeof(x),abroad_treatment))
    {
        printf("%s \n",x);
    }
    fclose(abroad_treatment);
    printf("..................................................\n");
    printf("  0. Back              9.Exit\n\n");
     int ch;
    scanf("%d",&ch);
    switch(ch)
    {
    case 0:
        return 0;
        break;
    case 9:
        exit(0);
    default:
        printf("Wrong Input");
    }

};
Special_Doctors_in_service()
{
    system("CLS");
    printf("              Welcome  To  Aidfast \n");
    printf("  :::::::::::::::::::::::::::::::::::::::::::\n");
    FILE *special_Doctors_in_service;
    char x[100];
    special_Doctors_in_service=fopen("special_Doctors_in_service.txt","r");
    while(fgets(x,sizeof(x),special_Doctors_in_service))
    {
        printf("%s \n",x);
    }
    fclose(special_Doctors_in_service);
    printf("..................................................\n");
    printf("  0. Back              9.Exit\n\n");
     int ch;
    scanf("%d",&ch);
    switch(ch)
    {
    case 0:
        return 0;
        break;
    case 9:
        exit(0);
    default:
        printf("Wrong Input");
    }

};
Hospital_or_Ambulance()
{
    system("CLS");
    printf("              Welcome  To  Aidfast \n");
    printf("  :::::::::::::::::::::::::::::::::::::::::::\n");
    FILE *hospital_or_Ambulance;
    char x[100];
    hospital_or_Ambulance=fopen("hospital_or_Ambulance.txt","r");
    while(fgets(x,sizeof(x),hospital_or_Ambulance))
    {
        printf("%s \n",x);
    }
    fclose(hospital_or_Ambulance);
    printf("..................................................\n");
    printf("  0. Back              9.Exit\n\n");
     int ch;
    scanf("%d",&ch);
    switch(ch)
    {
    case 0:
        return 0;
        break;
    case 9:
        exit(0);
    default:
        printf("Wrong Input");
    }
};
Search_city()
{
    abc:
    system("CLS");
    printf("              Welcome  To  Aidfast \n");
    printf("  :::::::::::::::::::::::::::::::::::::::::::\n");
    printf("  1.Dhaka Division\n");
    printf("  2.Mymensingh Division \n");
    printf("  3.Rajshahi Division \n");
    printf("  4.Barisal Division \n");
    printf("  5.Chittagong Division \n");
    printf("  6.Sylhet Division \n");
    printf("  7.Khulna Division \n");
    printf("  8.Rangpur Division \n");
    printf("...............................\n");
    printf("  0. Back              9.Exit\n\n");
    printf("\n  Enter Your Choice: ");
    int ch;
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        Dhaka();
        break;
    case 2:
        Mymensingh();
        break;
    case 3:
        Rajshahi();
        break;
    case 4:
        Barisal();
        break;
    case 5:
        Chittagong();
        break;
    case 6:
        Sylhet();
        break;
    case 7:
        Khulna();
        break;
    case 8:
        Rangpur();
    case 0:
        return 0;
        break;
    case 9:
        exit(0);

        break;

    default:
        printf("Wrong Input");
    }
    goto abc;
};
User()
{
    abc:
    system("CLS");
    printf("              Welcome  To  Aidfast \n");
    printf("  :::::::::::::::::::::::::::::::::::::::::::\n");
    printf("  1.Search city\n");
    printf("  2.Hospital or Ambulance\n");
    printf("  3.Special Doctors in service\n");
    printf("  4.Abroad treatment\n");
    printf("  5.Important prescriptions \n");
    printf("  6.About us.\n");
    printf("...............................\n");
    printf("  0. Back              9.Exit\n\n");

    printf("\n  Enter Your Choice : ");
    int ch;
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        Search_city();
        break;
    case 2:
        Hospital_or_Ambulance();
        break;
    case 3:
        Special_Doctors_in_service();
        break;
    case 4:
        Abroad_treatment();
        break;
    case 5:
        Important_prescriptions();
        break;
    case 6:
        About_us();
        break;
    case 0:
        return 0;
        break;
    case 9:
        exit(0);

    default:


        printf("Wrong Input");
    }
    goto abc;





};
Admin()
{
    abc:
    system("CLS");
    printf("              Welcome  To  Aidfast \n");
    printf("  :::::::::::::::::::::::::::::::::::::::::::\n");
    printf("  1.Add Info \n");
    printf("  2.Add Hospital or Ambulance \n");
    printf("  3.Add Special Doctors in service\n");
    printf("  4.Add Abroad treatment\n");
    printf("  5.Add Important prescriptions \n");
    printf("  6.Add About us.\n");
    printf("...................................\n");
    printf("  0. Back              9.Exit\n\n");
    int ch;
    printf("\n  Enter Your Choice (1-6): ");
    scanf("%d",& ch);
    switch(ch)
    {
    case 1:
        Add_Info();
        break;
    case 2:
        Add_Hospital_or_Ambulance();
        break;
    case 3:
        Add_Special_Doctors_in_service();
        break;
    case 4:
        Add_Abroad_treatment();
        break;
    case 5:
        Add_Important_prescriptions();
        break;
    case 6:
        Add_About_us();
        break;
    case 0:
        return 0;
    case 9:
        exit(0);
        break;



    default:
        printf("Wrong Input");
    }
    goto abc;

};
int main()
{
    abc:
    system("cls");
    system("COLOR 0A");
    printf("              Welcome  To  Aidfast \n");
    printf("  :::::::::::::::::::::::::::::::::::::::::::\n");
    printf("   1. USER LOGIN \n");
    printf("   2. ADMIN LOGIN \n");
    int ch;
    printf("\n   Enter Your Choice(1-2): ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
    {
        User();
        goto abc;
        break;
    }
    case 2:
        Admin();
        goto abc;
        break;
    default:
        printf("Wrong Input");
    }

}
