//
// Created by zwpdbh on 2018/8/24.
//
#include <iostream>
#include <boost/asio.hpp>

using namespace boost;

int main() {

    /**step 1, obtain host and port number*/
    std::string host = "samplehost.com";
    std::string port_num = "3333";

    /**step 2*/
    asio::io_service ioService;

    /**step 3 Creating a query*/
    asio::ip::tcp::resolver::query resolver_query(host, port_num, asio::ip::tcp::resolver::query::numeric_service);

    /**step 4 Creating a resolver*/
    asio::ip::tcp::resolver resolver(ioService);
    
    // store error message
    boost::system::error_code ec;

    /**step 5*/
    asio::ip::tcp::resolver::iterator it = resolver.resolve(resolver_query, ec);

    if (ec.value() != 0) {
        std:: cout << "Failed to resolve a DNS name."
            << "Error code = " << ec.value()
            << ". Message = " << ec.message();

        return ec.value();
    }

    asio::ip::tcp::resolver::iterator it_end;

    for (; it != it_end; it++) {
        asio::ip::tcp::endpoint ep = it->endpoint();
    }

    return 0;
}