#include "/home/codeleaded/System/Static/Container/BloomFilter.h"

int main() {
    // ca. 1000 elements => 1% errorrate
    BloomFilter bf = BloomFilter_New(1000, 0.01);

    BloomFilter_Add(&bf, "hello");
    BloomFilter_Add(&bf, "world");
    BloomFilter_Add(&bf, "bloom");
    BloomFilter_Add(&bf, "filter");
    BloomFilter_Add(&bf, "c programming");

    printf("Contains 'hello'? %s\n", BloomFilter_Contains(&bf, "hello")  ? "y" : "N");
    printf("Contains 'world'? %s\n", BloomFilter_Contains(&bf, "world")  ? "y" : "N");
    printf("Contains 'python'? %s\n",BloomFilter_Contains(&bf, "python") ? "y (False Positive!)" : "N");

    BloomFilter_Print(&bf);
    BloomFilter_Free(&bf);
    return 0;
}