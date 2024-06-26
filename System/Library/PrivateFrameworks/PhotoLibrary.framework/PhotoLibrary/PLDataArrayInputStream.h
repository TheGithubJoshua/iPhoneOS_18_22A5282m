@class NSArray, NSMutableData;
@protocol PLDataArrayInputStreamProgressDelegate;

@interface PLDataArrayInputStream : NSInputStream {
    NSArray *_dataArray;
    NSMutableData *_bodyData;
    unsigned long long _dataCount;
    unsigned long long _dataLength;
    unsigned long long _dataOffset;
    unsigned long long _currentIndex;
    unsigned long long _currentOffset;
    unsigned long long _currentLength;
    BOOL _openEventSent;
    unsigned long long _streamStatus;
    id _delegate;
    struct __CFRunLoopSource { } *_rls;
    void /* function */ *_clientCallback;
    struct { long long version; void *info; void /* function */ *retain; void /* function */ *release; void /* function */ *copyDescription; } _clientContext;
}

@property (nonatomic) id<PLDataArrayInputStreamProgressDelegate> progressDelegate;

- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)_updateProgress;
- (id)streamError;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (BOOL)_setCFClientFlags:(unsigned long long)a0 callback:(void /* function */ *)a1 context:(struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a2;
- (unsigned long long)streamStatus;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)setDelegate:(id)a0;
- (unsigned long long)totalBytes;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (id)delegate;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (void)open;
- (void)dealloc;
- (BOOL)hasBytesAvailable;
- (void)close;
- (unsigned long long)bytesRead;
- (void)_scheduleCallback;
- (void)_streamEventTrigger;
- (void)_scheduleProgressUpdate;
- (id)initWithDataArray:(id)a0;

@end
