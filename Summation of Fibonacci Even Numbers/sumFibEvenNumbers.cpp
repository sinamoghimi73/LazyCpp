#include <iostream>
#include <array>

size_t sumFibEvenNumbers(const size_t limit){
    std::array<size_t, 4> fib{1,1,0,0}; // [a, b, sum, temp]
    while(fib[2] < limit){
        fib[2] += fib[0]+fib[1];
        fib[3] = fib[0];
        fib[0] = fib[3] + 2*fib[1];
        fib[1] = 2*fib[3] + 3*fib[1];
    }
    return fib[2];
}

int main(int argc, const char * argv[]) {
    std::cout << sumFibEvenNumbers(4000000) << "\n";
    
    return 0;
}
