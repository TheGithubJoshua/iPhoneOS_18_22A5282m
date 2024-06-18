@class NSString, NSXPCConnection;
@protocol LNAutoShortcutsProviderInterface;

@interface LNAutoShortcutsProvider : NSObject <LNAutoShortcutsProviderInterface> {
    NSXPCConnection *_connection;
    id<LNAutoShortcutsProviderInterface> _directAccess;
    id<LNAutoShortcutsProviderInterface> _xpcAccess;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)autoShortcutsForBundleIdentifier:(id)a0 localeIdentifier:(id)a1 completion:(id /* block */)a2;
- (id)autoShortcutsForLocaleIdentifier:(id)a0 error:(id *)a1;
- (void)retrieveActionForLocalizedPhrase:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)autoShortcutsForApplicationRecord:(id)a0 localeIdentifier:(id)a1;
- (void)dealloc;
- (id)initWithOptions:(long long)a0;
- (void)autoShortcutsForLocaleIdentifier:(id)a0 completion:(id /* block */)a1;

@end
