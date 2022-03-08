#include <stdio.h>

#include<string.h>

//Structure definition

struct student

{

    char Name[50];

    int id;

    int age;

};

//Main method

int main()

{

    //Declaration of variables

    int i,j,limit;
    printf("Enter the no of student:");

    scanf("%d",&limit);

    //Declaration of objects

    struct student obj[3] ,temp;

    //Prommpt and get student details

    printf(".....student Details....");

    for(i=0; i<limit; i++)

    {

        printf("\n Enter student Name:");

        scanf("%s",obj[i].Name);

        printf("\n Enter student ID:");

        scanf("%d",&obj[i].id);

        printf("\n Enter student age:");

        scanf("%d",&obj[i].age);

    }

    //Sort the structure by their name decending order

    for(i=0; i<limit-1; i++){

        for(j=i+1; j<limit; j++){

            if(strcmp(obj[i].Name, obj[j].Name)>0){
            
                temp= obj[i];

                obj[i]=obj[j];

                obj[j]= temp;

            }

        }

    }

    //Loop to print the output

    for(i=0; i<limit; i++)

    {

        printf("\n student Name:%s",obj[i].Name);

        printf("\n student ID:%d",obj[i].id);

        printf("\n student age:%d",obj[i].age);

    }
    printf("\n");
        for(i=0; i<limit-1; i++){

        for(j=i+1; j<limit; j++){

            if(obj[i].id> obj[j].id){
            
                temp= obj[i];

                obj[i]=obj[j];

                obj[j]= temp;

            }

        }

    }
    printf("\nSort by id \n");

        for(i=0; i<limit; i++)

    {

        printf("\n student Name:%s",obj[i].Name);

        printf("\n student ID:%d",obj[i].id);

        printf("\n student age:%d",obj[i].age);

    }

        for(i=0; i<limit-1; i++){

        for(j=i+1; j<limit; j++){

            if(obj[i].age> obj[j].age){
            
                temp= obj[i];

                obj[i]=obj[j];

                obj[j]= temp;

            }

        }

    }
    printf("\nSort by age \n");
        for(i=0; i<limit; i++)

    {

        printf("\n student Name:%s",obj[i].Name);

        printf("\n student ID:%d",obj[i].id);

        printf("\n student age:%d",obj[i].age);

    }

    return 0;

}

