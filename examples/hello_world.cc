#include <iostream>
#include <string>
#include <vector>
#include "absl/strings/str_join.h"
#include "absl/flags/flag.h"
#include "absl/flags/parse.h"

ABSL_FLAG(uint64_t, n_trials, 100, "The number of trials");

int main(int argc, char** argv) {
    std::vector<std::string> v = {"foo","bar","baz"};
    std::string s = absl::StrJoin(v, "-");
    std::cout << "Joined string: " << s << "\n";
    
    absl::ParseCommandLine(argc, argv);
    std::cout << absl::GetFlag(FLAGS_n_trials) << std::endl;
}