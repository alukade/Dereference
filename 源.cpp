#include<stdio.h>//解引用是返回内存地址中保存的值。个人理解就是将指针p中的地址给解析出来
int main()
{
	int array[4][5] = { 0 };
	int i, j, k = 0;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			array[i][j] = k++;
		}
	}
	printf("*(array+1):%p\n", *(array + 1));//原来是00，取下一行就是10了
	printf("array[1]:%p\n", &array[1]);//相当于第二行第一个元素的地址
	printf("&array[1][0]:%p\n", &array[1][0]);//第二行第一个元素的地址
	printf("**(array+1):%d\n", **(array + 1));//取10数组里面的值

	return 0;
}