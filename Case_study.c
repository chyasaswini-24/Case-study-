 #include<stdio.h> 
 void main()
 {
 int choice_no ;
 float  amount,balance;
 printf("enter current balance:");
 scanf("%f",&balance);
 printf("Please select your choice");
  printf("\n 1) Balance inquiry");
  printf("\n 2) Cash withdrawal");
   printf("\n 3) Cash deposit  \n");
 scanf("%d",&choice_no);
 switch(choice_no)
 {
 case 1: printf("current balance is %.2f",balance);
             break;
 case 2: printf(" enter withdrawl amount:");
          scanf("%f",&amount);
          if(amount <=  balance)
          {
          printf("transaction is successfull \n");
          balance -= amount ;
          printf("Remaining balance =%.2f",balance);
          }
          else
          printf("insufficient balance");
          break;
  case 3: printf("enter deposit amount:");
            scanf("%f",&amount);
           balance += amount;
           printf("balance updated= %.2f",balance);
           break;
 default: printf(" invalid option ");
 }
 }         