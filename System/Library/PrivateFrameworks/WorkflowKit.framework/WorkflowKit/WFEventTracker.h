@class PETEventTracker2, NSObject;
@protocol OS_dispatch_queue;

@interface WFEventTracker : NSObject

@property (readonly, nonatomic) PETEventTracker2 *proactiveTracker;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *loggingQueue;

+ (id)sharedTracker;

- (id)init;
- (id)initWithTracker:(id)a0;
- (void).cxx_destruct;
- (void)trackEvent:(id)a0;
- (void)trackCoreAnalyticsEvent:(id)a0 count:(int)a1;
- (void)trackEvent:(id)a0 count:(int)a1;
- (void)trackPET2Event:(id)a0 count:(int)a1;

@end
