/*Lab8-2 
By: Suphitsara Cheevanantaporn 61070230*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	struct student
	{
		char f_name[60]; //ชื่อ มีความยาวไม่เกิน 60 ตัวอักษร
		char s_name[60]; //นามสกุล มีความยาวไม่เกิน 60 ตัวอักษร
		char gender[6]; //เพศ
		char age[5]; //อายุ
		char id[12]; //รหัสนักศึกษา มีความยาวไม่เกิน 12 ตัวอักษร
		float gpa; //เกรดเฉลี่ย
	};
	struct student no[20], temp;
	for (int i = 0; i < 20; i++)
	{
		scanf("%s %s %s %s %s %f", no[i].f_name, no[i].s_name, no[i].gender, no[i].age, no[i].id, &no[i].gpa);
	}
	char act[7], c; // บรรทัดที่ 21 
	scanf("%s", &act);
	int len;
	len = strlen(act);
	for (int i = 0; i < len; i++)//0-6
	{
		c = tolower(act[i]); //แปลงให้เป็นตัวเล็ก
		act[i]=tolower(c);
	}
	if (strcmp(act, "name") == 0)
	{
		for (int i = 1; i < 20; i++)//1-20
			for (int j = 0; j < 19; j++)//0-19
			{
				if (strcmp(no[j].f_name, no[j+1].f_name)>0)
					{
						temp = no[j];
						no[j] = no[j+1];
						no[j+1] = temp;
					}			
			}
	}
	else if (strcmp(act, "surname") == 0)
	{
		for (int i = 1; i < 20; i++)
			for (int j = 0; j < 19; j++)
			{
				if (strcmp(no[j].s_name, no[j+1].s_name)>0)
					{
						temp = no[j];
						no[j] = no[j+1];
						no[j+1] = temp;
					}			
			}
	}
	else if (strcmp(act, "id") == 0)
	{
		for (int i = 1; i < 20; i++)
			for (int j = 0; j < 19; j++)
			{
				if (strcmp(no[j].id, no[j+1].id)>0)
					{
						temp = no[j];
						no[j] = no[j+1];
						no[j+1] = temp;
					}			
			}
	}
	for (int i = 0; i < 20; i++)
	{
		char combo;
		combo = no[i].f_name[0];//
		if (strcmp(no[i].gender, "Male")==0)
			printf("Mr ");
		else
			printf("Miss ");
		printf("%c %s ", combo, no[i].s_name);
		printf("(%s) ID: %s GPA %.2f\n", no[i].age, no[i].id, no[i].gpa);
	}


}