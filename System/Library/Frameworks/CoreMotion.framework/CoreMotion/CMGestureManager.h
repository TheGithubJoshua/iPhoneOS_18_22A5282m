@interface CMGestureManager : NSObject {
    id _internal;
}

@property (copy) id /* block */ gestureHandler;

+ (void)setGestureServiceEnabled:(BOOL)a0;
+ (BOOL)isGestureServiceAvailable;
+ (BOOL)isGestureServiceEnabled;

- (id)init;
- (void)dealloc;
- (id)initWithPriority:(int)a0;

@end
