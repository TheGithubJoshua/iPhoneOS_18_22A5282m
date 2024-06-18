@class BMStoreSource;

@interface BMRestrictedSource : BMSource {
    BMStoreSource *_storeSource;
}

- (void)sendEvent:(id)a0;
- (id)initWithStoreSource:(id)a0;
- (void).cxx_destruct;
- (void)sendEvent:(id)a0 timestamp:(double)a1;

@end
