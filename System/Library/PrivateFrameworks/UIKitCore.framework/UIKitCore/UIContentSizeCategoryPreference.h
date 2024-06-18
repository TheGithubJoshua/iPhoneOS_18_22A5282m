@class NSString;

@interface UIContentSizeCategoryPreference : NSObject

@property (retain, nonatomic) NSString *preferredContentSizeCategory;
@property (retain, nonatomic) NSString *preferredContentSizeCategoryCarPlay;

+ (void)_populateUserDefaultsContentSizeCategory:(id *)a0 carPlay:(id *)a1;
+ (void)asyncResetSystemPreferenceOverride;
+ (void)asyncOverrideSystemWithPreference:(id)a0;
+ (void)_resetSystemPreferenceOverride;
+ (id)system;
+ (void)resetSystemPreferenceOverride;
+ (void)overrideSystemWithPreference:(id)a0 forBlock:(id /* block */)a1;
+ (void)_overrideSystemPreferenceToContentSizeCategory:(id)a0 forBlock:(id /* block */)a1;
+ (void)overrideSystemWithPreference:(id)a0;
+ (void)_overrideSystemPreferenceToContentSizeCategory:(id)a0;

- (id)init;
- (void)checkForChanges;
- (unsigned long long)hash;
- (id)initWithRawUserDefaults;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithContentSizeCategory:(id)a0;
- (id)initWithContentSizeCategory:(id)a0 carPlay:(id)a1;

@end
