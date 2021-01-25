# c-learn
c++ 

# wiki
* https://gcc.gnu.org/wiki/HomePage

## module
* https://gcc.gnu.org/wiki/cxx-modules


# linux
## failed login attempts since the last successful login
* grep "Failed password for invalid user" /var/log/secure | awk '{print $13}' | sort | uniq -c | sort -nr | more

