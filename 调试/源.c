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
//栈区的默认使用规则：
//1.先使用高地址处的空间
//在使用低地址处的空间
//2.数组随着下标的增长，地址由低到高变化。
//void my_strcpy(char* dest, char* src) {
//	while (*src != '\0') {//这里利用了ascll值，当传过来的地址
//		//不断进行增加，arr2的最后为\0，而\0的ascll值为0，
//		//这时候就不会再进行传值，也就是strcpy函数的实现。
//		*dest = *src;
//		src++;
//		dest++;
//	}
//}
void my_strcpy(char* dest, char* src) {

	assert(dest != NULL);
	assert(src != NULL);//断言
	//如果这里的两个指针为空指针的话，就会进行报错
	while(*dest++= *src++) {
		;//这里的while语句的判断条件就是两个字符串的交换
		//而当arr2的\0赋值到*dest时，结果为false，所以就
		//停止了交换，但是有一个问题，就是如果arr2是一个
		//空指针，那么传进来，代码就会挂掉。
		//所以这里要用到assert断言语句
	}



}
int main() {
	char arr1[] = "############";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}