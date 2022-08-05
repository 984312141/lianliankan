#include<stdio.h>
#include<easyx.h>
#include<Windows.h>


int main()
{
	//1、获取需要捕获的窗口句柄
	HWND gameWnd;
	gameWnd = FindWindow(NULL, "QQ水浒");
	//gameWnd = (HWND)0x00120922;




	//2、获取到窗口图像
	HDC gameDc = GetDC(gameWnd);
	IMAGE image(800,600);

	HDC imageDc = GetImageHDC(&image);

	BitBlt(imageDc, 0, 0, 800, 600, gameDc, 0, 0, SRCCOPY);

	initgraph(800, 600);
	putimage(0, 0, &image);


	while (1);


	return 0;
}

