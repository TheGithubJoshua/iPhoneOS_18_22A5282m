@class NSArray, SOExtensionFinder, NSObject;
@protocol OS_dispatch_queue;

@interface SOExtensionManager : NSObject {
    NSObject<OS_dispatch_queue> *_extensionManagerQueue;
    SOExtensionFinder *_extensionFinder;
}

@property (readonly, nonatomic) NSArray *loadedExtensions;

+ (id)sharedInstance;
+ (id)internalExtensionBundleIdentifier;
+ (id)internalExtensionsBundleIdentifiers;
+ (BOOL)isTiburonExtensionBundleIdentifier:(id)a0;
+ (BOOL)isInternalExtensionBundleIdentifier:(id)a0;
+ (void)_sendNotificationsLoadedExtensions:(id)a0 new:(id)a1 removed:(id)a2;
+ (BOOL)_isMatchedExtension:(id)a0 forBundleIdentifier:(id)a1;
+ (BOOL)isAppleConnectExtensionBundleIdentifier:(id)a0;

- (id)init;
- (id)loadedInternalExtension;
- (id)loadExtensionWithBundleIdentifier:(id)a0;
- (void)_doEndMatchingExtensions;
- (void)unloadExtensions;
- (void)loadExtensions;
- (BOOL)isLoadedExtensionWithBundleIdentifer:(id)a0;
- (id)_doLoadExtensions;
- (void).cxx_destruct;
- (void)loadExtensionWithBundleIdentifer:(id)a0 completion:(id /* block */)a1;
- (void)_doBeginMatchingExtensions;
- (void)beginMatchingExtensions;
- (void)dealloc;
- (id)loadedExtensionWithBundleIdentifer:(id)a0;
- (id)loadInternalExtension;
- (void)endMatchingExtensions;

@end
