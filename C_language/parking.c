#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_parking() {

	int in_hour, in_min;
	int out_hour, out_min;
	int discount, night =0;
	int hour, min, all_time;
	int fee = 0;

	// ����ǥ
	printf("---[������ �̿� �ȳ���]---\n");
	printf("[�⺻ ���� (30��) : 500��]\n[�ʰ� ���� (15��) : 300��]\n");
	printf("[��ȣ���� ������ 4�ð� ����]\n[��ȣ���� ������ 18:00 ~ 24:00(�߰�): 1000�� �߰�]\n");
	printf("--------------------------------------------\n");

	// ��ȣ���� ���� ����
	printf("\n[��ȣ���� ���� ����]\nex) �ִ� -> 1\n    ���� -> 0\n");
	scanf("%d", &discount);

	// �Է°��� �ùٸ��� Ȯ��
	if (discount != 1 && discount != 0) {
		printf("[Error] ��ȣ���� ���� ���δ� 1 �Ǵ� 0�� �Է� �����մϴ�.\n");
		return 1;
	}

	// �����ð�
	printf("\n[���� �ð��� �Է��ϼ���]\nex) 13�� 30�� -> 1330\n");
	scanf("%2d %2d", &in_hour, &in_min);

	// �����ð�
	printf("\n[���� �ð��� �Է��ϼ���]\nex) 17�� 30�� -> 1730\n");
	scanf("%2d %2d", &out_hour, &out_min);

	// ���� �ð� ���
	if (out_hour < in_hour) {
		out_hour += 24;
	}

	hour = out_hour - in_hour;
	min = out_min - in_min;
	
	if (min < 0) {
		min += 60;
		hour -= 1;
	}
	all_time = hour * 60 + min;

	// ���� ��� ���
	// ��ȣ���� ���� ��
	if (discount == 1) {
		// 4�ð� ����
		if (hour <= 4) {
			fee = 0;
		}
		// 4�ð� ���ĺ��ʹ� �⺻ ��� ����
		else{
			fee = 300 * ((all_time - 240) / 15); // �ʹ� 4�ð� ����
			// �߰� �߰� ���
			if (out_hour > 18) {
				fee += 1000;                   
				night += 1;
			}
		}
	}
	// ��ȣ���� �̼��� ��
	else {
		fee = 500 + 300 * ((all_time-30) / 15); // �ʹ� 30�� 500��
	}

	// ���� ��� ���
	printf("\n> ������ �̿� �ð�: %d�ð� %d�� \n", hour, min);
	printf("> ��ȣ���� ���� : %s \n", discount ? "����(4�ð� ����)" : "����");
	printf("> �߰� �߰� ��� : +%s \n", night ? "1000��" : "0��");
	printf("> ���� ���� ��� : %d�� \n", fee);

	return 0;
}