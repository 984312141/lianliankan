#include<stdio.h>
#include<easyx.h>
#include<Windows.h>


int main()
{
	//1����ȡ��Ҫ����Ĵ��ھ��
	HWND gameWnd;
	gameWnd = FindWindow(NULL, "QQˮ�");
	//gameWnd = (HWND)0x00120922;




	//2����ȡ������ͼ��
	HDC gameDc = GetDC(gameWnd);
	IMAGE image(800,600);

	HDC imageDc = GetImageHDC(&image);

	BitBlt(imageDc, 0, 0, 800, 600, gameDc, 0, 0, SRCCOPY);

	initgraph(800, 600);
	putimage(0, 0, &image);


	while (1);


	return 0;
}

