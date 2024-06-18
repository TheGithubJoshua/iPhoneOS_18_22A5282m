@class NSArray, NSObject;
@protocol OS_os_log;

@interface DEDDiagnosticCollector : NSObject

@property (retain) NSObject<OS_os_log> *log;
@property (retain) NSArray *cachedExtensions;
@property unsigned long long collectionTimeout;

- (void)prepareItemsWithDeferredExtensionInfo:(id)a0;
- (id)init;
- (void)prepareItemsWithIdentifier:(id)a0 parameters:(id)a1 session:(id)a2;
- (void)loadExtensionTextDataInExtension:(id)a0 localization:(id)a1;
- (id)collectItemsWithIdentifier:(id)a0 parameters:(id)a1;
- (void).cxx_destruct;
- (BOOL)isDiagnosticExtensionAvailable;
- (id)availableDiagnosticExtensions;
- (id)extensionForIdentifier:(id)a0;
- (id)extensionManager;
- (void)cleanupItemsWithIdentifier:(id)a0 parameters:(id)a1 session:(id)a2;

@end
