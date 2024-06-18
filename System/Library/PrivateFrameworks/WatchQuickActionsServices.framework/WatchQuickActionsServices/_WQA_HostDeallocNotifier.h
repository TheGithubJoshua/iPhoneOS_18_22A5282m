@protocol WatchQuickActionHostObserver;

@interface _WQA_HostDeallocNotifier : NSObject

@property (weak, nonatomic) id<WatchQuickActionHostObserver> hostObserver;

- (void).cxx_destruct;
- (void)dealloc;

@end
