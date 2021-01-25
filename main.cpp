#include "lib.h"

#include "boost/log/trivial.hpp"
#include "boost/log/utility/setup.hpp"

void autoCheck();

void lambdaCheck();

void tupleCheck();

/*
static void init_log()
{
    static const std::string COMMON_FMT("[%TimeStamp%][%Severity%]:  %Message%");

    boost::log::register_simple_formatter_factory< boost::log::trivial::severity_level, char >("Severity");

    // Output message to console
    boost::log::add_console_log(
        std::cout,
        boost::log::keywords::format = COMMON_FMT,
        boost::log::keywords::auto_flush = true
    );


    boost::log::add_common_attributes();
}
*/
int main()
{
//    init_log();
    
    //auto logger = spdlog::stdout_logger_mt("console");
    //logger->info("version {} was started", version());
    
//    BOOST_LOG_TRIVIAL(info) << "App version " << version() << " was started";
    std::cout << "App version " << version() << " was started" << std::endl;
    
    return 0;
}
