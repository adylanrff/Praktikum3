/* NIM       : 13516016 */
/* Nama      : Adylan Roaffa Ilmy */
/* Tanggal   : 7 September 2017 */
/* Topik     : ADT Collection */
/* Deskripsi : Array implisit */

#include "stdio.h"
#include "boolean.h"
#include "array.h"

int CountX (TabInt T, ElType X)
/* Menghasilkan berapa banyak kemunculan X di T */
/* Jika T kosong menghasilkan 0 */
{
	int Count = 0;
	IdxType i = GetFirstIdx(T);

	while (IsIdxEff(T, i)) {
		if (Elmt(T, i) == X) {
			Count++;
		}
		i++;
	}

	return Count;
}

int main() {
	TabInt T;
	ElType X;
	IdxType X_i;

	BacaIsi(&T);
	TulisIsiTab(T); printf("\n");

	scanf("%d",&X);
	printf("%d\n", CountX(T, X));
	X_i = Search1(T, X);
	if (X_i != IdxUndef) {
		printf("%d\n", X_i);

		InsSortAsc(&T);

		if (MaxUrut(T) == X) printf("maksimum\n");
		if (MinUrut(T) == X) printf("minimum\n");
		if (Elmt(T, (Neff(T)+1)/2) == X) printf("median\n");
	} else /* X_i == IdxUndef */ {
		printf("%d tidak ada\n", X);
	}

}
