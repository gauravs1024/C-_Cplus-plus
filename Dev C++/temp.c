#include<stdio.h>
void main(){
	FILE *f;
	f=fopen("state.txt","w");char ch="\n";
	char ar[500]="Andaman And Nicobar:Andhra Pradesh:Arunachal Pradesh:Assam:Bihar:Chandigarh:Chhattisgarh:Dadar And Nagar Haveli:Daman and Diu:Delhi:Goa:Gujarat:Haryana:Himachal Pradesh:Jammu and Kashmir:Jharkhand:Karnataka:Kerala:Lakshadweep:Madhya Pradesh:Maharashtra:Manipur:Meghalaya:Mizoram:Nagaland:Orissa:Puducherry:Punjab:Rajasthan:Sikkim:Tamil Nadu:Telangana:Tripura:Uttar Pradesh:Uttarakhand:West Bengal";
	int i=0;
	if(f==NULL){
		printf("cant open file\n");}
	else{
	while(ar[i]!='\0'){
		
		if(ar[i]==':'){
			printf("\n");
			fputc(ch,f);
		}
		else{
		printf("%c",ar[i]);
			fputc(ar[i],f);
	}
		i++;
	}
}
fclose(f);
}
