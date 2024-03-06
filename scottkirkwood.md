## To Update

Assuming you have `upstream` setup

```shell
$ git fetch upstream
$ git checkout master
$ git merge upstream/master
```

## List your files

List all the files different from qmk

```
$ git diff --name-only upstream/master
```

## Setup upstream

```shell
$ git remote add upstream https://github.com/qmk/qmk_firmware.git
$ git remote -v
```
