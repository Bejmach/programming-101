#include <bit>
#include <bitset>
#include <cstdint>
#include <iostream>
#include <sys/types.h>

void print_bits(){
	int i = 2341;
	float f = static_cast<float>(i);

	uint32_t i_bits = std::bit_cast<uint32_t>(i);
	uint32_t f_bits = std::bit_cast<uint32_t>(f);

	std::cout<<"Int: "<<i<<" -> "<<std::bitset<sizeof(uint32_t)*8>(i_bits)<<std::endl;
	std::cout<<"Float: "<<f<<" -> "<<std::bitset<sizeof(uint32_t)*8>(f_bits)<<std::endl;
}

int main(int argc, char* argv[]){
	print_bits();
}


