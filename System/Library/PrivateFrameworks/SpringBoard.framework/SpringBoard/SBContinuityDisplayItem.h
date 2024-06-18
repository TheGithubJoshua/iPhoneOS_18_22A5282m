@class SBBestAppSuggestion;

@interface SBContinuityDisplayItem : SBDisplayItem

@property (readonly, nonatomic) SBBestAppSuggestion *appSuggestion;

+ (id)continuityAppDisplayItemWithBundleIdentifier:(id)a0 appSuggestion:(id)a1;

- (id)initWithType:(long long)a0 displayIdentifier:(id)a1 appSuggestion:(id)a2;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
