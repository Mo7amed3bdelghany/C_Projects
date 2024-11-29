#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct BankAccount{
    int acc_no;
    char acc_name[50];
    float balance;
}Acc;

void Create_account(Acc *account, int*count){

    printf("\t Enter Account Number: ");
    scanf("%d", &account[*count].acc_no);
    getchar(); // Consume the newline character left by scanf

    printf("\t Enter Account Holder Name: ");
    scanf("%[^\n]s", &account[*count].acc_name);
    account[*count].acc_name[strcspn(account[*count].acc_name, "\n")] = '\0'; // Remove newline character

    printf("\t Enter Initial Deposit Amount: ");
    scanf("%f", &account[*count].balance);

    (*count)++;
    printf("\t\tAccount Created Successfully!!\n");
}

void Deposit_money(Acc *account,int count){

    int acc_no;
    float amount;
    printf("\t Enter Account Number: ");
    scanf("%d", &acc_no);

    for(int i=0;i<count;i++){
        if(account[i].acc_no == acc_no){
            printf("\t Enter Amount to Deposit: ");
            scanf("%f", &amount);

            account[i].balance += amount;
            printf("\t\tAmount deposited successfully!\n");
            printf("\t\tNew Balance is: %2f$\n",account[i].balance);
            return;
        }
    }
    printf("\t\tAccount Number %d not found!\n", acc_no);

}
void Withdraw_money(Acc *account ,int count){

    int acc_no;
    float amount;
    printf("\t Enter Account Number: ");
    scanf("%d", &acc_no);

    for(int i=0;i<count;i++){
        if(account[i].acc_no == acc_no){
            printf("\t Enter Amount to Withdraw: ");
            scanf("%f", &amount);

            if(account[i].balance >= amount){
                account[i].balance -= amount;
                printf("\t\tAmount withdrawn successfully!\n");
                printf("\t\tNew Balance is: %2f$\n",account[i].balance);
            }
            else{
                printf("\t\tInsufficient Balance!\n");
                printf("\t\tYou just have %2f$ in your account\n", account[i].balance);
            }
                return;
        }
    }
    printf("\t\tAccount Number %d not found!\n", acc_no);
}

void DisplayAccounts(Acc *account, int count){

    if (count == 0) {
        printf("\t\tNo accounts found.\n");
        return;
    }
    for (int i = 0; i < count; i++){
        printf("\t\tAccount Number: %d\n", account[i].acc_no);
    printf("\t\tAccount Holder Name: %s\n", account[i].acc_name);
    printf("\t\tBalance: %2f$\n", account[i].balance);

    if(i != count - 1){
    printf("\t _____________________________________\n");
        }
    }
}

void Welcome(){
    printf("\n\t *** Bank Management System ***\n");
    printf("\t\t1. Create Account\n");
    printf("\t\t2. Deposit Money\n");
    printf("\t\t3. Withdraw Money\n");
    printf("\t\t4. Display Account\n");
    printf("\t\t5. Exit\n");
}

int main(){
    Acc account[500];
    int count = 0, choice;

    while(1){
    Welcome();
    printf("\t Enter your choice: ");
    scanf("%d", &choice);
    printf("\n");

    switch(choice){
        case 1:
            Create_account(account, &count);
            break;
        case 2:
            Deposit_money(account, count);
            break;
        case 3:
            Withdraw_money(account, count);
            break;
        case 4:
            DisplayAccounts(account, count);
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