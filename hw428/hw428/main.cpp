#include <stdio.h>
#include <stdlib.h>
int main()
{
	int manager, hourly, commision, pieceworker, code , i, j,hour;
	float money, total, missionmoney, hourmoney, hourwages,piecemoney,pay=0;
	printf("enter fixed weekly salary:");
	scanf_s("%f", &money);
	printf("enter how much money every hour:");
	scanf_s("%f", &hourmoney);
	printf("enter gross weekly sales:");
	scanf_s("%f", &total);
	for (i = 1; i < 9999; i++)
	{
	
		printf("enter employee code(1.manager  2.hourly worker  3.commission  4.pieceworker (-1 to end)):");
		scanf_s("%d", &code);
		if (code == -1)
		{
			printf("���q�o�P�n��I���~����%.2f", pay);
			break;
		}
		switch (code)
		{
		case 1:
			printf("��%d�����u�Omanager,���q�n��I�L���~���O%.2f\n\n", i, money);
			pay = pay + money;
			break;
		case 2:
			printf("enter what hours he/she work:");
			scanf_s("%d", &hour);
			if ((hour <= 40) && (hour >= 0))
			{
				hourwages = hour * hourmoney;
			}
			else
			{
				hourwages = 40 * hourmoney + (hour - 40) * 1.5 * hourmoney;
			}
			printf("��%d�����u�Ohourly worker,���q�n��I�L���~���O%.2f\n\n", i,hourwages);
			pay = pay + hourwages;
			break;
		case 3:
			missionmoney = 250 + total * 0.057;
			printf("��%d�����u�Ocommission,���q�n��I�L���~���O%.2f\n\n", i, missionmoney);
			pay = pay + missionmoney;
			break;
		case 4:
			int piecesales;
			float piececount;
			printf("�п�J�s�y�ӫ~������");
			scanf_s("%d", &piecesales);
			printf("�п�J�s�y�ӫ~�ƶq:");
			scanf_s("%f", &piececount);
			piecemoney = piececount * piecesales;
			printf("��%d�����u�Opiece worker,���q�n��I�L���~���O%.2f\n\n", i,piecemoney);
			pay = pay + piecemoney;
			break;
		default :
			printf("error\n\n");
			break;
		}
	}
}