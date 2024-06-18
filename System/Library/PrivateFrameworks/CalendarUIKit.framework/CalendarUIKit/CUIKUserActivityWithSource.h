@class NSString;

@interface CUIKUserActivityWithSource : CUIKUserActivity {
    long long _sourceType;
    NSString *_sourceHost;
    NSString *_sourceOwner;
}

- (id)initWithDictionary:(id)a0;
- (id)initWithSource:(id)a0 type:(unsigned long long)a1;
- (BOOL)_supportsConsistentExternalIDAcrossDevices:(long long)a0;
- (BOOL)_supportsConsistentExternalIDAcrossDevices;
- (void).cxx_destruct;
- (BOOL)_requiresHostAndOwner;
- (unsigned long long)isMatchForSource:(id)a0;
- (BOOL)_isLocalSource;
- (id)dictionary;

@end
