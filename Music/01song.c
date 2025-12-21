#include <stdio.h>
#include <windows.h>   // Sleep()

int main() {
    char lyrics[] =
    "Kabhi Jo Ho Manzil Na Aasaan\n"
    "Ranjish Koi Darmiyaan\n"
    "Khat Hain Jo Tujhko Likhe\n"
    "Shayad Mil Na Sake\n"
    "Khair Tu Ab Jo Mile Sun Le Yeh Sadaa\n\n"
    "Kaisi Dillagi Hai Tu\n"
    "Kaisi Bebasi Hai Tu\n"
    "Meri Zindagi Hai Tu\n"
    "Meri Zindagi Hai Tu\n\n"
    "Aankhon Ki Nami Hai Tu\n"
    "Sab Hai Par Kami Hai Tu\n"
    "Meri Zindagi Hai Tu\n"
    "Meri Zindagi Hai Tu\n";

    for (int i = 0; lyrics[i] != '\0'; i++) {
        printf("%c", lyrics[i]);
        fflush(stdout);
        Sleep(90);   // 90 milliseconds delay
    }

    return 0;
}
