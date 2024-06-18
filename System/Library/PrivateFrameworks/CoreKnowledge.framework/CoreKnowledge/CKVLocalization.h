@class NSString, NSSet, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface CKVLocalization : NSObject <NSSecureCoding> {
    NSString *_siriLanguageCode;
    NSSet *_dictationLanguageCodes;
    NSURL *_cachedAssetPath;
    int _assetRequestCount;
    BOOL _assetResolved;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (long long)supportedLocaleFromLanguageCode:(id)a0;
+ (id)supportedNSLocaleFromLanguageCode:(id)a0;
+ (id)supportedLanguageCodeFromLocale:(id)a0;
+ (id)defaultLocalization;

- (void)refresh;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)dictationLanguageCodes;
- (BOOL)_locateMorphunAssetForLocale:(id)a0 outAssetPath:(id *)a1;
- (BOOL)isEqualToLocalization:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)allLanguageCodes;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSiriLanguageCode:(id)a0;
- (id)siriLanguageCode;
- (long long)locateMorphunAssetForSiriLanguage:(id *)a0;

@end
