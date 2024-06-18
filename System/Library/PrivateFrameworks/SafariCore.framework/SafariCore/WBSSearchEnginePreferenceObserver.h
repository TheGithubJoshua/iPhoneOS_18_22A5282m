@interface WBSSearchEnginePreferenceObserver : NSObject

@property (class, readonly, nonatomic) WBSSearchEnginePreferenceObserver *sharedObserver;

@property (readonly, nonatomic) BOOL duckDuckGoDefaultSearchEngine;
@property (readonly, nonatomic) BOOL isABTestingEnabled;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_updateSearchEnginePreference:(id)a0;

@end
