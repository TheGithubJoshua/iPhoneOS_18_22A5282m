@class UIScreen, NSString;

@interface UIAnimation : NSObject {
    id _target;
    SEL _action;
    id _delegate;
    id /* block */ _completion;
    struct { unsigned char curve : 4; } _animationFlags;
    double _startTime;
    double _duration;
    int _state;
    UIScreen *_screen;
    NSString *_screenIdentifier;
}

- (id)target;
- (id)initWithTarget:(id)a0;
- (void)setCompletion:(id /* block */)a0;
- (int)state;
- (void)setDuration:(double)a0;
- (float)progressForFraction:(float)a0;
- (SEL)action;
- (void)setProgress:(float)a0;
- (void)setAction:(SEL)a0;
- (id /* block */)completion;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)delegate;
- (id)_screen;
- (void)stopAnimation;
- (id)_screenIdentifier;
- (float)fractionForTime:(double)a0;
- (void)markStart:(double)a0;
- (void)markStop;
- (void)setAnimationCurve:(int)a0;

@end
