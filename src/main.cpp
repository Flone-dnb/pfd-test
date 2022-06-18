#include "portable-file-dialogs.h"

int main() {
    const auto selected = pfd::open_file("title");
    return 0;
}