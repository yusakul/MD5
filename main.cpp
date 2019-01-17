#include <stdio.h>
#include "MD5.h"
#include <windows.h>

using namespace md5;

int main()
{
	MD5 md5;
	unsigned char w[] = "some memory data";
	// ����һ���ڴ����ݵ�md5
	puts(md5.digestMemory(w, sizeof(w)));

	// ����string��md5
	char str[] = "hello";
	printf("%s\n",md5.digestString(str));

	// print the digest for a binary file on disk.
	char path[] = "C:\\WINDOWS\\notepad.exe";
	puts(md5.digestFile(path));

	system("pause");
	return 0;
}
