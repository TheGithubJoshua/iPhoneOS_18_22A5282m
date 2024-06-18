@class NSArray;

@interface _UIActivityApplicationExtensionDiscovery : NSObject

@property (copy, nonatomic) NSArray *extensionPointIdentifiers;
@property (copy, nonatomic) id /* block */ fetchShortcutsBlock;

+ (id)extensionBasedActivityForExtension:(id)a0;
+ (id)extensionMatchingDictionariesForExtensionItems:(id)a0;
+ (void)registerContinuousExtensionsDiscoveryOnLaunch;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)reportExtensionsCacheResult;
- (id)_extensionsForMatchingContext:(id)a0 error:(id *)a1;
- (id)activitiesForMatchingContext:(id)a0 error:(id *)a1;
- (id)initWithExtensionPointIdentifiers:(id)a0;
- (void)primeWithDiscoveryContext:(id)a0;

@end
