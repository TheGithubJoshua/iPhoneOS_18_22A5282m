@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ATSocket : NSObject <NSSecureCoding> {
    NSObject<OS_dispatch_source> *_source;
    NSMutableArray *_delegates;
    char _readBuffer[65536];
    char *_writeBuffer;
    unsigned int _writeBufferOffset;
    unsigned long long _totalBytesSent;
    unsigned long long _totalBytesReceived;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long socketMode;
@property (nonatomic) unsigned long long suggestedBufferSize;
@property (nonatomic) int descriptor;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id userInfo;
@property (readonly, nonatomic) int transportUpdgradeExceptionCount;
@property (nonatomic) unsigned int writeBufferSize;

+ (id)createBoundPair:(id[2])a0;

- (id)initWithCoder:(id)a0;
- (void)addDelegate:(id)a0;
- (id)init;
- (BOOL)isOpen;
- (id)flush;
- (void)removeDelegate:(id)a0;
- (id)_flush;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)open;
- (void)dealloc;
- (void)close;
- (void)writeData:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)writeAllData:(id)a0 error:(id *)a1;
- (void)closeDescriptor;
- (void)removeTransportUpgradeException;
- (void)addTransportUpgradeException;
- (void)notifyHasDataAvailable:(const char *)a0 length:(long long)a1;
- (void)notifySocketDidClose;
- (int)recv:(char *)a0 offset:(unsigned int)a1 len:(unsigned int)a2 error:(id *)a3;
- (int)send:(const char *)a0 offset:(unsigned int)a1 len:(unsigned int)a2 error:(id *)a3;
- (int)_send:(const char *)a0 offset:(unsigned int)a1 len:(unsigned int)a2 error:(id *)a3;

@end
