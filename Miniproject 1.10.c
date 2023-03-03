#include<stdio.h>

int main(){
	
	int di=10, da=20, ka=30, as=40, ge=50, x=1, v, a, b, c, d=0, e=0, f=0, g=0, h=0, count=10, nid[50]; 
	
	printf("\n\t\t\t-------ICT Club Presidential Election-------\n\n\n");
	printf("press 1 vote for Dinuka.\n\n");
	printf("press 2 vote for Danuki.\n\n");
	printf("press 3 vote for kavinda.\n\n");
	printf("press 4 vote for Asama.\n\n");
	printf("press 5 vote for Geethma.\n\n\n\n");
	
	printf("\t\t----------Instruction----------\n\n");
	printf("You can vote 3 times, During the 3 time you can select same person if you want\n\n");
	printf("Applicants can't vote\n\n\n");
	
	printf(" Dinuka's Club ID Number  : %d\n",di);
	
	printf(" Danuki's Club ID Number  : %d\n",da);
	
	printf(" Kavinda's Club ID Number : %d\n",ka);
	
	printf(" Asama's Club ID Number   : %d\n",as);
	
	printf(" Geethma's Club ID Number : %d\n",ge);
	
	
	printf("\n\n            -------------------------------------------\n");
	
	while(x<=count){
		printf("\n\n");
		printf("%d.Enter your Club ID Number :",x);
		scanf("%d",&v);
	
        if (!((v==di)|| (v==da)|| (v==ka)|| (v==as)|| (v==ge))){
		  
			printf("\nEnter your frist vote:\n");
	        scanf("%d",&a);
	        printf("Enter your second vote:\n");
	        scanf("%d",&b);
	        printf("Enter your third vote:\n");
	        scanf("%d",&c);
	        printf("\n\n\n");
	

	
    	switch(a){
		case 1:
			d=d+1;
		break;
		case 2:
			e=e+1;
		break;
		case 3:
			f=f+1;
		break;
		case 4:
			g=g+1;
		break;
		case 5:
			h=h+1;
		break;
		default:
		printf("wrong Number...!\n");
	}
	
		switch(b){
		case 1:
			d=d+1;
		break;
		case 2:
			e=e+1;
		break;
		case 3:
			f=f+1;
		break;
		case 4:
			g=g+1;
		break;
		case 5:
			h=h+1;
		break;
		default:
		printf("wrong Number...!\n");
	}

	}
     
     else{
     	printf("\n\tYou can't vote\n");
     	count++;
	 }
    
		x++;
	}
	
	printf("\t---------Voting Results-----------");	
printf("\n\n\n");
printf("  Dinuka:%d ",d);
printf("votes\n");
printf("  Danuki:%d ",e);
printf("votes\n");
printf("  Kavinda:%d ",f);
printf("votes\n");
printf("  Asama:%d ",g);
printf("votes\n");	
printf("  Geethma:%d ",h);
printf("votes\n");

printf("\n\n\n");
	if(d>e && d>f &&  d>g && d>h) 
  printf("The selected president for the year 2022: Dinuka"); 
 
 else 
  if(e>f && e>g && e>h) 
   printf("The selected president for the year 2022: Danuki"); 
 
 else 
  if(f>g && f>h) 
   printf("The selected president for the year 2022: Kavinda"); 
 
 else 
  if(g>h) 
   printf("The selected president for the year 2022: Asaama"); 
 
 else 
  printf("The selected president for the year 2022: Geethma");

	
	return 0;
}
