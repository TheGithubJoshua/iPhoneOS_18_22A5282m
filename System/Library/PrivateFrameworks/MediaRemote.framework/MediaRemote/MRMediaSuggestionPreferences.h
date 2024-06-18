@class NSArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MRMediaSuggestionPreferences : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_globalDisplayPreferencesForContexts;
    NSMutableDictionary *_disabledBundlesForContexts;
}

@property (class, readonly, nonatomic) NSArray *allContexts;

@property (copy, nonatomic) id /* block */ userDisplayPreferencesDidChangeCallback;

- (id)init;
- (id)disabledBundleIdentifiersInContext:(id)a0;
- (BOOL)suggestionsDisabledInContext:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end
