// #include<stdio.h>
// int main()
// {
//       int ch;
//       FILE *fp1,*fp2,*fp3;
//       fp1=fopen("lab1.txt","r");
//       fp2=fopen("lab2.txt","r");
//       fp3=fopen("lab3.txt","a");   
//       if(fp1==NULL||fp3==NULL||fp2==NULL)
//             printf("File does not exist..");
//       else
//             while((ch=fgetc(fp1))!=EOF)
//             {
//                   fputc(ch,fp3);
//             }
//             while((ch=fgetc(fp2))!=EOF)
//             {
//                   fputc(ch,fp3);
//             }
//       printf("File copied.....");
//       return 0;
// }


// #include<stdio.h>
// struct stud
// {
//       int rno;
//       float per;
//       char name[20],add[20];
// }s;
// int main()
// {
//       FILE *fp;
//       fp=fopen("lab1.txt","w");
//       printf("Enter record of student:\n");
//       printf("\nEnter student number : ");
//       scanf("%d",&s.rno);
//       printf("\nEnter name of student: ");
//       scanf("%s",s.name);
//       printf("\nEnter student address : ");
//       scanf("%s",s.add);
//       printf("\nEnter percentage of student : ");
//       scanf("%f",&s.per);
//       int m=10;
//       fprintf(fp,"%d\n%s\n%s\n%f",s.rno,s.name,s.add,s.per);
//       printf("\nRecord stored in file...");
//       fclose(fp);
//       return 0;
// }