@class NSString;

@interface XRRecentArrayStoredPrefs : XRRecentArray {
    NSString *_preferencePathArray;
    NSString *_preferencePathMaxCount;
}

+ (id)sharedInstanceForPreferencePath:(id)a0;

- (void)synchronize;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_readUserDefaults;
- (id)initWithMaximumRecentCount:(unsigned long long)a0 preferencePath:(id)a1;

@end
