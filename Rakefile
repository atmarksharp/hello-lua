task :build do
  sh "gcc src/hello.c -o hello"
  sh "g++ src/hello-lua.cpp -o hello-lua -llua"
end

task :clean do
  sh "rm -rf hello.c hello-lua.cpp"
end
