#include <iostream>
using namespace std;
#define HOME_WORK_TASK_1
#define HOME_WORK_TASK_2
#define HOME_WORK_TASK_3


void main()

{
	setlocale(LC_ALL, "RUS");
#ifdef HOME_WORK_TASK_1
	int n; 
	int f = 1;
	cout << "Введите число: "; cin >> n;

	for (int i = 1; i <= n; i++)

	{
		f *= i;		
	}
	cout << "факториал числа "<< f << "\t" << endl;
	cout << endl;
	
#endif // HOME_WORK_TASK_1

#ifdef HOME_WORK_TASK_2

	double a, s, b=1;
	cout << "Введите число: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> s;
	if (s < 0) 
	{
		a = 1 / a;
		s = -s;
	}
	
	for (int i = 1; i <= s; i++)

	{
		b *= a;		
	}
	cout << "степень: " << b << "\t";
	cout << endl;

#endif // HOME_WORK_TASK_2

#ifdef HOME_WORK_TASK_3
	
	for (int j = 0; j < 256; j++)
		
	{
		if (j % 16 == 0) cout << endl;
		cout << char(j) << "-" << j << " ";
	}
	cout << endl;
	
	
#endif // HOME_WORK_TASK_3
}