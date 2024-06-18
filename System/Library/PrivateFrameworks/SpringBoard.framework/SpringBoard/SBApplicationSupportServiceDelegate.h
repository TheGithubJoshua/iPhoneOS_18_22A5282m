@class NSString, UISApplicationSupportService;

@interface SBApplicationSupportServiceDelegate : NSObject <UISApplicationSupportServiceDelegate> {
    UISApplicationSupportService *_service;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_rebuildDefaultContext;
- (void).cxx_destruct;
- (void)requestPasscodeCheckUIForClient:(id)a0 withCompletion:(id /* block */)a1;
- (void)requestPasscodeUnlockUIForClient:(id)a0 withCompletion:(id /* block */)a1;
- (void)destroyScenesWithPersistentIdentifiers:(id)a0 animationType:(unsigned long long)a1 destroySessions:(BOOL)a2 forClient:(id)a3 completion:(id /* block */)a4;
- (BOOL)service:(id)a0 overrideClientInitialization:(id)a1;
- (void)dealloc;
- (id)service:(id)a0 initializeClient:(id)a1;

@end
