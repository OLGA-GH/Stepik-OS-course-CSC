#define ELF_NIDENT	16


// The structure defines header format if ELF file
struct elf_hdr {
	std::uint8_t e_ident[ELF_NIDENT];
	std::uint16_t e_type;
	std::uint16_t e_machine;
	std::uint32_t e_version;
	std::uint64_t e_entry;
	std::uint64_t e_phoff;
	std::uint64_t e_shoff;
	std::uint32_t e_flags;
	std::uint16_t e_ehsize;
	std::uint16_t e_phentsize;
	std::uint16_t e_phnum;
	std::uint16_t e_shentsize;
	std::uint16_t e_shnum;
	std::uint16_t e_shstrndx;
} __attribute__((packed));


std::uintptr_t entry_point(const char *name)
{
	// name - name of ELF file
    struct elf_hdr header;
    
    FILE* file = fopen(name, "rb");
  if(file) {
    // read the header
    fread(&header, 1, sizeof(header), file);

    // check so its really an elf file
    if(header.e_ident[0] == 0x7f &&
       header.e_ident[1] == 'E' &&
       header.e_ident[2] == 'L' &&
       header.e_ident[3] == 'F') {

    // close the file
    fclose(file);
  }}
    return header.e_entry;
    
}