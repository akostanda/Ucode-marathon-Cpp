#include "src/Worker.h"
#include "src/MultithreadedClass.h"
#include <regex>

int main(int argc, char **argv) {
    std::regex regular("([\\-0-9]+)");
    std::regex regular2("([0-9]+)");
    if (argc != 4) {
        std::cerr << "usage: ./simpleWorkerV2 [addValue] [subtractValue] [count]" << std::endl;
        return 1;
    }
    
    try {
        int addValue = std::stoi(argv[1]);
        int subtractValue = std::stoi(argv[2]);
        int count = std::stoi(argv[3]);
        if (!std::regex_match(argv[1], regular) || !std::regex_match(argv[2], regular) || !std::regex_match(argv[3], regular2)
            || addValue < -2000 || addValue > 2000 || subtractValue < -2000 || subtractValue > 2000 || count < 5 || count > 10)
            throw(1);
        MultithreadedClass obj;

        Worker worker;

        for (auto i = 0; i < count; ++i) {
            worker.startNewThread(&MultithreadedClass::add, &obj, addValue);
        }
        for (auto i = 0; i < count; ++i) {
            worker.startNewThread(&MultithreadedClass::subtract, &obj, subtractValue);
            }
            worker.joinAllThreads();std::cout<< obj.getInt() << std::endl;
    }
    catch (...) {
        std::cerr << "Incorrect values" << std::endl;
        return 1;
    }


}
