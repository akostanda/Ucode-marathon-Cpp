#include "stdAlgoV1.h"

std::size_t list_size(const std::forward_list<std::string>& list) {
    return std::distance(list.begin(), list.end());
}