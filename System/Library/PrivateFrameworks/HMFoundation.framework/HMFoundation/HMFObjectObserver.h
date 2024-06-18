@interface HMFObjectObserver : HMFObject

@property (readonly) unsigned long long cachedHash;
@property (readonly, weak) id observedObject;
@property (copy) id /* block */ deallocationBlock;

- (id)init;
- (void)_startObserving;
- (unsigned long long)hash;
- (void)_stopObserving;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)initWithObservedObject:(id)a0;

@end
