# libsrtp-android
libsrtp for android

## how to build

    git submodule init

    git submodule update

    ## export CC=/home/ouyang/android/arm-linux-androideabi-4.6/bin/arm-linux-androideabi-gcc

    export TOOLCHAIN=$ANDROID_NDK/toolchains/arm-linux-androideabi-4.9/prebuilt/linux-x86_64
    
    export CC=$TOOLCHAIN/bin/arm-linux-androideabi-gcc
        
    export SYSROOT=$ANDROID_NDK/platforms/android-21/arch-arm
    
    export CFLAGS="--sysroot=$SYSROOT -g"
    
    export LDFLAGS="-L$SYSROOT/usr/lib -g"
    
    ln -snf $SYSROOT/usr/lib/crtbegin_so.o ./
    ln -snf $SYSROOT/usr/lib/crtend_so.o ./
    
    ./configure --host=x86_64
    
    make
    
    make libsrtp2.so

## how to test (rtpw not -a)

    ./test/rtpw -r -b 7MB1gHv/o96kMuO1cqT0Z0xOoslqwq7nw/2lpuSO -d all -e 128 192.168.31.119 9999
    
    ffmpeg -re -f avfoundation -r 30 -i 0:0 -threads 0  -vcodec libx264 -an -pix_fmt yuv420p -r 30 -f rawvideo -tune zerolatency -vf scale=1280:720 -b:v 299k -bufsize 299k -payload_type 99 -ssrc 1 -f rtp -srtp_out_suite AES_CM_128_HMAC_SHA1_80 -srtp_out_params 7MB1gHv/o96kMuO1cqT0Z0xOoslqwq7nw/2lpuSO srtp://192.168.31.119:9999?rtcpport=9999&localrtcpport=9999&pkt_size=1378​

