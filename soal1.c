/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 2 - Data Manipulation and External Files
 *   Hari dan Tanggal    : Selasa, 21/04/2026
 *   Nama (NIM)          : Alkindi Bintang Akhsan (13224022)
 *   Nama File           : soal1.c
 *   Deskripsi           : Sebuah naskah kuno hasil digitalisasi ditemukan dalam kondisi rusak. Huruf-hurufnya masih terbaca, 
tetapi beberapa simbol kurung tampak tidak lengkap akibat proses pemindaian yang gagal. Tim 
filologi digital ingin memulihkan naskah itu dengan menghapus sesedikit mungkin simbol kurung 
agar struktur teks kembali valid, tanpa mengubah urutan karakter lainnya. 
Hapus seminimal mungkin karakter kurung dari string agar string menjadi valid.
 * 
 */


#include <stdio.h>
#include <string.h>
  
int main(void) {
    char str[20];
    char* pstr = str;
    scanf("%s", str);
    for(int i=0;i<strlen(str);i++){
        if(str[i] == 0){
            return 0;
        }
        else if(str[i] == '('){
            if(str[i+2] != ')'){
                for(int j=0;j<(strlen(str)-i);j++){
                    str[i] = str[i+1];
                }
                }
            }
        else if(str[i] == ')'){
            if(str[i-2] != '('){
                for(int j=0;j<(strlen(str)-i);j++){
                str[i] = str[i+1];
                }
            }
        }
    }
    printf("%s",str);
    return 0;
}
 

 
