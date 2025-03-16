#include <iostream>
#include <getopt.h>

int main(int argc, char *argv[]) {
  // Command Line Options
  char short_options[] = "hv";
  // Position of the current command line option
  int opt;

  // Looping through all command line parameters
  while ((opt = getopt(argc, argv, short_options)) != -1) {
    // Handling the current command line option
    switch (opt) {
      case 'h':
        std::cout << "Usage: myprogram [options]\n\n"
                  << "Options:\n"
                  << "  -h    Print this help message\n"
                  << "  -v    Print the version number\n";
        break;
      case 'v':
        std::cout << "myprogram v1.0.0\n";
        break;
    default:
        std::cout << "Unknown option. Use '-h' for usage information.\n";
        break;
    }
  }

  // Checking if command line parameters were passed
  if (argc == 1) {
    std::cout << "Use '-h' for usage information.\n";
  }

  return 0;
}