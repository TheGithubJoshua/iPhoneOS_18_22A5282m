@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CFXCameraStreamBufferQueue : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSMutableArray *outputBuffers;
@property (nonatomic) unsigned long long maxCapacity;

- (BOOL)enqueue:(id)a0;
- (id)dequeue;
- (void).cxx_destruct;
- (id)initWithMaxCapacity:(unsigned long long)a0;
- (unsigned long long)count;
- (double)headBufferTimestamp;

@end
