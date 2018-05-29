# DummyRPCServer
A (way too) simple concurrent RPC server for (way too) simple things, such as:

* calculating the average of an array of integers (X)
* finding the max and min element of an array of integers (X)
* calculating the product of an array of integers (X) with a float number (r)

### Guide to compile and run:
First, some sudos that may or may _not_ help run it, worked for me tho:

* `sudo apt-get update`
* `sudo apt-get install rpcbind`
* `sudo apt-get install libc-dev-bin`
* `sudo -i rpcbind -i -w`

A plain ol' `make` and then:

#### Server:
`./dum_server`

#### Client:
`./dum_client localhost`

Sister project of [DummyServer](https://github.com/Coursal/DummyServer).

Tested on Lubuntu 12.04 (Precise Pangolin) on a virtual machine.
