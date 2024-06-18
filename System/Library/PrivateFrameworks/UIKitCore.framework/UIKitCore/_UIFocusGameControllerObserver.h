@interface _UIFocusGameControllerObserver : _UIFocusStateObserver {
    struct __IOHIDManager { } *_hidManager;
}

- (id)init;
- (void)_unregisterObserver;
- (void)dealloc;
- (BOOL)isActive;
- (void)_registerObserver;

@end
