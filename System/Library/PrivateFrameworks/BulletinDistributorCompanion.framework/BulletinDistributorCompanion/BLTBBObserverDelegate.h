@class NSString;
@protocol BBObserverDelegate, BLTBBObserverDelegateDelegate;

@interface BLTBBObserverDelegate : NSObject <BBObserverDelegate>

@property (weak) id<BBObserverDelegate> actualDelegate;
@property (weak, nonatomic) id<BLTBBObserverDelegateDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observer:(id)a0 noteServerConnectionStateChanged:(BOOL)a1;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;

@end
