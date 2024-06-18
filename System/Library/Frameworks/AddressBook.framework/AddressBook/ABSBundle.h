@class NSBundle;

@interface ABSBundle : NSObject

@property (readonly, nonatomic) NSBundle *backingBundle;

- (id)init;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (Class)classNamed:(id)a0;
- (id)initWithBackingBundle:(id)a0;

@end
