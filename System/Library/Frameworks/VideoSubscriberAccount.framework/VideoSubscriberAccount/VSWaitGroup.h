@class NSObject;
@protocol OS_dispatch_group;

@interface VSWaitGroup : NSObject {
    NSObject<OS_dispatch_group> *_group;
}

- (void)leave;
- (BOOL)wait;
- (void)enter;
- (id)init;
- (void).cxx_destruct;
- (BOOL)waitWithMilliseconds:(unsigned long long)a0;

@end
