// This is an open source non-commercial project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com

#include <exception>
#include <format>
#include <iostream>
#include <print>
#include <string>
#include <vector>

#include <Windows.h>

using u8 = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;

using i8 = int8_t;
using i16 = int16_t;
using i32 = int32_t;
using i64 = int64_t;

using std::cout;
using std::endl;
using std::string;
using std::string_view;
using std::vector;

using str = std::string;
using str_cref = std::string const&;

template<typename T>
using vec = vector<T>;

using namespace std::string_literals;
using namespace std::string_view_literals;

//namespace fs = std::filesystem;


int main(int argc, char* argv[])
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8); 

    //cout << "hello 😁" << endl;
    std::println("Hello {}", "😁");

    return 0;
}
