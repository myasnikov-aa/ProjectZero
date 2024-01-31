#pragma once
void ShowArrayInt(int* ar, int size);
void ShowArrayChar(char* ar, int size);
void ShowArrayDouble(double* ar, int size);
void InitArrayInt(int* ar, int size);
void InitArrayChar(char* ar, int size);
void InitArrayDouble(double* ar, int size);
int MinFromArrayInt(int* ar, int size);
char MinFromArrayChar(char* ar, int size);
double MinFromArrayDouble(double* ar, int size);
int MaxFromArrayInt(int* ar, int size);
char MaxFromArrayChar(char* ar, int size);
double MaxFromArrayDouble(double* ar, int size);
void SortArrayInt(int* ar, int size);
void SortArrayChar(char* ar, int size);
void SortArrayDouble(double* ar, int size);
void RedactArrayInt(int* ar, int index);
void RedactArrayChar(char* ar, int index);
void RedactArrayDouble(double* ar, int index);
#ifdef INTEGER
#define show ShowArrayInt
#define init InitArrayInt
#define minfrom MinFromArrayInt
#define maxfrom MaxFromArrayInt
#define sort SortArrayInt
#define redact RedactArrayInt
#endif
#ifdef CHAR
#define show ShowArrayChar
#define init InitArrayChar
#define minfrom MinFromArrayChar
#define maxfrom MaxFromArrayChar
#define sort SortArrayChar
#define redact RedactArrayChar
#endif
#ifdef DOUBLE
#define show ShowArrayDouble
#define init InitArrayDouble
#define minfrom MinFromArrayDouble
#define maxfrom MaxFromArrayDouble
#define sort SortArrayDouble
#define redact RedactArrayDouble
#endif