@class NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface FMFSynchronizer : NSObject

@property (nonatomic) BOOL timeoutOccurred;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSString *info;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem;

- (void)signal;
- (void)wait;
- (id)loggingID;
- (void).cxx_destruct;
- (id)initWithDescription:(id)a0 andTimeout:(double)a1;

@end
