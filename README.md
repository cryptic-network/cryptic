![image](https://github.com/Cryptic/Cryptic/raw/master/src/config/logo2.png)

```
LICENSES:

// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers 
// Copyright (c) 2014-2018, The Monero Project 
// Copyright (c) 2018-2019, The TurtleCoin Developers 
// Copyright (c) 2021, The Cryptic Developers
```

BitcoinMono is a cryptocurrency based on Turtlecoin with large supply and high emission. Its aim is to be adopted as the coin of choice in gaming industry.

### Installing

We offer binary images of the latest releases here: https://github.com/Cryptic/Cryptic/releases

If you would like to compile yourself, read on.

### How To Compile

#### Linux

##### Prerequisites

You will need the following packages: boost, cmake (3.8 or higher), make, and git.

You will also need either GCC/G++, or Clang.

If you are using GCC, you will need GCC-7.0 or higher.

If you are using Clang, you will need Clang 6.0 or higher. You will also need libstdc++\-6.0 or higher.

##### Ubuntu, using GCC

- `sudo add-apt-repository ppa:ubuntu-toolchain-r/test -y`
- `sudo apt-get update`
- `sudo apt-get install aptitude -y`
- `sudo aptitude install -y build-essential g++-8 gcc-8 git libboost-all-dev python-pip`
- `sudo pip install cmake`
- `export CC=gcc-8`
- `export CXX=g++-8`
- `git clone -b master --single-branch https://github.com/Cryptic/Cryptic`
- `cd Cryptic`
- `mkdir build`
- `cd build`
- `cmake ..`
- `make`

The binaries will be in the `src` folder when you are complete.

- `cd src`
- `./Crypticd --version`

##### Ubuntu, using Clang

- `sudo add-apt-repository ppa:ubuntu-toolchain-r/test -y`
- `wget -O - https://apt.llvm.org/llvm-snapshot.gpg.key | sudo apt-key add -`

You need to modify the below command for your version of ubuntu - see https://apt.llvm.org/

* Ubuntu 14.04 (Trusty)
- `sudo add-apt-repository "deb https://apt.llvm.org/trusty/ llvm-toolchain-trusty 6.0 main"`

* Ubuntu 16.04 (Xenial)
- `sudo add-apt-repository "deb https://apt.llvm.org/xenial/ llvm-toolchain-xenial 6.0 main"`

* Ubuntu 18.04 (Bionic)
- `sudo add-apt-repository "deb https://apt.llvm.org/bionic/ llvm-toolchain-bionic 6.0 main"`

- `sudo apt-get update`
- `sudo apt-get install aptitude -y`
- `sudo aptitude install -y -o Aptitude::ProblemResolver::SolutionCost='100*canceled-actions,200*removals' build-essential clang-6.0 libstdc++-7-dev git libboost-all-dev python-pip`
- `sudo pip install cmake`
- `export CC=clang-6.0`
- `export CXX=clang++-6.0`
- `git clone -b master --single-branch https://github.com/Cryptic/Cryptic`
- `cd Cryptic`
- `mkdir build`
- `cd build`
- `cmake ..`
- `make`

The binaries will be in the `src` folder when you are complete.

- `cd src`
- `./Crypticd --version`

##### Generic Linux

Ensure you have the dependencies listed above.

If you want to use clang, ensure you set the environment variables `CC` and `CXX`.
See the ubuntu instructions for an example.

- `git clone -b master --single-branch https://github.com/Cryptic/Cryptic`
- `cd Cryptic`
- `mkdir build`
- `cd build`
- `cmake ..`
- `make`

The binaries will be in the `src` folder when you are complete.

- `cd src`
- `./Crypticd --version`

#### OSX/Apple, using GCC

##### Prerequisites

- Install XCode and Developer Tools.

##### Building

- `which brew || /usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"`
- `brew install --force cmake boost llvm gcc@8`
- `export CC=gcc-8`
- `export CXX=g++-8`
- `git clone -b master --single-branch https://github.com/Cryptic/Cryptic`
- `cd Cryptic`
- `mkdir build`
- `cd build`
- `cmake ..`
- `make`

The binaries will be in the `src` folder when you are complete.

- `cd src`
- `./Crypticd --version`

#### OSX/Apple, using Clang

##### Prerequisites

- Install XCode and Developer Tools.

##### Building

- `which brew || /usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"`
- `brew install --force cmake boost llvm`
- `export CC=/usr/local/opt/llvm/bin/clang`
- `export CXX=/usr/local/opt/llvm/bin/clang++`
- `git clone -b master --single-branch https://github.com/Cryptic/Cryptic`
- `cd Cryptic`
- `mkdir build`
- `cd build`
- `cmake ..`
- `make`

The binaries will be in the `src` folder when you are complete.

- `cd src`
- `./Crypticd --version`


#### Windows

##### Prerequisites

- Install [Visual Studio 2017 Community Edition](https://www.visualstudio.com/thank-you-downloading-visual-studio/?sku=Community&rel=15&page=inlineinstall)
- When installing Visual Studio, it is **required** that you install **Desktop development with C++**
- Install the latest version of [Boost](https://bintray.com/boostorg/release/download_file?file_path=1.68.0%2Fbinaries%2Fboost_1_68_0-msvc-14.1-64.exe) - Currently Boost 1.68.

##### Building

- From the start menu, open 'x64 Native Tools Command Prompt for vs2017'.
- `cd <your_bitcoin_mono_directory>`
- `mkdir build`
- `cd build`
- `set PATH="C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin";%PATH%`
- `cmake -G "Visual Studio 15 2017 Win64" .. -DBOOST_ROOT=C:/local/boost_1_68_0 -DARCH=x86-64 -DCMAKE_BUILD_TYPE=release`

If you have errors on this step about not being able to find the following static libraries, you may need to update your cmake. Open 'Visual Studio Installer' and click 'Update'.

- `MSBuild BitcoinMono.sln /p:Configuration=Release /m`

The binaries will be in the `src/Release` folder when you are complete.

- `cd src`
- `cd Release`
- `BitcoinMonod.exe --version`

#### Raspberry Pi 3 B+ (AARCH64/ARM64)
The following images are known to work. Your operation system image **MUST** be 64 bit.

##### Known working images

- https://github.com/Crazyhead90/pi64/releases
- https://fedoraproject.org/wiki/Architectures/ARM/Raspberry_Pi#aarch64_supported_images_for_Raspberry_Pi_3
- https://archlinuxarm.org/platforms/armv8/broadcom/raspberry-pi-3

Once you have a 64 bit image installed, setup proceeds the same as any Linux distribution. Ensure you have at least 2GB of ram, or the build is likely to fail. You may need to setup swap space.

##### Building

- `git clone -b master --single-branch https://github.com/Cryptic/Cryptic`
- `cd bitcoinmono`
- `mkdir build`
- `cd build`
- `cmake ..`
- `make`

The binaries will be in the `src` folder when you are complete.

- `cd src`
- `./BitcoinMonod --version`

#### Thanks
Cryptonote Developers, Bytecoin Developers, Monero Developers, Forknote Project, TurtleCoin Community, DeroGold Developers,

#### Donation
BTC donation : 37D14p2miypXtmpFoWRbuVcsGAMHvL7p4g
LTC donation : LUupRmfN8n62D4WDzp6c22uLLt3kLk3WTr
DOGE donation : D8Pqhy8yEirqx95Me623kXwLoFTkGepbmY

#### Copypasta for license when editing files at the beginning of readme
