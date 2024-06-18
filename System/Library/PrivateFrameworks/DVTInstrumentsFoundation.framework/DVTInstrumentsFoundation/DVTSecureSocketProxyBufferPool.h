@class NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface DVTSecureSocketProxyBufferPool : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *bufferAvailable;
@property (retain, nonatomic) NSMutableArray *dataBuffers;

- (void).cxx_destruct;
- (void)releaseBuffer:(id)a0;
- (id)blockingAcquireBuffer;
- (id)initWithCount:(int)a0 bufferSize:(unsigned long long)a1;

@end
