#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable: 4996)
int main(void) {
	srand((int)time(NULL));
	int i;
	int ply;
	int win = 0;
	int draw = 0;
	int game = 0;
	char res;
	const char* choice[3] = {"����","����","��"};
	int com = rand() % 3;
	
	printf("������ 1, ������ 2, ���� 3: ");
	scanf("%d", ply);
	if (ply == com - 1 || ply == 3 && com == 1) {
		res = "����� �̰���ϴ�!";
		win++;
	}
		
	else if (ply == com) {
		res = "�����ϴ�!";
		draw++;
	}
		
	else
		res = "����� �����ϴ�!";

	for (i = 0; i < 100; i++)
		printf("����� %s ����, ��ǻ�ʹ� %s ����, %s \n", choice[ply-1], choice[com], res);

	printf("������ ���: %d��, %d��", win, draw);
	return 0;
	
	/*
	int w;
	int num = 1;
	int h = 0;
	int y = 0;
	int arr[10][10] = { 0, };
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d", &w);

	for (y; y < w; y++) {
		arr[h][y] = num++;
	}
	y = y - 1;
	h = h + 1;
	for (h; h < w; h++) {
		arr[h][y] = num++;
	}
	w = w - 1;
	h = h - 1;
	y = y - 1;

	for (y; y >= 0; y--) {
		arr[h][y] = num++;
	}
	y = y + 1;
	for (h; h > 0; h--) {
		arr[h][y] = num++;
	}
	h = h + 1;
	y = y + 1;
	*/

	//for (int all = 0; all < 1;) { // 4-7, 5-9 �̷������� ����ϴ� Ƚ���� Ȧ���� ����/*wtse * 2 - 1*/
	//	for (y_i = 0; y_i < wtse; y_i++) { // ��++, 1~4
	//		arr[h_i][y_i] = num++; // 1~4 �ֱ�
	//		all++; // 1��
	//	}
	//	y_i -= 1;
	//	h_i += 1;

	//	for (j = h_i; j <= wtse - h_i; j++) {
	//		arr[j][y_i] = num++;
	//	}
	//	j -= 1;
	//	y_i -= 1;
	//	for (int k = y_i; k >= 0; k--) {
	//		arr[j][k] = num++;
	//	} 

	//}
	/*
	for (int h = 0; h < w; h++)
	{
		for (int y = 0; y < w; y++)
			printf("%3d ", arr[h][y]);
		printf("\n");
	}
	*/
}
