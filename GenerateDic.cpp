/*
生成8位26个字母和数字的全排列（密钥）代码（非递归高效直接）
用C语言或C++，生成一个8位的26个字母和数字的全排列的原代码，例如从：00000000到ZZZZZZZZ。

说明：生成的这个字典会非常大，有36^8条记录，估计要1T的硬盘，跑一个晚上看看 
	这个方法比递归更高效，更直接。 
							——惠州学院 13网络工程1班 吴成兵  2015/9/30
*/
#include<iostream>
#include<cstdio>

using namespace std;

char c[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int a7,a6,a5,a4,a3,a2,a1,a0;

int main()
{
	/*启用下面这条语句，全排列会自动保存在dic.txt中*/
	//freopen("dic.txt","w",stdout);
	
	for(a7=0;a7<36;a7++)\
	for(a6=0;a6<36;a6++)\
	for(a5=0;a5<36;a5++)\
	for(a4=0;a4<36;a4++)
	for(a3=0;a3<36;a3++)
	for(a2=0;a2<36;a2++)
	for(a1=0;a1<36;a1++)
	for(a0=0;a0<36;a0++)
	{
		//printf("%c%c%c%c%c%c%c%c\n",			\
		c[a7],c[a6],c[a5],c[a4],c[a3],c[a2],c[a1],c[a0]);
		
		/*putchar比printf至少要快一倍，要freopen重定向才能达到效果*/
		putchar(c[a7]);putchar(c[a6]);putchar(c[a5]);putchar(c[a4]);\
		putchar(c[a3]);putchar(c[a2]);putchar(c[a1]);putchar(c[a0]);putchar('\n');
	}
	return 0;
}
