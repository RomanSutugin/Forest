#include<iostream>
using namespace std;

#define offset "\t\t\t\t\t"
#define ELOCHKA
void main()
{
	setlocale(LC_ALL, "Russian");
#if defined ELOCHKA
	cout <<offset<<"В лесу родилась елочка,\n";
	cout <<offset<<"В лесу она росла,\n";
	cout <<offset<<"Зимой и летом стройная,\n";
	cout <<offset<<"Зеленая была.\n";
	cout << endl;
	cout <<offset<<"Метель ей пела песенку:\n";
	cout <<offset<<"\"Спи, елочка, бай-бай!\"\n";
	cout <<offset<<"Мороз снежком укутывал:\n";
	cout <<offset<<"\"Смотри, не замерзай!\"\n";
	cout << endl;
	cout <<offset<<"Трусишка зайка серенький\n";
	cout <<offset<<"Под елочкой скакал.\n";
	cout <<offset<<"Порою волк, сердитый волк\n";
	cout <<offset<<"Рысцою пробегал.\n";
	cout << endl;
	cout <<offset<<"Чу! Снег по лесу частому\n";
	cout <<offset<<"Под полозом скрипит,\n";
	cout <<offset<<"Лошадка мохноногая\n";
	cout <<offset<<"Торопится, бежит.\n\n";
	cout <<offset<<"Везет лошадка дровенки,\n";
	cout <<offset<<"А в дровнях старичок,\n";
	cout <<offset<<"Срубил он нашу елочку\n";
	cout <<offset<<"Под самый корешок.\n\n";
	cout <<offset<<"Теперь она, нарядная,\n";
	cout <<offset<<"Hа праздник к нам пришла\n";
	cout <<offset<<"И много, много радости\n";
	cout <<offset<<"Детишкам принесла!\n";
#endif
	cout << "Привет";
}