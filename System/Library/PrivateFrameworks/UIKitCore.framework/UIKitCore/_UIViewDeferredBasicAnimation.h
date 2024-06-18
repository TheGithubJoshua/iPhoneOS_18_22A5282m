@class _UIViewAnimationFrame;

@interface _UIViewDeferredBasicAnimation : _UIViewDeferredAnimation {
    _UIViewAnimationFrame *_finalValue;
}

- (void)animateFrameAtIndex:(long long)a0 animations:(id /* block */)a1;
- (BOOL)isEmpty;
- (void)_enumerateAnimationFramesForKeyframes:(id /* block */)a0;
- (void).cxx_destruct;
- (void)addAnimationFrameForValue:(id)a0;
- (id)_animationFrames;

@end
