#include "draugr.h"

int main() {
    Draugr d1;
    d1.setName("Death Overlord");
    d1.shoutPhrase(3);
    Draugr d2 = d1;
    Draugr d3(10.0, 30);
    d3.setName("Thrall");
    Draugr d4 = std::move(d3);
    d3.shoutPhrase(4);
    return 0;
}
