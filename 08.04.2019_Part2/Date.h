﻿#pragma once
#include<iostream>
#include <iomanip>
#include<Windows.h>
#include<ctime>
#include<cstring>
#include<fstream>
using namespace std;

//Разработать класс Date(дата).
//Класс должен содержать : конструктор по умолчанию, конструктор с параметрами, при необходимости реализовать деструктор и конструктор копирования.
//Добавить методы для :
//□	выполнения сложения и вычитания  двух дат
//□	добавления к дате и вычитания от даты целого числа дней
//□	метод для проверки на равенство  двух дат
//	вывод на экран информации об объекте
//□	отображения даты в американском или стандартном варианте
//□	для копирования объектов
//□	остальные методы на усмотрение разработчика(методы set и get)
//Написать интерфейс для работы с классом.Реализовать динамический массив объектов класса с возможностью добавления, удаления объектов из массива.
//Реализовать возможность записи информации об объектах массива в текстовый файл, бинарный файл.

class date {
private:
	int day;
	int month;
	int year;
public:

};