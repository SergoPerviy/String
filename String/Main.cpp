#include <iostream>
#include <string> //Библиотека, предназначенная для работы со строками С++ (class string)

std::string repeat_str(std::string str, int repeats) {
	std::string result;
	for (int i = 0; i < repeats; i++) {
		result += str;
	}
	return result;
}

int main() {
	system("chcp 1251>null");
	int n{};

	/*
	Строки языка С
	Строка в языке программирования С - упорядоченный набор символьных элиментов, объеденных в массив,
	в конце которого располагается нуль-терминатор ('\0')
	*/

	char cstr1[4]{ 'H', 'i', '!', '\0'};
	for (int i = 0; i < 3; i++) {
		std::cout << cstr1[i];
	}
	std::cout << std::endl;

	char cstr2[] = "Hello Wrld!";
	
	std::cout << cstr1 << std::endl;
	std::cout << cstr2 << std::endl;

	/*
	Строки языка С++
	Конкаинация - процесс слияния двух или более строк в одну новую. Как правило, представлена в виде операции сложения.
	*/
	
	std::string mystr = "Hello World!";
	std::cout << mystr << std::endl;
	std::string concat1 = "Hello ";
	std::string concat2 = "World!";
	std::cout << concat1 + concat2 << std::endl;

	/*
	Ввод строки в консоль
	*/
	
	std::cout << "Введи имя -> ";
	std::string name;
	std::getline(std::cin, name);
	std::cout << "Привет, " << name << "!\n";

	std::cout << "Введи свой возраст -> ";
	int age{};
	std::cin >> age;
	std::cout << "Когда то и мне было " << age << "...\n";

	std::cin.ignore(); //применяется только в том случае когда за cin идет getline

	std::cout << "Введите свою профессию -> ";
	std::string position;
	std::getline(std::cin, position);
	std::cout << position << "? Круто!\n";
	
	/*
	Методы строк
	Метод - функция, принадлежащая к какому-либо классу и вызываемая исключительно объектами 
	этого класса.
	*/
	
	std::string str = "Hello World!";

	/*
	Методы length и size возвращающие длину строки
	std::cout << str.length() << std::endl; //12
	std::cout << str.size() << std::endl; //12
	*/

	/*
	Метод insert, вставляющий подстроку в строку
	str.insert(3, "###");
	std::cout << str << std::endl; // Hel###lo World!
	*/

	/*
	Метод replace, заменяющий часть строки на подстроку
	str.replace(5, 3, "###");
	std::cout << str << std::endl; // Hello###rld!
	*/

	/*
	Метод find, возвращающий позицию первого вхождения подстроки в строку
	std::cout << str.find('l') << std::endl;// 2
	std::cout << str.find('l', 5) << std::endl;// 9 второе число в скобках это begin
	*/

	/*
	Метод rfind, возвращающий позицию последнего вхождения подстроки в строку
	std::cout << str.rfind('l') << std::endl;// 9
	std::cout << str.rfind('l', 5) << std::endl;// 3 второе число в скобках это begin
	*/

	/*
	Метод substr, пвозвращающий подстроку извлеченную из строки
	std::cout << str.substr(4) << std::endl; // o World!
	std::cout << str.substr(3, 5) << std::endl; // lo Wo
	*/

	/*
	Функции для работы со строками
	*/

	int num = 234;
	std::string numstr = std::to_string(num);
	std::cout << numstr << std::endl;
	std::cout << numstr[1] << std::endl;

	std::string s = "1111";
	int nums = std::stoi(s);
	std::cout << nums << std::endl;

	std::string casestr = "Hello!";
	for (int i = 0; i < casestr.length(); i++) {
		casestr[i] = std::tolower(casestr[i]); //tolower - преобразует строку в нижний регистр. toupper - в верхний.
	}
	std::cout << casestr << std::endl;	

	/*
	Задача 1. Создайте функцию, которая принемает строку и число N, возвращает строку N раз.
	*/

	std::cout << "Задача 1.\nВведите строку -> ";
	std::string str1;
	std::getline(std::cin, str1);
	std::cout << "Введите количество повторений строки -> ";
	std::cin >> n;
	std::cout << repeat_str(str1, n) << std::endl;

	return 0;
}