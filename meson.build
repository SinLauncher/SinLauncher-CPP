project('SynthLauncher', 'cpp', license: 'aGPL-3.0', version: '1.0.0', license_files: 'LICENSE', default_options: ['cpp_std=c++11', 'warning_level=3'])

src = [
  
]

test_src = [

]

# Build dependency
simdjson = dependency('simdjson', required: true)

# Test dependency
gtest = dependency('gtest', required: false)

executable('SynthLauncher', [src, 'src/main.cc'], include_directories: 'include', dependencies: [simdjson])

test_exe = executable('SynthLauncherTest', [src, test_src], dependencies: [gtest, simdjson])
