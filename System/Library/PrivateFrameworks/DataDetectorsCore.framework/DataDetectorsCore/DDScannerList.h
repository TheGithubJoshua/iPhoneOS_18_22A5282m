@class NSString, NSMutableArray;

@interface DDScannerList : NSObject {
    BOOL _spotlightSuggestionsEnabled;
    int _type;
    NSString *_hash;
    NSMutableArray *_waitQueue;
    NSMutableArray *_scannerCache;
    NSMutableArray *_activeScanners;
}

- (unsigned long long)busyCount;
- (id)dequeueJob;
- (id)initWithConfiguration:(id)a0;
- (BOOL)cancelJob:(long long)a0;
- (id)scannerCreate;
- (void).cxx_destruct;
- (void)enqueueJob:(id /* block */)a0 withIdentifier:(long long)a1;
- (id)getCachedScanner;
- (void)pushBackScanner:(id)a0;
- (void)activateScanner:(id)a0;
- (unsigned long long)totalCount;

@end
