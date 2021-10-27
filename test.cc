// Copyright 2021 Marcus Müller
// SPDX-License-Identifier: GPL-3.0-or-later
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/spdlog.h>
#include <memory>
#ifdef DONT
#define LVL trace
#else
#define LVL warn
#endif

void test_log(std::shared_ptr<spdlog::logger> logger, unsigned int number_of_spiders)
{
    for (; number_of_spiders; --number_of_spiders)
        logger->LVL("Oh noes! There's {:d} spiders in my house!", number_of_spiders);
}

int main(int argc, char** argv)
{
    auto logger = spdlog::stdout_color_st("logme");
    test_log(logger, std::stoi(argv[1]));
}
