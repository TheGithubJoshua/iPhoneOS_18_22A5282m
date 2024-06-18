@protocol XBApplicationProviding;

@interface XBCacheDeleteRequestHandler : NSObject

@property (retain, nonatomic) id<XBApplicationProviding> applicationProvider;

- (id)performPeriodic:(id)a0 urgency:(int)a1;
- (id)amountPurgeable:(id)a0 urgency:(int)a1;
- (void).cxx_destruct;
- (id)performPurge:(id)a0 urgency:(int)a1;
- (id)initWithApplicationProvider:(id)a0;

@end
