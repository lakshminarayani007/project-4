#include<stdio.h>
int main()
{
FILE *fp;
char feedback[1000];
fp=fopen("feedback.txt","w");
if(fp==NULL)
{
printf("file cannot be opened\n");
return 0;
}
fprintf(fp,"about the c programming feedback\n");
fprintf(fp,"1.it is helpful to me\n");
fprintf(fp,"2.it esay to understand while teaching in board\n");
fprintf(fp,"3.but little bit difficult to implement in the coding\n");
fprintf(fp,"4.there is some issues in compiler sometimes\n");
fprintf(fp,"5.okay not bad\n");
fclose(fp);

fp=fopen("feedback.txt","a");
if(fp==NULL)
{
printf("file cannot be opened\n");
return 0;
}
fprintf(fp,"c sir feedback\n");
fprintf(fp,"1.like in c programming feedback\n");
fprintf(fp,"2.when having doubt in coding sir is not available for all \n");
fprintf(fp,"3.i need some support to improve me\n");
fprintf(fp,"4.his teaching is okay \n");
fprintf(fp,"5.i need little bit practice\n");
fclose(fp);


fp=fopen("feedback.txt","r");
if(fp==NULL)
{
printf("cannot be opened\n");
return 0;
}
while(fgets(feedback,sizeof(feedback),fp)!=NULL)
{
printf("%s",feedback);
}
fclose(fp);
return 0;
}
