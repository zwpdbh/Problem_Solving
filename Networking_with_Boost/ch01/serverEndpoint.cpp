//
// Created by zwpdbh on 2018/8/23.
//

#include <boost/asio.hpp>
#include <iostream>

using namespace boost;
using namespace std;

int main() {
    // step 1, get port number
    unsigned short port_num = 3333;

    // step 2, create special object of asio::ip::address class
    // that specifies all IP-addresses available on the host.
    // we assume that server works over IPv6 protocol.
    asio::ip::address ip_address = asio::ip::address_v6::any();

    // step 3
    asio::ip::tcp::endpoint ep(ip_address, port_num);

    // Step 4. The endpoint is created and can be used to
    // specify the IP addresses and a port number on which
    // the server application wants to listen for incoming
    // connections.
    return 0;

}