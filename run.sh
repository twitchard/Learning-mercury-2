function helloworld-build {
	mmc --use-subdirs --make helloworld
}

function helloworld {
	helloworld-build && ./helloworld
}

function tests {
  mmc --use-subdirs --make tests -E && ./tests
}

function helloworld-web {
  helloworld-build && httpd -f $(pwd)/httpd/conf/httpd.conf -DFOREGROUND
}


function main {
  case $1 in
    helloworld) helloworld;;
    helloworld-web) helloworld-web;;
    tests) tests;;
    *) helloworld;;
  esac
}

if [ "$1" == "watch" ]; then
  shift
  find . -name '*.m' | entr bash -c "$0 $@"
fi
main $@
