#include <stdlib.h>
#include <iostream>

#include "soci.h"
#include "soci-oracle.h"

using namespace std;
sql::Connection *con;

driver = mysql::mysql::get_mysql_driver_instance();
con = driver->connect("derp.cz4w3sgdjfke.us-west-2.rds.amazonaws.com:3306", "derp", "masterderp");
cout<<sql::Connection::isValid();

delete con;
return 0;
}
