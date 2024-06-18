@class NSString;

@interface _UISelectionGrabberAnimationDelegate : NSObject <CAAnimationDelegate> {
    id /* block */ block;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)delegateWithCompletionBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;

@end
