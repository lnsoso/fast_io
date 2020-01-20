#include"../../include/fast_io.h"
#include"../../include/fast_io_network.h"

int main()
try
{
	fast_io::tcp_client hd(fast_io::ipv4{127,0,0,1},2000);
	transmit(fast_io::out,hd);
}
catch(std::exception const & e)
{
	println(fast_io::err,e);
	return 1;
}