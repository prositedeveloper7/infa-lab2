#include <iostream>
using namespace std;


void exercise_1()
{
	int X, Y, Z;
	cout << "Введите три числа (X, Y, Z): ";
	cin >> X >> Y >> Z;

	if (X == 0)
	{
		cout << "0 находится на первом месте (X)" << endl;
	}
	else if (Y == 0)
	{
		cout << "0 находится на втором месте (Y)" << endl;
	}
	else if (Z == 0)
	{
		cout << "0 находится на третьем месте (X)" << endl;
	}
	else {
		cout << "Нет нуля среди введенных чисел" << endl;
	}

}

void exercise_2()
{
	int K, L, N;
	cout << "Введите три числа (K, L, N): ";
	cin >> K >> L >> N;

	int maxIndex, minIndex;

	if (K >= L && K >= N)
	{
		maxIndex = 1;
	}
	else if (L >= K && L >= N)
	{
		maxIndex = 2;
	}
	else if (N >= K && N >= L)
	{
		maxIndex = 3;
	}

	if (K <= L && K <= N)
	{
		minIndex = 1;
	}
	else if (L <= K && L <= N)
	{
		minIndex = 2;
	}
	else if (N <= K && N <= L)
	{
		minIndex = 3;
	}
	cout << "Наибольшее число находится на позиции: " << maxIndex << endl;
	cout << "Наименьшее число находится на позиции: " << minIndex << endl;


}

void exercise_3()
{
	int Y, Z;
	cout << "Введите два числа (Y, Z): ";
	cin >> Y >> Z;


	if (Y > Z)
	{
		Y = (Y + Z) / 2;
		Z = 2 * (Y * Z);
	}
	else
	{
		Z = (Y + Z) / 2;
		Y = 2 * (Y * Z);
	}

	cout << "Y = " << Y << "; Z = " << Z << endl;

}

void exercise_4()
{
	int X, Y, Z;
	int positiveCount = 0;
	int negativeCount = 0;

	cout << "Введите три числа (X, Y, Z): ";
	cin >> X >> Y >> Z;
	if (X > 0) {
		positiveCount++;
	}
	else {
		negativeCount++;
	}

	if (Y > 0) {
		positiveCount++;
	}
	else {
		negativeCount++;
	}

	if (Z > 0) {
		positiveCount++;
	}
	else {
		negativeCount++;
	}

	cout << "Количество положительных чисел: " << positiveCount << std::endl;
	cout << "Количество отрицательных чисел: " << negativeCount << std::endl;


}

void exercise_5()
{
	int A, B, C;
	cout << "Введите три числа (A, B, C): ";
	cin >> A >> B >> C;

	int maxNum = A, minNum = A;

	if (B > maxNum)
	{
		maxNum = B;
	}
	else if (C > maxNum)
	{
		maxNum = C;
	}

	if (B < minNum)
	{
		minNum = B;
	}
	else if (C < minNum)
	{
		minNum = C;
	}

	int difference = maxNum - minNum;

	cout << "Разность: " << difference << endl;



}

void exercise_6()
{
	int K, M, N;

	cout << "Введите три числа: ";
	cin >> K >> M >> N;

	if (K > M)
		swap(K, M);
	if (K > N)
		swap(K, N);
	if (M > N)
		swap(M, N);

	cout << "K = " << K << " < M = " << M << " < N = " << N;


}

void exercise_7()
{
	int X, Y, Z;

	cout << "Введите три разных числа: ";
	cin >> X >> Y >> Z;

	int max1 = max(X, max(Y, Z));

	int max2;
	if (max1 == X)
	{
		max2 = max(Y, Z);
	}
	else if (max1 == Y)
	{
		max2 = max(X, Z);
	}
	else {
		max2 = max(X, Y);
	}
	cout << "Два наибольших числа: " << max1 << " и " << max2 << endl;



}

void exercise_8()
{
	int L, M, N;

	cout << "Введите три числа: ";
	cin >> L >> M >> N;

	if (L <= M && L <= N)
	{
		L = (M + N) / 2;
	}
	else if (M <= L && M <= N)
	{
		M = (L + N) / 2;
	}
	else {
		N = (L + M) / 2;
	}

	cout << "L = " << L << " M = " << M << " N = " << N << endl;

}

void exercise_9()
{
	int A, B, C, D;

	cout << "Введите четыре числа: ";
	cin >> A >> B >> C >> D;

	int max_value = max({ A, B, C, D });

	int resultA = A / max_value;
	int resultB = B / max_value;
	int resultC = C / max_value;
	int resultD = D / max_value;

	cout << "Результаты деления на наибольшее число " << max_value << endl;
	cout << "A = " << resultA << endl;
	cout << "B = " << resultB << endl;
	cout << "C = " << resultC << endl;
	cout << "D = " << resultD << endl;

}

void exercise_10()
{
	int A, B, C, D;

	cout << "Введите четыре числа: ";
	cin >> A >> B >> C >> D;

	if (A < B)
		swap(A, B);
	if (A < C)
		swap(A, C);
	if (A < D)
		swap(A, D);
	if (B < C)
		swap(B, C);
	if (B < D)
		swap(B, D);
	if (C < D)
		swap(C, D);

	cout << "A = " << A << " > B = " << B << " > C = " << C << " > D = " << D << endl;


}

void exercise_11()
{
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	if (x1 == x2 || y1 == y2)
	{
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}

}


int main()
{
	setlocale(LC_ALL, "RU");

	exercise_2();

	return 0;
}