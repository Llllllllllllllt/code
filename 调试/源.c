#include <stdio.h>
#include<stdlib.h>
#include<assert.h>
//int main() {
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 ,10};
//	for (i = 0; i <= 12; i++) {
//		printf("hehe%d\n",i);
//		arr[i] = 0;
//
//	}
//	system("pause");
//	return 0;
//}
//ջ����Ĭ��ʹ�ù���
//1.��ʹ�øߵ�ַ���Ŀռ�
//��ʹ�õ͵�ַ���Ŀռ�
//2.���������±����������ַ�ɵ͵��߱仯��
//void my_strcpy(char* dest, char* src) {
//	while (*src != '\0') {//����������ascllֵ�����������ĵ�ַ
//		//���Ͻ������ӣ�arr2�����Ϊ\0����\0��ascllֵΪ0��
//		//��ʱ��Ͳ����ٽ��д�ֵ��Ҳ����strcpy������ʵ�֡�
//		*dest = *src;
//		src++;
//		dest++;
//	}
//}
void my_strcpy(char* dest, char* src) {

	assert(dest != NULL);
	assert(src != NULL);//����
	//������������ָ��Ϊ��ָ��Ļ����ͻ���б���
	while(*dest++= *src++) {
		;//�����while�����ж��������������ַ����Ľ���
		//����arr2��\0��ֵ��*destʱ�����Ϊfalse�����Ծ�
		//ֹͣ�˽�����������һ�����⣬�������arr2��һ��
		//��ָ�룬��ô������������ͻ�ҵ���
		//��������Ҫ�õ�assert�������
	}



}
int main() {
	char arr1[] = "############";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}