// #include "myheader.h" // ����� ���� ��� ����
#include <stdio.h> // ǥ�� ���̺귯�� ��� ����

// 3�� (����, �ڷ���, ���)

int main_3(void)
{
	///// ��ȣ, ����, 16����, 8���� ///
	//printf("%d\n", 15);  // ��ȣ���� ����
	//printf("%u\n", -15);  // ��ȣ�ִ� ����
	//printf("%x\n", 15);  // 16����          
	//printf("%o\n", 15);  // 8����


	///// �˾Ƶθ� ������	///
	/*printf("%d\n", 65);  // 65
	printf("%c\n",65);  // A 
	printf("%c\n",97);  // a*/

	/// �ʸ� ������ ///
	/*int t, s, m, h;
	printf("�ʸ� �Է��ϼ���: ");
	scanf_s("%d", &t);
	
	h = (t / 3600);
	m = (t % 3600)/ 60;
	s = (t % 3600)% 60;

	printf("%d�ʴ� %d�ð� %d�� %d���Դϴ�.\n", t, h, m, s);*/


	/////�ý��ð� /////
	/// ��� ���ϱ� ///
	/*int data, algo, net, num;
	int sum;
	float mean;

	printf("�й�, �ڷᱸ��, �˰���, ��Ʈ��ũ ������ �Է��Ͻÿ�.");
	scanf_s("%d %d %d %d", &num, &algo, &net, &data);

	sum = algo + net + data;
	mean = sum / 3.0;

	printf("�й�: %d\n", num);
	printf("���: %.2f\n", mean);*/


	/// BMI ���ϱ� ///
	/*int kg, cm;
	float bmi;
	printf("Ű�� �����Ը� �Է��Ͻÿ�.\n");
	scanf_s("%d %d", &cm, &kg);

	bmi = (float)kg / ((cm/100) * (cm/100));
	printf("BMI: %.2f\n", bmi);*/


	/// �ﰢ���� ���� ���ϱ� ///
	/*int width, height;
	float area;
	printf("�ﰢ���� �ظ�� ���̸� �Է��Ͻÿ�.\n");
	scanf_s("%d %d", &width, &height);

	area = width * height / 2;

	printf("�ﰢ���� ���̴� %.2f", area);*/

	

}