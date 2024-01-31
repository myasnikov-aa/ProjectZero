#include <iostream>
#include <io.h>
using namespace std;
int main()
{
	struct _finddata_t fileinfo;
	char path[100];
	char mask[20];

	// Запросим путь
	cout << "Enter full path (for example, D:\):\n";
	cin >> path;
	// Запросим маску файлов
	cout << "Enter mask (for example, *.* or *.txt):";
	cin >> mask;
	// Соединим две строки: путь и маску
	strcat_s(path, mask);
	long done = _findfirst(path, &fileinfo);

	while (done != -1) {
		cout << fileinfo.name << "\n";
		done = _findnext(done, &fileinfo);
	}
	return 0;
}