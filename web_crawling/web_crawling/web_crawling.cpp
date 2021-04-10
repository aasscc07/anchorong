#include<iostream>
#include<urlmon.h>
#include<Windows.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>

#pragma comment(lib,"urlmon.lib")
using namespace std;
FILE* FILE_NUM;


int main(void)
{
	///////////////////////////////////////////////////////////////////////////////
	char char_char_A[50] = "D:\\coding\\crawling_image\\image_web_ads\\";
	FILE_NUM = fopen("C:\\anchorong\\web_ads.txt", "r");

	char file_NUM[30];
	fgets(file_NUM, 30, FILE_NUM);
	int a_int = 0;
	a_int = atoi(file_NUM);
	cout << a_int;
	//M_DOWNLOAD_IMAGE M_CLASS[M_DOWNLOAD_IMAGE_CLASS_ARRAY];
	/*FILE** FILE_FIRST = (FILE**)malloc(sizeof(FILE*) * 250);*/
	FILE* FILE_FIRST[30];
	//char** character_C = (char**)new char[100][100];
	//char** character_B = (char**)new char[100][100];
	char character_A[100][100];
	char character_B[100][100];
	char character_C[100][100];
	//=============================================================================//

	
	for (int i = 0; i < a_int; i++)
	{
		sprintf(character_A[i], "%s%d%s", char_char_A,i + 1, ".txt");

		FILE_FIRST[i] = fopen(character_A[i], "r");
		fgets(character_B[i], 100, FILE_FIRST[i]);
		sprintf(character_C[i], "%s%d%s", "D:\\coding\\image\\", i + 1,".png");
		URLDownloadToFileA(0, character_B[i], character_C[i], 0, 0);
		fclose(FILE_FIRST[i]);
		Sleep(100);
	}



	
	return 0;
}
