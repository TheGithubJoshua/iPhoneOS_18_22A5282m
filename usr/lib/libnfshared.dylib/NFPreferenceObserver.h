@interface NFPreferenceObserver : NSObject

@property (copy) id /* block */ callback;

- (void)handlePreferencesOrProfileChanged;
- (void)stop;
- (void)start:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
