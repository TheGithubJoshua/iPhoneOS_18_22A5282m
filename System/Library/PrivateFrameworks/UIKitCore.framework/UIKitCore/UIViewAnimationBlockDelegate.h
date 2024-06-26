@class UIViewAnimationState, NSMutableArray;

@interface UIViewAnimationBlockDelegate : NSObject {
    BOOL _didBeginBlockAnimation;
    BOOL _isZeroDuration;
    BOOL _allowsUserInteractionToCutOffEndOfAnimation;
    BOOL _allowsHitTesting;
    BOOL _animationDidStopSent;
    id /* block */ _start;
    id /* block */ _completion;
    NSMutableArray *_systemPostAnimationActions;
}

@property (readonly, nonatomic) BOOL _allowsUserInteraction;
@property (nonatomic, setter=_setForcingImmediateCompletion:) BOOL _forcingImmediateCompletion;
@property (weak, nonatomic) UIViewAnimationState *_animationState;

+ (void)setAnimationBlockDelegateWithDuration:(double)a0 options:(unsigned long long)a1 start:(id /* block */)a2 completion:(id /* block */)a3;
+ (id)animationBlockDelegateWithDuration:(double)a0 options:(unsigned long long)a1 start:(id /* block */)a2 completion:(id /* block */)a3;

- (void)_didEndBlockAnimation:(id)a0 finished:(id)a1 context:(void *)a2;
- (void)_willBeginBlockAnimation:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (void)_sendDeferredCompletion:(id)a0;
- (BOOL)_allowsUserInteractionToCutOffEndOfAnimation;
- (BOOL)_allowsHitTesting;

@end
