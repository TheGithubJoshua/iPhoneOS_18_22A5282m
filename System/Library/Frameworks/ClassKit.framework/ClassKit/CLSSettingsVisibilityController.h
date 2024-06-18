@class CLSCurrentUser;

@interface CLSSettingsVisibilityController : NSObject {
    CLSCurrentUser *_currentUser;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)shared;

- (id)init;
- (id)cachedCurrentUserAppleID;
- (id)currentUser;
- (void)unlock;
- (void).cxx_destruct;
- (void)lock;
- (void)currentUserDidChange:(id)a0;
- (BOOL)settingsUIVisible;
- (void)dealloc;

@end
