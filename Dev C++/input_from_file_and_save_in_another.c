#include<stdio.h>
#include<stdlib.h>
void main(){
	FILE *city_file,*sql_file;
	int i=0;
	char ch_state,ch_city,new_line='\n';
	char str[1000]="Andaman And Nicobar:Andhra Pradesh:Arunachal Pradesh:Assam:Bihar:Chandigarh:Chhattisgarh:Dadar And Nagar Haveli:Daman and Diu:Delhi:Goa:Gujarat:Haryana:Himachal Pradesh:Jammu and Kashmir:Jharkhand:Karnataka:Kerala:Lakshadweep:Madhya Pradesh:Maharashtra:Manipur:Meghalaya:Mizoram:Nagaland:Orissa:Puducherry:Punjab:Rajasthan:Sikkim:Tamil Nadu:Telangana:Tripura:Uttar Pradesh:Uttarakhand:West Bengal";
	
	city_file=fopen("city.txt","r");
	sql_file=fopen("sqlcity.txt","w");
	
	//tblstate(str);
	
	if(city_file==NULL){
		printf("error opening the city file...");
		exit(0);
	}
		
	else if(sql_file==NULL){
		printf("error opening the sql file...");
			exit(0);
		}
	else{

	while(str[i]!='\0')     	
	{
		if(str[i]==':')
		{	
		printf("\n");
	
		i++;
		while((ch_city=fgetc(city_file))!='\n')
			{printf("%c",ch_city);
		
			}	
			printf("\n\n");
			
		}
		printf("%c",str[i]);
		i++;
	}
		
	
		
		
	
	fclose(sql_file);
	fclose(city_file);
	
}
	
	
	
}

void tblstate(char *str){
	int i=0;
	while(str[i]!='\0')     	
	{
		if(str[i]==':')
		{	
		printf("\n");
		i++;
	
	}
			printf("%c",str[i]);
		i++;

	}
}


 
 