//
// Created by zwpdbh on 2018/8/24.
//

#include <boost/asio.hpp>
#include <iostream>

using namespace boost;

int main()
{
    asio::io_service ios;

    asio::ip::tcp protocol = asio::ip::tcp::v6();

    asio::ip::tcp::acceptor acceptor(ios);

    boost::system::error_code ec;

    acceptor.open(protocol, ec);

    if (ec.value() != 0) {
        std::cout
            << "Failed to open the acceptor socket"
            << "Error code = "
            << ec.value() << ". Message: " << ec.message();
    }

    return 0;
}