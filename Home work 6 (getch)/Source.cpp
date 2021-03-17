#include <iostream>
using namespace std;
#include <conio.h>
#define HOME_WORK_TASK_1
#define HOME_WORK_TASK_2
#define Escape 27
#define Space 32
#define Enter 13
#define ArrowUp 72
#define ArrowDown 80
#define ArrowLeft 75
#define ArrowRight 77



void main()

{
	setlocale(LC_ALL, "RUS");

#ifdef HOME_WORK_TASK_1
	char k;
	do 
	{
		k = _getch(); //ASCII
		cout << (int)k << "\t" << k << endl;
	} while (k != Escape);
#endif // HOME_WORK_TASK_1

#ifdef HOME_WORK_TASK_2
    char key;
    
    do
    {
        key = _getch();
        if (key == 'w' || key == 'W' || key == ArrowUp)
        {
            cout << "Вперед" << endl;
        }
        else if (key == 's' || key == 'S' || key == ArrowDown)
        {
            cout << "назад" << endl;
        }
        else if (key == 'a' || key == 'A' || key == ArrowLeft)
        {
            cout << "Влево" << endl;
        }
        else if (key == 'd' || key == 'D' || key == ArrowRight)
        {
            cout << "Вправо" << endl;
        }
        else if (key == Space)
        {
            cout << "Прыжок" << endl;
        }
        else if (key == Enter)
        {
            cout << "Огонь" << endl;

        }
        else 
        {
            if (key != -32 && key != Escape) cout << "Error" << endl;
            
        }
    } while (key != Escape);

#endif // HOME_WORK_TASK_2*/
}