@class NSMutableDictionary, TIKeyboardInputManagerLoaderSyncHelper, TIKeyboardInputManagerBase, NSXPCConnection;

@interface TIKeyboardInputManagerLoader : NSObject {
    TIKeyboardInputManagerLoaderSyncHelper *_helper;
    NSMutableDictionary *_availableInputManagers;
    NSMutableDictionary *_lastUsedDate;
    NSMutableDictionary *_activeInputManagers;
}

@property (retain, nonatomic) TIKeyboardInputManagerBase *mostRecentlyRequested;
@property (nonatomic) NSXPCConnection *interactingConnection;

+ (id)sharedLoader;

- (id)init;
- (id)resourceInputModes;
- (BOOL)hasActiveInputManagers;
- (id)activeInputModeIdentifiers;
- (void)prepareForKeyboardActivity;
- (void)registerMaintenanceActivity;
- (void)releaseAllInputManagers:(BOOL)a0;
- (void)jettisonAllActiveInputManagers;
- (void).cxx_destruct;
- (void)reduceCacheToSize:(unsigned long long)a0;
- (void)startSyncHelper;
- (BOOL)isActiveInputManager:(id)a0;
- (void)cacheInputManager:(id)a0;
- (void)dealloc;
- (id)inputManagerForInputMode:(id)a0 withKeyboardState:(id)a1 class:(Class)a2;
- (void)prepareForKeyboardInactivity;

@end
