@class NSObject;
@protocol GKNATObserverDelegate;

@interface GKNATObserver : NSObject

@property NSObject<GKNATObserverDelegate> *delegate;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (int)currentNATType;
- (void)shouldTryNATCheck;
- (id)initWithOptions:(id)a0;

@end
