#!/bin/sh
omit=github
remotes=$(git remote | grep -v $omit)
echo "REMOTES($remotes)"
for r in $remotes ; do
  git checkout $r && git pull
done
git checkout master
