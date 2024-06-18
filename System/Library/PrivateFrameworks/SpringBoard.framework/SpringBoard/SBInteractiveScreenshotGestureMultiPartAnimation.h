@class NSMutableArray;

@interface SBInteractiveScreenshotGestureMultiPartAnimation : NSObject {
    id /* block */ _completionHandler;
    NSMutableArray *_pendingAnimationIdentifiers;
}

- (void).cxx_destruct;
- (id)initWithCompletionHandler:(id /* block */)a0;
- (void)beginAnimationWithIdentifier:(id)a0;
- (void)completeAnimationWithIdentifier:(id)a0 finished:(BOOL)a1 retargeted:(BOOL)a2;

@end
