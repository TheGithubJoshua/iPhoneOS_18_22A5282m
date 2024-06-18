@class NSString;

@interface PKScrollViewDelegateEventsHandler : NSObject <UIScrollViewDelegate>

@property (copy, nonatomic) id /* block */ scrollViewDidEndScrollingAnimationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;

@end
