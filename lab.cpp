#include <iostream>
#include <fstream>// функционал для считывания данных
#include <cmath>
using namespace std;

double log(double a, double b)
{
    return log(b) / log(a);
}



int main()
{
    setlocale(LC_ALL, "ru");

    ifstream file1;// для чтения
    ofstream file2("R.txt");
    ofstream file3("stepen.txt");// для записи


    double R;
    double a = 3;
   


        cout << "Введите значение R: ";
        cin >> R;

        file2 << R;
        file2.close();

        file1.open("R.txt");
        if (file1.fail())
        {
            cout << "Не удалось открыть файл”
            return 1;
        }

        file1 >> R;
        file1.close();

        file3 << "X = " << log(a, R);
        file3.close();

        if (R <= 0)
        {
           cout << "Введите положительное значение R";
        }


      cout << "x = " << log(a, R) << "Результат записан в stepen.txt";

  

    return 0;

}




2) #define _CRT_SECURE_NO_WARNINGS// от ошибки 4996
#include <stdio.h> //ввод вывод 
#include <locale.h> // для задач с локализацией

int main()
{
	setlocale(LC_ALL, "ru");

	float routeLength = 100, distanceInOneDay = 10;

	int days = 1;

	float percent;

	FILE*fail1, * fail2;// определяет поток

	fail2= fopen("pohod.txt", "r");




	if (fail2 == 0)
	{
		printf("Ошибка при окрытии файла\n");//возвращает количество символов
		return 1;
	}
	fscanf (fail2, "%f%f", &routeLength, &distanceInOneDay);//. считывает данные из стандартного потока, %f вывода чисел с плавающей точкой

	fclose(fail2);

	printf("\n\tДлинна пути = %0.0f\n\tПройденное расстояние за 1 день = %0.0f\n", routeLength, distanceInOneDay);// горизонт.табуляция/t,/n новая строка

	fail1= fopen("result.txt", "w");

	for (distanceInOneDay; distanceInOneDay < routeLength; distanceInOneDay += percent)

	{
		percent = (distanceInOneDay / 100) * 15;
		days++;
	}
	fprintf(fail1, "Путешественник потратит на маршрут\n\t %d дней", days);// форматирует и выводит набор символов,%d читать десятичное число

	printf("Результат записан в файл result.txt)
	return 0;
}

