#pragma once
#include <sstream>
#include <fstream>

#ifdef _DEBUG
#define SPDLOG_TRACE_ON
#endif

#define TRACE(...) SPDLOG_TRACE(logging::logfile, __VA_ARGS__)
#define TRACE_IF(flag, ...) SPDLOG_TRACE(logging::logfile, flag, __VA_ARGS__))

#define INFO logging::logfile->info
#define DEBUG logging::logfile->debug
#define WARNING logging::logfile->warn
#ifdef ERROR
#undef ERROR
#endif
#define ERROR logging::logfile->error

#define LOG(LEVEL, ...) LEVEL(__VA_ARGS__)

#define INITIALIZE_EASYLOGGINGPP std::shared_ptr<spdlog::logger> logging::logfile{};
//#define SPDLOG_FMT_PRINTF

#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"
namespace logging {
    extern std::shared_ptr<spdlog::logger> logfile;
}




