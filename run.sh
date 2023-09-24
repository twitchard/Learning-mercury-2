function helloworld_build {
	mmc --use-subdirs --make helloworld
}

function helloworld {
	helloworld_build && ./helloworld
}

function tests {
  mmc --use-subdirs --make tests -E && ./tests
}

function helloworld_web {
  helloworld_build && httpd -f $(pwd)/httpd/conf/httpd.conf -DFOREGROUND
}


function main {
  case $1 in
    helloworld) helloworld;;
    helloworld_web) helloworld_web;;
    tests) tests;;
    *) helloworld;;
  esac
}

if [ "$1" == "watch" ]; then
  shift
  find . -name '*.m' | entr bash -c "$0 $@"
fi
main $@
