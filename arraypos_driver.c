/* NIM       : 13516030 */
/* Nama      : Yonas Adiel Wiguna */
/* Tanggal   : 7 September 2017 */
/* Topik     : ADT Collection */
/* Deskripsi : Array implisit */

#include "stdio.h"
#include "boolean.h"
#include "arraypos.h"

int main() {
	
	
	TabInt T1,T2,T3;
	ElType X, Y;
	IdxType X_i;
	
	BacaIsi(&T1);
	TulisIsiTab(T1); printf("\n");
	BacaIsi(&T2);
	TulisIsiTab(T2); printf("\n");
	
	T3 = PlusMinusTab(T1, T2, true);
	TulisIsiTab(T3);
	T3 = PlusMinusTab(T1, T2, false);
	TulisIsiTab(T3);
	
	if (IsEQ(T1, T2)) { printf("T1 dan T2 sama\n"); }
	else              { printf("T1 dan T2 beda\n"); }
	
	scanf("%d",&X);
	printf("X ditemukan di T1 indeks %d muncul %d kali\n", Search1(T1,X), CountX(T1,X)); 
	printf("X ditemukan di T2 indeks %d muncul %d kali\n", Search1(T1,X), CountX(T2,X));
	
	MaxMin(T1, &X, &Y);
	printf("Nilai maks %d dan min %d\n", X, Y);
	MaxMin(T2, &X, &Y);
	printf("Nilai maks %d dan min %d\n", X, Y);
	
	printf("Jumlah T1 %d\n", SumTab(T1));
	printf("Jumlah T2 %d\n", SumTab(T2));
	
	AddAsLastEl(&T1, 10);
	DelLastEl(&T2, 5);
	Sort(&T1, true);
	Sort(&T2, false);
	
	TulisIsiTab(T1); printf("\n");
	TulisIsiTab(T2); printf("\n");
	
}
