# Copyright 2021 Marcus Müller
# SPDX-License-Identifier: LGPL-3.0-or-later
cmake_minimum_required (VERSION 3.10)
project (analyse_spdlog CXX)

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 17)

find_package(spdlog)

add_executable(spdlog_enabled test.cc)
target_link_libraries(spdlog_enabled spdlog::spdlog)

add_executable(spdlog_disabled test.cc)
target_link_libraries(spdlog_disabled spdlog::spdlog)
target_compile_definitions(spdlog_disabled PRIVATE DONT)
