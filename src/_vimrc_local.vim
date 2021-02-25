let cxxflags = "-std=c++2a -fprebuilt-module-path=."

let g:ale_cpp_gcc_options = expand(cxxflags)
let g:ale_cpp_clang_options = expand(cxxflags)

let g:ale_cpp_cc_options = expand(cxxflags)

let g:ale_cpp_clangtidy_options = expand(cxxflags)
let g:ale_cpp_cppcheck_options = expand(cxxflags)
let g:ale_cpp_clangcheck_options = expand(cxxflags)
