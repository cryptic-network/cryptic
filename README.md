![image](https://github.com/cryptic-network/cryptic/raw/master/src/config/logo-small.png)

```
LICENSES:

// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers 
// Copyright (c) 2014-2018, The Monero Project 
// Copyright (c) 2018-2019, The TurtleCoin Developers
// Copyright (c) 2021, The Cryptic Developers
```

[Website](http://crypticnetwork.cf) | [Discord](https://discord.gg/ZKpuEYwB9g) | [Bitcoin Talk]()

![Download Count](https://img.shields.io/github/downloads/cryptic-network/cryptic/total.svg)
![Open Issue Count](https://img.shields.io/github/issues/cryptic-network/cryptic)
![License](https://img.shields.io/github/license/cryptic-network/cryptic)
![Version](https://img.shields.io/github/v/release/cryptic-network/cryptic)

****

### Coin specifications:

|Ticker|Decimals|Supply|Block Reward|Block Time|P2P Port|RPC Port|Service Port|Algo
|--|--|--|--|--|--|--|--|--|
|XCC|8|1,000,000 XCC|1 XCC|60 Seconds|17940|17941|17942|Argon2Id Chukwa|

****

### Installing

You can download the latest binary images from here: https://github.com/cryptic-network/cryptic/releases
To compile the binaries yourself, scroll down to the next section.

****

### Ubuntu 64 bit Compiling

##### Prerequisites

You will need the following packages: boost, cmake (3.8 or higher), make, git and GCC/G++ (GCC-7.0 or higher).

##### Commands

- `sudo add-apt-repository ppa:ubuntu-toolchain-r/test -y`
- `sudo apt-get update`
- `sudo apt-get install aptitude -y`
- `sudo aptitude install -y build-essential g++-8 gcc-8 git libboost-all-dev python-pip`
- `sudo pip install cmake`
- `export CC=gcc-8`
- `export CXX=g++-8`
- `git clone -b master --single-branch https://github.com/cryptic-network/cryptic`
- `cd cryptic`
- `mkdir build`
- `cd build`
- `cmake ..`
- `make` *(To compile with a different amount of threads, use `make -j4` and replace the 4 with the your desired thread amount.)*

When the build process is complete. You can find the binary in `cryptic/build/src`.

- `cd src`
- `./Crypticd --version`

****
### Windows 64 bit Compiling

##### Prerequisites
- Install  [Visual Studio 2017 Community Edition](https://github.com/cryptic-network/cryptic/downloads/vs_community.exe)
- When installing Visual Studio, it is  **required**  that you install  **Desktop development with C++**
- Install [Boost 1.68](https://bintray.com/boostorg/release/download_file?file_path=1.68.0%2Fbinaries%2Fboost_1_68_0-msvc-14.1-64.exe)

##### Commands
- [Download](https://github.com/cryptic-network/cryptic/archive/master.zip) the GitHub repository and extract it somewhere.
- From the start menu, open 'Developer Command Prompt for VS 2017'.
- `cd <your_Cryptic_location>`
- `mkdir build`
- `cd build`
- `set PATH="C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin";%PATH%`
- `cmake -G "Visual Studio 15 2017 Win64" .. -DBOOST_ROOT=C:/local/boost_1_68_0`

When it's done creating the cmake files you go ahead and open the `cryptic/build/cryptic.sln` file.
On the top right corner you see `Debug` and `x64` next to the `green play button`. Change `Debug` to `Releases`.  Then click on `Build` on the top menu and hit `Build Solution`. When the build process is complete. You can find the binary in `cryptic/build/src/Releases`.

****

### OSX/Apple 64 bit Compiling

##### Prerequisites

-   Install XCode and Developer Tools.

##### Commands

-   `which brew || /usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"`
-   `brew install --force cmake boost llvm gcc@8`
-   `export CC=gcc-8`
-   `export CXX=g++-8`
-   `git clone -b master --single-branch https://github.com/cryptic-network/cryptic`
-   `cd cryptic`
-   `mkdir build`
-   `cd build`
-   `cmake ..`
- `make` *(To compile with a different amount of threads, use `make -j4` and replace the 4 with the your desired thread amount.)*

When the build process is complete. You can find the binary in `cryptic/build/src`.

- `cd src`
- `./Crypticd --version`

****
### Raspberry Pi 3 B+ (AARCH64/ARM64) Compiling
The following images are known to work. Your operation system image  **MUST**  be 64 bit.

##### Known working images

-   [https://github.com/Crazyhead90/pi64/releases](https://github.com/Crazyhead90/pi64/releases)
-   [https://fedoraproject.org/wiki/Architectures/ARM/Raspberry_Pi#aarch64_supported_images_for_Raspberry_Pi_3](https://fedoraproject.org/wiki/Architectures/ARM/Raspberry_Pi#aarch64_supported_images_for_Raspberry_Pi_3)
-   [https://archlinuxarm.org/platforms/armv8/broadcom/raspberry-pi-3](https://archlinuxarm.org/platforms/armv8/broadcom/raspberry-pi-3)

Once you have a 64 bit image installed, setup proceeds the same as any Linux distribution. Ensure you have at least 2GB of ram, or the build is likely to fail. You may need to setup swap space.

##### Commands

-   `git clone -b master --single-branch https://github.com/cryptic-network/cryptic`
-   `cd cryptic`
-   `mkdir build`
-   `cd build`
-   `cmake ..`
-   `make`

When the build process is complete. You can find the binary in `cryptic/build/src`.

- `cd src`
- `./Crypticd --version`

****

### Thanks to these people to make cryptic happen
Cryptonote Developers, Bytecoin Developers, Monero Developers, Forknote Project, TurtleCoin Community, Cryptic Developers.

****

### Donation
**BTC:** `bc1q6avn9m07p8wfewr9ucawpeheudlp96xc4m24a5`\
**BCH:** `qrsehkzksgvzuwr8k4setwtgxcwfgucf0uwhqys6rq`\
**ETH:** `0xf341d53ed7a679D56E0E5CBc3484c0c3bf712250`\
**LTC:** `LdwSbPA8jtZhPFQtCR3qV4zMz6v8RAxSoD`\
**DOGE:** `DMBTAEMGZEiD7t29zqDoGFeLonxd75prY2`\
**ADA:** `addr1qxcpfr0unfcst6su0nsxgu85czr7qhm7gah0aw8j9pxfj99szjxlexn3qh4pcl8qv3c0fsy8up0hu3mwl6u0y2zvny2q65kqec`
