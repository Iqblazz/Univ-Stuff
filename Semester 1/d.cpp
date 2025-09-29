#include <stdio.h>
#include <string.h> // strlen() = cek panjang/ jml karakter dari s
#include <ctype.h> // isalpha = buat ngecek A-Z, a-z

int main(){
	int p;
	scanf ("%d",&p);
	
	for (int i = 1; i <= p; i++) {
		int check;
		char s[100];
		scanf ("%d\n", &check);
		scanf ("%[^\n]", s);
		
		// hapus selain char
		int h = strlen(s); //strlen = cek panjang/ jml karakter dari s
		char cleanS[101]; // buat nampung yang udah declear nanti
		int j = 0; // buat indeksnya cleanS
		
		for (int z = 0; z < h; z++) { // buat nandain semua karakter si h -> s
			if (isalpha(s[z])) { // isalpha = buat ngecek A-Z, a-z, di z
				cleanS [j++] = s[z]; // jika itu huruf masuk ke array ke-0 ounya j, lalu+1, biar kalo ada huruf lagi masuknya ke j ke-1
			}
		}
		cleanS[j] = '\0';
		scanf ("%[^\n]", s);
		
	
		cleanS[j] = '\0'; /* karena akhir dari string itu kan pasti null, dan itu kita tambahin oomatis, jadi belom ada nullnya */
		
		// final:
		printf ("Case #%d: %s\n", i, cleanS);
		
	}
	return 0;
}
