#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define ENTER 13
#define TAB 9
#define BCKSPC 8
void LogIn();
void SignUp();
struct user{
	char fullName[50];
	char email[50];
	char password[50];
	char username[50];
	char phone[50];
};
struct dashboard{
	float amount;
	int quan;
};
char generateUsername(char email[50],char username[50]){
	int i;

	for( i=0;i<strlen(email);i++){
		if(email[i] == '@') break;
		else username[i] = email[i];
	}
}

void takepassword(char pwd[50]){
	int i;
	char ch;
	while(1){
		ch = getch();
		if(ch == ENTER || ch == TAB){
			pwd[i] = '\0';
			break;
		}else if(ch == BCKSPC){
			if(i>0){
				i--;
				printf("\b \b");
			}
		}else{
			pwd[i++] = ch;
			printf("* \b");
		}
	}
}
int main(){
	system("color 79");
	FILE *fp;
	int op,usrFound = 0;
	struct user user;
	char password2[50];

	printf("\n\t\t\t\t----------Crypto's Portfolio Management----------");
	printf("\n\t\t\t\tThis is a Program to  record the transcation of your Cryptos.\t\t\t ");
	printf("\nPlease choose your operation");
	printf("\n1.Signup");
	printf("\n2.Login");
	printf("\n3.Exit");

	printf("\n\nOperation:\t");
	scanf("%d",&op);
	fgetc(stdin);

		switch(op){
		case 1:
			SignUp();

		break;

		case 2:
			LogIn();
			break;

		case 3:
			printf("You Have Been exited.");
			break;
	}
	return 0;
}
    void LogIn(){
	
    	
    	int usrFound;
    	FILE *fp,*fptr,*fnw,*fp1;
    	char line[100],other='Y',linee[122];
    	int opn,onn,quan;
    	struct dashboard d;
    	
    	char filename[200],copy[234];
    	
    	float num;
    	d.amount=20000;
    	




		char username[50],pword[50];
		struct user usr;

			printf("\nEnter your username:\t");
			gets(username);
			printf("Enter your password:\t");
			takepassword(pword);

			fp = fopen("data.txt","r");
			while(fread(&usr,sizeof(struct user),1,fp)){
				if(!strcmp(usr.username,username)){
					if(!strcmp(usr.password,pword)){
						system("cls");
						strcpy(filename,usr.username);
						printf("\n\t\t\t\t\t\tWelcome %s",usr.fullName);
						printf("\n\n|Full Name:\t%s",usr.fullName);
						printf("\n|Email:\t\t%s",usr.email);
						printf("\n|Username:\t%s",usr.username);
						printf("\n|Contact no.:\t%s\n\n",usr.phone);
						
						
						printf("You have %f in your crypto wallet: ",d.amount);
						printf("What do you want to do?");
						printf("\n1.Buy Crypto");
						
						printf("\n2.View your Portfolio\n");
						scanf("%d",&opn);
						strcat(copy,usr.email);
						switch(opn){
						case 1:
							while(other=='Y'){
							
							system("cls");

						fptr=fopen("price.txt","r");
						while(fgets(line,sizeof(line),fptr))
						{
						    printf("%s",line);
						}
						fclose(fptr);
						fnw=fopen(filename,"a+");
						printf("\nWhich Currency do you want to buy?\t");
						scanf("%d",&onn);
						if(onn==1){
						
						printf("You are going to buy bitcoin.\n");
						printf("Wite down the quantity\n");
						fflush(stdin);
						scanf("%d",&d.quan);
						
						
						
						if((d.amount-d.quan*23176.00)<=0){
							
						
						printf("You don't have enough money to purchase it.");
						}
						else{
							
							
							d.amount=d.amount-d.quan*23176.00;
						
						printf("You have successfully bought bitcoin.");
						printf("Your balance is:%f",d.amount);
						fprintf(fnw,"|Bitcoin\t\t\t\t|   %d   |\t\t\t\t|    uniquecode(%.2f)   |\n\n",d.quan,d.quan*2573.00);}
						
						
					}
						 else if(onn==2){
						
						printf("You are going to buy Tether.\n");
						printf("Wite down the quantity\n");
						scanf("%d",&d.quan);
						
						
						if((d.amount-d.quan*1.002)<=0){
						
						printf("You don't have enough money to purchase it.");}
						else {
							d.amount=d.amount-d.quan*1.002;
						printf("You have successfully bought tether.");
						printf("Your balance is:%f",d.amount);
							fprintf(fnw,"|Tether \t\t\t\t|   %d |\t\t\t\t|    uniquecode(%.2f)   |\n\n",d.quan,d.quan*1.002);
							fclose(fnw);}}
							
						else if(onn==3){
						
						printf("You are going to buy Etherum.\n");
						printf("Wite down the quantity\n");
						scanf("%d",&d.quan);
						
						
						
						if((d.amount-d.quan*1712.11)<=0){
						
						printf("You don't have enough money to purchase it.");}
						else{
					d.amount=d.amount-d.quan*1712.111;	
						printf("You have successfully bought etherum.");
						printf("Your balance is:%f",d.amount);
						fprintf(fnw,"|Etherum \t\t\t\t|   %d   |\t\t\t\t|    uniquecode(%.2f)   |\n\n",d.quan,d.quan*1712.11);}}
							else if(onn==4){
						
						printf("You are going to buy BINANCE USD.\n");
						printf("Wite down the quantity\n");
						scanf("%d",&d.quan);
						
						
						
						if((d.amount-d.quan*1.00)<=0){
						
						printf("You don't have enough money to purchase it.");}
						
						else {
						d.amount=d.amount-d.quan*1.00;
						printf("You have successfully bought BINANCE USD.");
						printf("Your balance is:%f",d.amount);
						fprintf(fnw,"|binance usd \t\t\t\t|   %d   |\t\t\t\t|    uniquecode(%.2f)   |\n\n",d.quan,d.quan*1.00);}}
						else if(onn==5){
						
						printf("You are going to buy solana.\n");
						printf("Wite down the quantity\n");
						scanf("%d",&d.quan);
						
						
						if((d.amount-d.quan*39.88)<=0){
						
						printf("You don't have enough money to purchase it.");}
						else{
						d.amount=d.amount-d.quan*39.88;
						printf("You have successfully bought solana.");
						printf("Your balance is:%f",d.amount);
						fprintf(fnw,"|Solana\t\t\t\t|   %d   |\t\t\t\t|    uniquecode(%.2f)  |\n\n",d.quan,d.quan*39.88);}}
							 else if(onn==6){
						
						printf("You are going to buy polkadot.\n");
						printf("Wite down the quantity\n");
						scanf("%d",&d.quan);
						
						
						
						if((d.amount-d.quan*39.88)<=0){
						
						printf("You don't have enough money to purchase it.");}
						else {
							d.amount=d.amount-d.quan*8.46;
						printf("You have successfully bought polkadot.");
						printf("Your balance is:%f",d.amount);
						fprintf(fnw,"|polkadot\t\t\t\t|   %d   |\t\t\t\t|    uniquecode(%.2f)   |\n\n",d.quan,d.quan*39.88);}}
							 else if(onn==7){
						
						printf("You are going to buy dogecoin.\n");
						printf("Wite down the quantity\n");
						scanf("%d",&d.quan);
						
						
						
						if((d.amount-d.quan*0.06856)<=0){
						
						printf("You don't have enough money to purchase it.");}
						else{
							d.amount=d.amount-d.quan*0.06856;
						
						printf("You have successfully bought Dogecoin.");
						printf("Your balance is:%f",d.amount);
						fprintf(fnw,"|Dogecoin \t\t\t\t|   %d   |\t\t\t\t|    uniquecode(%.2f)  |\n\n",d.quan,d.quan*0.06856);}}
						 else if(onn==8){
						
						printf("You are going to buy helium.\n");
						printf("Wite down the quantity\n");
						scanf("%d",&d.quan);
						
						
					if((d.amount-d.quan*8.11)<=0){
						
						printf("You don't have enough money to purchase it.");}
						
						else{
							d.amount=d.amount-d.quan*8.11;
						printf("You have successfully bought helium.");
						printf("Your balance is:%f",d.amount);
						fprintf(fnw,"|helium \t\t\t\t|   %d   |\t\t\t\t|    uniquecode(%.2f)  |\n\n",d.quan,8.11);}}
						printf("Buy Other(Y): ");
						
						
						
						other=getche();
						fflush(stdin);
						}
						LogIn();
						
						
						
						
						
						
				
							
								
							
							
							
							
							
					case 2:
						
						
							fnw=fopen(filename,"r");
							if(fnw==NULL)
							printf("Error");
							while(fgets(linee,sizeof(linee),fnw))
							printf("%s",linee);
							fclose(fnw);
							
							
							break;
					}}
						
						
						
						
						
						
					
					else {
						printf("\n\nInvalid Password!");
						Beep(800,300);
					}
					usrFound = 1;
					}}
				
			
			if(!usrFound){
				printf("\n\nUser is not registered!");
				Beep(800,300);
			}
			
			
			fclose(fp);
		}
		
		
		
			void SignUp(){
			FILE *fp;


	struct user user;
	char password2[50];

			system("cls");
			printf("\nEnter your full name:\t");
			gets(user.fullName);
			printf("Enter your email:\t");
			gets(user.email);
			printf("Enter your contact no:\t");
			gets(user.phone);
			printf("Enter your password:\t");
			takepassword(user.password);
			printf("\nConfirm your password:\t");
			takepassword(password2);
				if(!strcmp(user.password,password2)){
				generateUsername(user.email,user.username);
				fp = fopen("data.txt","a+");
				fwrite(&user,sizeof(struct user),1,fp);
				if(fwrite != 0) printf("\n\nUser resgistration success, Your username is %s",user.username);
				else printf("\n\nSorry! Something went wrong :(");
				fclose(fp);
			}
			else{
				printf("\n\nPassword not matched");
				Beep(750,300);

			}
			printf("Your Account Has Been Created.Please LogIn to continue.\n\n\n");
			LogIn();
		}



