@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;

@interface WLSocketHandler : NSObject {
    NSObject<OS_dispatch_queue> *_readQueue;
    NSMutableArray *_dataCache;
    NSObject<OS_dispatch_source> *_dataCacheReadSource;
    NSObject<OS_dispatch_semaphore> *_dataCacheSema;
}

+ (id)_commandStringWithData:(id)a0;
+ (int)connectToHost:(id)a0 address:(struct hostent { char *x0; char **x1; int x2; int x3; char **x4; } *)a1 port:(unsigned short)a2;
+ (void)lookupAndConnectToHost:(id)a0 port:(unsigned short)a1 completion:(id /* block */)a2;
+ (void)performDNSLookupForHost:(id)a0 completion:(id /* block */)a1;

- (id)init;
- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_readIntoCacheFromSocket:(int)a0;
- (void)_writeBytes:(const void *)a0 offset:(unsigned long long)a1 length:(unsigned long long)a2 toSocket:(int)a3 completion:(id /* block */)a4;
- (void)beginReadingIntoCacheFromSocket:(int)a0;
- (void)endReadingIntoCache;
- (id)observeSocket:(int)a0 forSourceEventType:(struct dispatch_source_type_s { } *)a1 handler:(id /* block */)a2;
- (char *)readBytesFromSocket:(int)a0 maximumSize:(unsigned long long)a1 bytesRead:(long long *)a2;
- (void)sendCommand:(id)a0 toSocket:(int)a1 completion:(id /* block */)a2;
- (void)sendData:(id)a0 toSocket:(int)a1 completion:(id /* block */)a2;
- (id)waitForBlobDataFromReadCacheReturningError:(id *)a0;
- (BOOL)waitForCommand:(id)a0 fromReadCacheReturningError:(id *)a1;
- (id)waitForDataFromReadCacheReturningError:(id *)a0;
- (id)waitForMessageFromReadCacheReturningError:(id *)a0;
- (void)writeBytes:(const void *)a0 length:(unsigned long long)a1 toSocket:(int)a2 completion:(id /* block */)a3;

@end