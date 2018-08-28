//
// Created by zwpdbh on 2018/8/23.
//

/**1. Create an instance of the asio::io_service class or use the one that has been created earlier.
 * 2. Create an object of the class that represents the transport layer protocol (TCP or UDP) and
 * the version of the underlying IP protocol (IPv4 or IPv6) over which the socket is intended to communicate.
 * 3. Create an object representing a socket corresponding to the required protocol type.
 * Pass the object of asio::io_service class to the socket's constructor.
 * 4. Call the socket's open() method, passing the object representing the protocol created in step 2 as an argument.
*/

#include <boost/asio.hpp>
#include <iostream>

using namespace boost;

int main() {

    // step 1
    asio::io_service ios;
    // step 2
    asio::ip::tcp protocol = asio::ip::tcp::v4();
    // step 3
    asio::ip::tcp::socket sock(ios);

    // store information about error
    boost::system::error_code ec;

    // step 4 open the socket
    sock.open(protocol, ec);
    if (ec.value() != 0) {
        std::cout
            << "Failed to open the socket! Error code = "
            << ec.value() << ". Message: " << ec.message();

        return ec.value();
    }

    return 0;
}