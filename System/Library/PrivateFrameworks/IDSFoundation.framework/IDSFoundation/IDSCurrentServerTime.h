@class CUTDeferredTaskQueue, IDSCurrentServerTimePair;
@protocol IDSCurrentServerTimeProvider;

@interface IDSCurrentServerTime : NSObject

@property (retain, nonatomic) id<IDSCurrentServerTimeProvider> serverTimeProvider;
@property (retain) IDSCurrentServerTimePair *timePair;
@property (readonly, nonatomic) CUTDeferredTaskQueue *refreshServerTimeTask;

+ (id)sharedInstance;

- (void)_refreshServerTime;
- (id)initWithServerTimeProvider:(id)a0;
- (double)_refreshTimeInterval;
- (void)_storeCurrentTime;
- (void).cxx_destruct;
- (void)_storeInitialServerTimeIfNeeded;
- (id)currentServerTimeDate;
- (double)currentServerTimeInterval;

@end
