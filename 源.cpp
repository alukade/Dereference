#include<stdio.h>//�������Ƿ����ڴ��ַ�б����ֵ�����������ǽ�ָ��p�еĵ�ַ����������
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
	printf("*(array+1):%p\n", *(array + 1));//ԭ����00��ȡ��һ�о���10��
	printf("array[1]:%p\n", &array[1]);//�൱�ڵڶ��е�һ��Ԫ�صĵ�ַ
	printf("&array[1][0]:%p\n", &array[1][0]);//�ڶ��е�һ��Ԫ�صĵ�ַ
	printf("**(array+1):%d\n", **(array + 1));//ȡ10���������ֵ

	return 0;
}