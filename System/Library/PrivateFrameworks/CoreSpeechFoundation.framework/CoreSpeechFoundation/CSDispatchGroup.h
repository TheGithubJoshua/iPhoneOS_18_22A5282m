@class NSObject;
@protocol OS_dispatch_group;

@interface CSDispatchGroup : NSObject {
    NSObject<OS_dispatch_group> *_dispatchGroup;
    int _dispatchGroupCounter;
}

- (void)leave;
- (void)enter;
- (id)init;
- (long long)waitWithTimeout:(unsigned long long)a0;
- (void).cxx_destruct;

@end
