@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MCManagedDomainsCache : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSMutableArray *memberQueueCache;

+ (id)sharedCache;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isURLManaged:(id)a0;
- (void)memberQueueRereadCache;
- (void)rereadCache;

@end
