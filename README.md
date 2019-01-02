What is QbaoChain?
--------------------------

QbaoChain is a kind of Consortium Blockchain. Every node involved in the Blockchain system is licensed. Unlicensed nodes cannot be connected to the system. The affiliate chain is a Blockchain that requires registration, also known as the Permissioned Blockchain.
QbaoChain not only perfectly realizes the characteristics of the blockchain that can not be tampered, forged, denied, distributed, no trust, point-to-point, collective maintenance, etc. QbaoChain is designed from the overall architecture to node coding development. From consensus algorithms to object storage; From encryption algorithms to broadcast strategies; From performance tuning to QbaoChain, there are huge innovations and breakthroughs. Therefore, QbaoChain has more obvious advantages over the original public chain.


**Powerful Functionality**  
Adopting the UTXO account model of BTC, which supports the simultaneous processing of multiple UTXO, is therefore highly scalable, enabling parallel transactions and encouraging scalability innovations. Also, if a user USES a new address for each transaction, UTXO can provide powerful anonymity to prevent it from being tracked. In addition to this, QbaoChain also supports a strong contract layer, a smart contract is a set of conventions defined in digital form, including those on which the contract participants can enforce them. Because of the immutable and distributed nature of blockchain, smart contracts, once created, can never be changed and can therefore solve trust issues.
regularly to indicate new official, stable release versions of Qtum.


**Lightning Speed**  
BTC trade at the rate of 3 per second, ETH speed is 6.7 per second, IBM's books theoretical peak is 200 transactions per second, by redesigning our consensus mechanism, separation of consensus steps, to discuss first, greatly improve the performance of the block chain network, in QbaoChain QbaoChain trading speed can reach 5000 transactions per second, as the future network bandwidth upgrade, further improve speed.


**Higher Safety**  
The information on the coalition chain is not accessible to all, and only the nodes on the alliance chain can be accessed, thus providing high-level security. It not only has the privacy of the private chain, but also has the decentralization thinking of the public chain, which ensures the high privacy of data on the chain and avoids the occurrence of attacks on nodes.


**Ultralight Storage**  
BTC blockchain requires huge storage space of tens of gigabytes, some even larger, which requires nodes to provide proprietary large-capacity storage devices, and in QbaoChain, the space required for QbaoChain will shrink by about 100 times, or even less. Because it only needs to store the data after blockchain hash and key checkpoints, the storage space is reduced directly to a dozen M or even several M.


**A Truly Private Wallet**     
BTC/ETH kind of wallet must with the help of a centralized server, often stolen events, QbaoChain provide real private decentralized purse, wallet to store in the center of the third party no longer on the server, but rather direct access to the block chain nodes, and better protect the private key, my wallet is no longer as third-party credit problems, safety problems lead to lost wallet, has realized the real can't steal block chain private purses.

*


What is Qbe Core?
------------------------------------

Qbe Core is our primary mainnet wallet. It implements a full node and is capable of storing, validating, and distributing all history of the Qbao network. Qbe Core is considered the reference implementation for the Qtum network. 

Qbe Core currently implements the following:

* Sending/Receiving Qbe
* Sending/Receiving QRC20 tokens on the Qbao network
* Staking and creating blocks for the Qbao network
* Creating and interacting with smart contracts
* Running a full node for distributing the blockchain to other users
* "Prune" mode, which minimizes disk usage
* Regtest mode, which enables developers to very quickly build their own private Qbao network for Dapp testing
* Compatibility with the Bitcoin Core set of RPC commands and APIs


Building Qbe Core
---------------------------------------

### (1)Build on Ubuntu
This is a quick start script for compiling Qbe on  Ubuntu.

#####1.Installing Dependencies for Qbe

    apt-get install build-essential libtool autotools-dev automake pkg-config libssl-dev libevent-dev bsdmainutils git cmake libboost-all-dev
    apt-get install software-properties-common
    add-apt-repository ppa:bitcoin/bitcoin
    apt-get update
    apt-get install libdb4.8-dev libdb4.8++-dev

###### If you want to build the Qt GUI:
	apt-get install libqt5gui5 libqt5core5a libqt5dbus5 qttools5-dev qttools5-dev-tools qrencode


####2.Install protobuf(The version of apt-get is too low)

	wget https://github.com/google/protobuf/archive/v3.5.1.tar.gz
	tar -xzvf v3.5.1.tar.gz
	cd protobuf-3.5.1/ 
	./autogen.sh 
	./configure
	make -j4 && make install 
	ldconfig

###### Compile Qbe
	git clone --recursive https://github.com/QbaoChain/qbe.git
	cd qbe
	./autogen.sh
	./configure
	make -j4
    

### (2)Build on CentOS

Here is a brief description for compiling Qbe on CentOS

##### Compiling boost manually
    sudo yum install python-devel bzip2-devel
    git clone https://github.com/boostorg/boost.git
    cd boost
    git checkout boost-1.66.0
    git submodule update --init --recursive
    ./bootstrap.sh --prefix=/usr --libdir=/usr/lib64
    ./b2 headers
    sudo ./b2 -j4 install
    
##### Installing Dependencies for Qbe
    sudo yum install epel-release
    sudo yum install libtool libdb4-cxx-devel openssl-devel libevent-devel
    
    # If you want to build the Qt GUI:
    sudo yum install qt5-qttools-devel protobuf-devel qrencode-devel
    
    # Building Qbe
    git clone --recursive https://github.com/QbaoChain/qbe.git
    cd qbe
    ./autogen.sh
    ./configure
    make -j4

### (3)Build on OSX

The commands in this guide should be executed in a Terminal application.
The built-in one is located in `/Applications/Utilities/Terminal.app`.

##### 1) Preparation

Install the OS X command line tools:

`xcode-select --install`

When the popup appears, click `Install`.

Then install [Homebrew](https://brew.sh).

##### 2) Dependencies

    brew install cmake automake berkeley-db4 libtool --c++11 --without-single --without-static miniupnpc openssl pkg-config protobuf qt5 libevent imagemagick --with-librsvg qrencode

NOTE: Building with Qt4 is still supported, however, could result in a broken UI. Building with Qt5 is recommended.

##### 3) Install boost
######1. Clone Homebrew source code and cd into `homebrew-core`

        git clone https://github.com/Homebrew/homebrew-core.git
	
######2. check boost commit log
		
		 git log ./Formula/boost.rb | less
		 
######3. checkout git HEAD to commitId: 6308e2c01c0821f899acd75e47321cd3aa882680 ( boost --version 1.66.0)
		
		git checkout 6308e2c01c0821f899acd75e47321cd3aa882680
	
######4. brew install boost
		
		brew install ./Formula/boost.rb

NOTE: the support boost version must be 1.66 or less 1.60

##### 4) Build Qbe Core

######1. Clone the qbe source code and cd into `qbe`

        git clone --recursive https://github.com/QbaoChain/qbe.git
        cd qbe

######2.  Build qbe-core:

    Configure and build the headless qbe binaries as well as the GUI (if Qt is found).

    You can disable the GUI build by passing `--without-gui` to configure.

        ./autogen.sh
        ./configure
        make

######3.  It is recommended to build and run the unit tests:

        make check
        
#### 5) Initialization Parameter Configuration
######1. mkdir qbe folder and touch qbe.conf
		
		mkdir /Users/$UserName/Library/Application\ Support/Qbe
		cd /Users/$UseName/Library/Application\ Support/Qbe
		touch qbe.conf
	
Note: replace $UserName to your computer name

######2. echo cofiguration parmeter to qbe.conf, The list of configuration parameters is as follows:
	
	addressindex=1
	timestampindex=1
	spentindex=1
	rpcuser=admin
	rpcpassword=admin
	rpcallowip=0.0.0.0/0
	addrindex=1
	txindex=1
	#zmqpubhashtx=tcp://0.0.0.0:4000
	zmqpubhashblock=tcp://0.0.0.0:4000
	#daemon=1
	logevents=1
	chain=qbe
	server=1
	addnode=47.100.27.65
	#debug=zmq
	maxmempool=100000


######3. mkdir chain_qbe and add configuration file
		
		mkdir chain_qbe
		cd chain_qbe
		touch qbe.conf
		
######4. echo cofiguration parmeter to qbe.conf, The list of configuration parameters is as follows:

	poa=1
	token-name=QBE
	genesis-input=qbao chain
	msgstart=1234aabb
	poa-miner-list=QWXrSap9kvsoPmq9YrXp87NQQn4utwVqTk,QgZLtFbLAdRLcmEHtf6jscv9ZVCuHHtDEF,QS7AgqJNkiVhiEyNw9CTLE1dTWwdkAown2
	poa-interval=5
	poa-timeout=3
	default-port=8444
	subsidy-init=666
	subsidy-halving-interval=1500000
	subsidy-halving-time=8


*
Run
---------------------------------------
####(1) command-line
Then you can enter the project path, for example,cd ~/qbe.
	
	# enter your project path
	cd ~/qbe/src
	# 
	./qbed -daemon   
And then, you can do something by your input commands, as:

	#get block chain height
	./qbe-cli getblockcount
	#get the blockHash of the first block  
	./qbe-cli getblockhash 1
	#get the chain params
	./qbe-cli getinfo



####(2) GUI 
If you want run Qt GUI, you need use OSX, not ubuntu, also input command:
	
	cd ~/qbe/src/qt
	./qbe-qt

And then you can using the GUI program Efficiently.


