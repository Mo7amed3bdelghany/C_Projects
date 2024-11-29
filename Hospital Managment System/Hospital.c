#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Patient
{
    int id;
    char name[50];
    char gender[10];
    int age;
    char diagnosis[100];
} Patients;

void welcome()
{
    printf("\n\t **** Hospital Management System ***\n");
    printf("\t\t1. Add Patient\n");
    printf("\t\t2. Display Patients\n");
    printf("\t\t3. Search Patient\n");
    printf("\t\t4. Delete Patient\n");
    printf("\t\t5. Exit\n");
}

void Add_patient(Patients *patient, int *count)
{
    printf("\t Enter Patient ID: ");
    scanf("%d", &patient[*count].id);
    getchar(); // Consume the newline character left by scanf

    printf("\t Enter Patient Name: ");
    scanf("%[^\n]s", &patient[*count].name);
    patient[*count].name[strcspn(patient[*count].name, "\n")] = '\0'; // Remove newline character

    printf("\t Enter Age: ");
    scanf("%d", &patient[*count].age);
    getchar();

    printf("\t Enter Gender: ");
    scanf("%s", &patient[*count].gender);
    patient[*count].gender[strcspn(patient[*count].gender, "\n")] = '\0';
    getchar();

    printf("\t Enter Diagnosis: ");
    scanf("%[^\n]s", &patient[*count].diagnosis);
    patient[*count].diagnosis[strcspn(patient[*count].diagnosis, "\n")] = '\0';

    (*count)++;
    printf("\t\tPatient added successfully!\n");
}
void display(Patients *patient, int no_patient){
        printf("\t\tPatient ID: %d\n", patient[no_patient].id);
        printf("\t\tName: %s\n", patient[no_patient].name);
        printf("\t\tAge: %d\n", patient[no_patient].age);
        printf("\t\tGander: %s\n", patient[no_patient].gender);
        printf("\t\tDiagnosis: %s\n", patient[no_patient].diagnosis);
}
void Display_patients(Patients *patient, int count)
{
    if (count == 0)
    {
        printf("\t\tNo patients found.\n");
        return;
    }

    for (int i = 0; i < count; i++)
    {
        if(i>0){
            printf("\n");
        }
        printf("\t------------- Patient %d -------------\n", i + 1);
        display(patient, i);
    }
}

void Search_patient(Patients *patient, int count){
    if (count == 0)
    {
        printf("\t\tNo patients found.\n");
        return;
    } 
    int id;
    printf("\t Enter Patient ID to search: ");
    scanf("%d", &id);
    for(int i=0;i<count;i++){
        if(patient[i].id == id){
        display(patient, i);
            return;
        }
    }

    printf("\t\tPatient ID (%d) not found!\n", id);
}

void Delete_patient(Patients *patient, int *count){
    if (*count == 0)
    {
        printf("\t\tNo patients found.\n");
        return;
    }
     int id;
    printf("\t Enter Patient ID to delete: ");
    scanf("%d", &id);

    for(int i=0;i<*count;i++){
        if(patient[i].id == id){
            for (int j = i; j < *count - 1; j++) {
                patient[j] = patient[j + 1];
            }
            (*count)--;
            printf("\t\tPatient with ID (%d) deleted successfully.\n", id);
            return;
        }
    }

    printf("\t\tPatient ID (%d) not found!\n", id);
}

int main()
{

    Patients patient[500];
    int count = 0, choice;
    while (1)
    {
        welcome();
        printf("\t Enter your choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice)
        {
        case 1:
            Add_patient(patient, &count);
            break;
        case 2:
            Display_patients(patient, count);
            break;
        case 3:
            Search_patient(patient, count);
            break;
        case 4:
            Delete_patient(patient, &count);
            break;
        case 5:
            printf("\t\tThanks for using our services!\n");
            exit(0);
            break;
        default:
            printf("\t\tOops! ... Invalid Choice! Please try again.\n");
            break;
        }
    }
    return 0;
}