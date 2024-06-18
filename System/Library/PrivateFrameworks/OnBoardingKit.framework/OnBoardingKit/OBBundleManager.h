@class NSString;

@interface OBBundleManager : NSObject

@property (retain, nonatomic) NSString *overrideBundleSearchPath;

+ (id)sharedManager;

- (id)_allPrivacyBundles;
- (id)orderedPrivacyBundlesWithPrivacyPaneBundle:(BOOL)a0;
- (id)privacyLinkBundleForBundles:(id)a0;
- (id)orderedPrivacyBundles;
- (id)_providersByBundleNames;
- (id)bundlesWithIdentifiers:(id)a0;
- (id)allBundles;
- (void).cxx_destruct;
- (id)bundleWithIdentifier:(id)a0;
- (id)_bundleSearchPath;
- (id)bundleWithIdentifier:(id)a0 usingSearchPath:(id)a1 includePlaceholder:(BOOL)a2 isLinkBundle:(BOOL)a3;

@end
