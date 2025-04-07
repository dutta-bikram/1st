#include <iostream>
#include <mysql/mysql.h>

int main() {
    MYSQL *conn;
    conn = mysql_init(NULL);

    if (conn == NULL) {
        std::cerr << "MySQL initialization failed\n";
        return EXIT_FAILURE;
    }

    std::cout << "MySQL Connector C++ is working!\n";
    mysql_close(conn);
    return EXIT_SUCCESS;
}

