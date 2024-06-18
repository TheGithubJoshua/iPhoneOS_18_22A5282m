@interface UIRemoteControlEvent : UIEvent {
    long long _subtype;
}

- (id)_windows;
- (long long)subtype;
- (void)_simpleRemoteActionNotification:(id)a0;
- (id)_init;
- (void)dealloc;
- (long long)type;
- (void)_sendEventToResponder:(id)a0;
- (void)_setSubtype:(long long)a0;

@end
