#include "psf.h"

int main() {
    char **l = new char *[2];
    l[0] = "a.dc";
    l[1] = "b.dc";
    for (int i = 0; i < 50000; ++i) {
        auto a = new PSFDataSet(l[i % 2]);
        auto b = a->get_signal_names();

        std::cout << i << std::endl;
        a->close();
        free(a);
    }
    getchar();
}