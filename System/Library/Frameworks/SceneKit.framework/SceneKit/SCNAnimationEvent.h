@interface SCNAnimationEvent : NSObject {
    double _eventTime;
    id /* block */ _eventBlock;
}

+ (id)animationEventWithKeyTime:(double)a0 block:(id /* block */)a1;

- (id)init;
- (double)time;
- (void)setTime:(double)a0;
- (void)setEventBlock:(id /* block */)a0;
- (id /* block */)eventBlock;
- (void)dealloc;

@end
