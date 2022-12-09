#pragma once

#include <algorithm>
#include <chrono>
#include <exception>
#include <filesystem>
#include <format>
#include <fstream>
#include <future>
#include <iostream>
#include <list>
#include <mutex>
#include <optional>
#include <random>
#include <sstream>
#include <stdexcept>
#include <string_view>
#include <string>
#include <system_error>
#include <thread>
#include <unordered_map>
#include <utility>
#include <variant>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::string_view;
using std::optional;

using namespace std::string_literals;
using namespace std::string_view_literals;

namespace fs = std::filesystem;

using str = std::string;
using str_cref = std::string const &;