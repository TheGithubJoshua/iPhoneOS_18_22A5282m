@class NSArray, NSMutableArray;

@interface WFVoiceShortcutCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) NSArray *voiceShortcuts;
@property (readonly, copy, nonatomic) NSMutableArray *waitingFetchRequests;
@property (readonly, nonatomic) unsigned long long state;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (id)init;
- (void)databaseDidChange;
- (void)setCachedVoiceShortcuts:(id /* block */)a0;
- (void)clear;
- (void)getCachedVoiceShortcuts:(id /* block */)a0;
- (void).cxx_destruct;
- (void)registerForDatabaseNotifications;
- (void)dealloc;
- (void)unregisterFromDatabaseNotifications;

@end
