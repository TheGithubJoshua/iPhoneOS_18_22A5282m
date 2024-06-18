@class NSObject;
@protocol OS_dispatch_queue, NSStreamDelegate;

@interface UploadDataStream : NSInputStream {
    unsigned long long remainingLength;
    unsigned long long status;
    NSObject<OS_dispatch_queue> *callBackQueue;
    id<NSStreamDelegate> _delegate;
}

- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (id)initWithLength:(unsigned long long)a0;
- (id)streamError;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (unsigned long long)streamStatus;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (id)delegate;
- (void)open;
- (BOOL)hasBytesAvailable;
- (id)propertyForKey:(id)a0;
- (void)close;

@end
