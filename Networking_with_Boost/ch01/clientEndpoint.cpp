//
// Created by zwpdbh on 2018/8/23.
//

#include <boost/asio.hpp>
#include <iostream>

using namespace boost;
using namespace std;

int main() {

    // step 1
    string raw_ip_address = "127.0.0.1";
    unsigned short port_num = 3333;

    boost::system::error_code ec;

    // step 2
    asio::ip::address ip_address = asio::ip::address::from_string(raw_ip_address, ec);

    if (ec.value() != 0) {
        cout << "Failed to parse the ip address. Error code = "
            << ec.value() << ". Message: " << ec.message();

        return ec.value();
    }

    // step 3
    asio::ip::tcp::endpoint ep(ip_address, port_num);

    // step 4. after the endpoint to server is ready, we could communicate with it now.

    return 0;
}