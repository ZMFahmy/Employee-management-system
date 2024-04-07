#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE *f1;
int counter=0;

typedef struct
{ //structure for employee date of birth
    int day,month,year;
} DOB;

typedef struct
{ //structure for employees data
    int id,phnum;
    char email[100],Fname[10],Lname[10],address[100];
    float slry;
    DOB dob;
} EMP;

EMP E[100];
void print()
{
    int i,l;
    int sort,tem;
    char temp[100];
    float te;

    printf("\nHow would you like the data to be sorted?\n");
    printf("1. based on last name\n");
    printf("2. based on salary\n");
    printf("3. based on date of birth\n");
    printf("Enter your desired sorting order: ");
    scanf("%d",&sort);
    printf("\n\n");
    i=0;
    if(sort==1)
    {
        while(i<counter)
        {
            for(l=i+1;l<counter;l++)
            {
                if(strcmp(E[i].Lname,E[l].Lname)>0)
                {
                    strcpy(temp,E[i].Lname);
                    strcpy(E[i].Lname,E[l].Lname);
                    strcpy(E[l].Lname,temp);
                    strcpy(temp,E[i].Fname);
                    strcpy(E[i].Fname,E[l].Fname);
                    strcpy(E[l].Fname,temp);
                    te=E[i].slry;
                    E[i].slry=E[l].slry;
                    E[l].slry=te;
                    tem=E[i].dob.day;
                    E[i].dob.day=E[l].dob.day;
                    E[l].dob.day=tem;
                    tem=E[i].dob.month;
                    E[i].dob.month=E[l].dob.month;
                    E[l].dob.month=tem;
                    tem=E[i].dob.year;
                    E[i].dob.year=E[l].dob.year;
                    E[l].dob.year=tem;
                    strcpy(temp,E[i].address);
                    strcpy(E[i].address,E[l].address);
                    strcpy(E[l].address,temp);
                    tem=E[i].phnum;
                    E[i].phnum=E[l].phnum;
                    E[l].phnum=tem;
                    strcpy(temp,E[i].email);
                    strcpy(E[i].email,E[l].email);
                    strcpy(E[l].email,temp);
                    tem=E[i].id;
                    E[i].id=E[l].id;
                    E[l].id=tem;
                }
            }
            i++;
        }
        for(i=0;i<counter;i++)
        {
            printf("Information of employee #%d\n",i+1);
            printf("ID:%d\n",E[i].id);
            printf("Last Name: ");
            puts(E[i].Lname);
            printf("First Name: ");
            puts(E[i].Fname);
            printf("Salary: %.2f\n",E[i].slry);
            printf("Date of Birth: %d/%d/%d\n",E[i].dob.day,E[i].dob.month,E[i].dob.year);
            printf("Address: ");
            puts(E[i].address);
            printf("Phone Number: %d\n",E[i].phnum);
            printf("E-mail: %s\n",E[i].email);
            printf("\n\n");
        }
    }
    else if(sort==2)
    {
         while(i<counter)
        {
            for(l=i+1;l<counter;l++)
            {
                if(E[i].slry<E[l].slry)
                {
                    strcpy(temp,E[i].Lname);
                    strcpy(E[i].Lname,E[l].Lname);
                    strcpy(E[l].Lname,temp);
                    strcpy(temp,E[i].Fname);
                    strcpy(E[i].Fname,E[l].Fname);
                    strcpy(E[l].Fname,temp);
                    te=E[i].slry;
                    E[i].slry=E[l].slry;
                    E[l].slry=te;
                    tem=E[i].dob.day;
                    E[i].dob.day=E[l].dob.day;
                    E[l].dob.day=tem;
                    tem=E[i].dob.month;
                    E[i].dob.month=E[l].dob.month;
                    E[l].dob.month=tem;
                    tem=E[i].dob.year;
                    E[i].dob.year=E[l].dob.year;
                    E[l].dob.year=tem;
                    strcpy(temp,E[i].address);
                    strcpy(E[i].address,E[l].address);
                    strcpy(E[l].address,temp);
                    tem=E[i].phnum;
                    E[i].phnum=E[l].phnum;
                    E[l].phnum=tem;
                    strcpy(temp,E[i].email);
                    strcpy(E[i].email,E[l].email);
                    strcpy(E[l].email,temp);
                    tem=E[i].id;
                    E[i].id=E[l].id;
                    E[l].id=tem;
                }
            }
            i++;
        }
        for(i=0;i<counter;i++)
        {
            printf("Information of employee #%d\n",i+1);
            printf("ID:%d\n",E[i].id);
            printf("Last Name: ");
            puts(E[i].Lname);
            printf("First Name: ");
            puts(E[i].Fname);
            printf("Salary: %.2f\n",E[i].slry);
            printf("Date of Birth: %d/%d/%d\n",E[i].dob.day,E[i].dob.month,E[i].dob.year);
            printf("Address: ");
            puts(E[i].address);
            printf("Phone Number: %d\n",E[i].phnum);
            printf("E-mail: %s\n",E[i].email);
            printf("\n\n");
        }
    }
    else if(sort==3)
    {
         while(i<counter)
        {
            for(l=i+1;l<counter;l++)
            {
                if(E[i].dob.year>E[l].dob.year||(E[i].dob.year==E[l].dob.year&&E[i].dob.month>E[l].dob.month)||(E[i].dob.year==E[l].dob.year&&E[i].dob.month==E[l].dob.month&&E[i].dob.day>E[l].dob.day))
                {
                    strcpy(temp,E[i].Lname);
                    strcpy(E[i].Lname,E[l].Lname);
                    strcpy(E[l].Lname,temp);
                    strcpy(temp,E[i].Fname);
                    strcpy(E[i].Fname,E[l].Fname);
                    strcpy(E[l].Fname,temp);
                    te=E[i].slry;
                    E[i].slry=E[l].slry;
                    E[l].slry=te;
                    tem=E[i].dob.day;
                    E[i].dob.day=E[l].dob.day;
                    E[l].dob.day=tem;
                    tem=E[i].dob.month;
                    E[i].dob.month=E[l].dob.month;
                    E[l].dob.month=tem;
                    tem=E[i].dob.year;
                    E[i].dob.year=E[l].dob.year;
                    E[l].dob.year=tem;
                    strcpy(temp,E[i].address);
                    strcpy(E[i].address,E[l].address);
                    strcpy(E[l].address,temp);
                    tem=E[i].phnum;
                    E[i].phnum=E[l].phnum;
                    E[l].phnum=tem;
                    strcpy(temp,E[i].email);
                    strcpy(E[i].email,E[l].email);
                    strcpy(E[l].email,temp);
                    tem=E[i].id;
                    E[i].id=E[l].id;
                    E[l].id=tem;
                }
            }
            i++;
        }
        for(i=0;i<counter;i++)
        {
            printf("Information of employee #%d\n",i+1);
            printf("ID:%d\n",E[i].id);
            printf("Last Name: ");
            puts(E[i].Lname);
            printf("First Name: ");
            puts(E[i].Fname);
            printf("Salary: %.2f\n",E[i].slry);
            printf("Date of Birth: %d/%d/%d\n",E[i].dob.day,E[i].dob.month,E[i].dob.year);
            printf("Address: ");
            puts(E[i].address);
            printf("Phone Number: %d\n",E[i].phnum);
            printf("E-mail: %s\n",E[i].email);
            printf("\n\n");
        }
    }
    else
        printf("Please enter a suitable choice\n\n");
}

void load()
{
    int i,l,sort,tem;
    char c,ch,Fname[10],Lname[10],address[100],temp[100];
    float te;
    f1=fopen("data.txt","r");
    if (f1 == NULL)
    {
        printf("Error opening the file!!!");
        exit(1);
    }
    i=0;
    counter=0;
    while(!feof(f1))
    {
        fscanf(f1,"%d",&E[counter].id);
        ch=fgetc(f1);
        while(!feof(f1))
        {
            ch=fgetc(f1);
            if(ch!=',')
            {
                Fname[i]=ch;
                i++;
            }
            else
                break;
        }
        for(l=0;l<i;l++)
        {
            E[counter].Fname[l]=Fname[l];
        }
        i=0;
        while(!feof(f1))
        {
            ch=fgetc(f1);
            if(ch!=',')
            {
                Lname[i]=ch;
                i++;
            }
            else
                break;
        }
        for(l=0;l<i;l++)
        {
            E[counter].Lname[l]=Lname[l];
        }
        fscanf(f1,"%f",&E[counter].slry);
        ch=fgetc(f1);
        fscanf(f1,"%d",&E[counter].dob.day);
        ch=fgetc(f1);
        fscanf(f1,"%d",&E[counter].dob.month);
        ch=fgetc(f1);
        fscanf(f1,"%d",&E[counter].dob.year);
        ch=fgetc(f1);
        i=0;
        while(!feof(f1))
        {
            ch=fgetc(f1);
            if(ch!=',')
            {
                address[i]=ch;
                i++;
            }
            else
                break;
        }
        for(l=0;l<i;l++)
        {
            E[counter].address[l]=address[l];
        }
        fscanf(f1,"%d",&E[counter].phnum);
        i=0;
        ch=fgetc(f1);
        fscanf(f1,"%s\n",&E[counter].email);
        i=0;
        counter++;
    }

}

void query(){
char c[100];
printf("\nenter the last name of the employee: ");
scanf("%s",&c);
int i;
for(i=0;i<counter;i++){
 if(!strcasecmp(c,E[i].Lname)){
        printf("\nFirst name: %s\n",E[i].Fname);
        printf("Last name: %s\n",E[i].Lname);
        printf("Id: %d\n",E[i].id);
        printf("Salary: %.2f\n",E[i].slry);
        printf("Address: %s\n",E[i].address);
        printf("Phone number: %d\n",E[i].phnum);
        printf("Email: %s\n",E[i].email);
        printf("Date of birth: %d/",E[i].dob.day);
        printf("%d/",E[i].dob.month);
        printf("%d\n\n",E[i].dob.year);

 }
}
}


void save(){
FILE *fp;
int i;
fp= fopen("data.txt","w");
for(i=0;i<counter;i++){
    fprintf(fp,"%d,%s,%s,%.2f,%d,%d,%d,%s,%s\n",E[i].id,E[i].Fname,E[i].Lname,E[i].slry,E[i].dob.day,E[i].dob.month,E[i].dob.year,E[i].address,E[i].email);
}
printf("\ndata has been saved successfully\n\n");
fclose(fp);
}

void Delete ()
{
    char f1[100],f2[100];
    printf("\nplease insert the first name of the employee u wish to delete from the database: \n");
    gets(f1);
    printf("please insert the last name of the employee u wish to delete from the database: \n");
    gets(f2);
    int flag = 0;
    char check[10];
    for (int i=0;i<counter;i++)
    {
        if(!strcasecmp(E[i].Fname, f1) && !strcasecmp(E[i].Lname, f2)){
                printf("employee found confirm data removal?  (y to confirm) \n");
            gets(check);
            if(strcasecmp(check, "yes")){
            E[i] = E[counter-1];
            counter--;
            flag = 1 ;
            }
        }
    }
    if (flag == 0) printf("there is no employees with the input name\n\n");
}


void add()
{
     //saving input data in array
    printf("\ninsert employee first name:\n");
    gets(E[counter].Fname);
    printf("insert employee last name:\n");
    gets(E[counter].Lname);
    printf("insert employee id:\n");
    scanf("%d",&E[counter].id);
    printf("insert employee salary:\n");
    scanf("%f",&E[counter].slry);
    printf("insert employee phone number:\n");
    scanf("%d",&E[counter].phnum);
    printf("insert employee email:\n");
    getchar();
    gets(E[counter].email);
    printf("insert employee address:\n");
    gets(E[counter].address);
    printf("insert employee birth day then month then year:\n");
    scanf("%d",&E[counter].dob.day);
    scanf("%d",&E[counter].dob.month);
    scanf("%d",&E[counter].dob.year);
    getchar();
    // test print <3
    printf("\nEmployee data in string format:\n");
    printf("%s,%s,%d,%f,%s,%d,%s,%d,%d,%d \n\n",E[counter].Fname,E[counter].Lname,E[counter].id,E[counter].slry,E[counter].address,E[counter].phnum,E[counter].email,E[counter].dob.day,E[counter].dob.month,E[counter].dob.year);
    counter++;
}

int modify(){
    int x, i;
    try:;
    int flag=0;
        printf("\nenter the user ID you want to modify, or type 0 to exit: ");
        scanf("%d",&x);
        if (x == 0){
            printf("\n");
            return (0);
        }
        for(i=0;i<counter;i++){
            if(x == E[i].id){
                flag=1;
                printf("please enter new data of employee:\n");
                printf("enter first name:"); scanf("%s",E[i].Fname);
                printf("enter last name:");  scanf("%s",E[i].Lname);
                printf("enter new ID:");     scanf("%d",&E[i].id);
                printf("enter new salary:"); scanf("%f",&E[i].slry);
                printf("enter new phone number:"); scanf("%d",&E[i].phnum);
                printf("enter new email:"); scanf("%s",E[i].email);
                printf("enter new address:"); scanf("%s",E[i].address);
                printf("insert employee new birth day then month then year:");
                scanf("%d",&E[i].dob.day);
                scanf("%d",&E[i].dob.month);
                scanf("%d",&E[i].dob.year);

                printf("\n");
            }
        }
        if(flag!=1) {
            printf("\ndata doesn't exist\n");
            goto try;
        }
}
int main()
{
    int x=0;
    char a[10];
    load();
    repeat:;
    do
    {
        printf("Main Menu\n");
        printf("1.print and sort\n");
        printf("2.add\n");
        printf("3.delete\n");
        printf("4.modify\n");
        printf("5.query\n");
        printf("6.save\n");
        printf("7.quit\n");
        printf("enter desired operation: ");
        scanf("%d",&x);
        getchar();
        switch(x)
        {
        case 1:
            print();
            break;
        case 2:
            add();
            break;
        case 3:
            Delete();
            break;
        case 4:
            modify();
            break;
        case 5:
            query();
            break;
        case 6:
            save();
            break;
        case 7:
            printf("\nWARNING THE CHANGES YOU MADE WILL BE DISCARDED\n");
            printf("enter yes to exit\n");
            gets(a);
            if(!strcasecmp(a,"yes"))
                {return 0;}// quitting the program and ending run
            else{
                printf("\n");
                goto repeat;
            }
            break;
        }
    }while(x!=0);
    return 0;
}
