@class NSMutableArray;

@interface AXRTTSettingsListenerHelper : NSObject {
    void *_listenerAddress;
    NSMutableArray *_selectorKeys;
}

- (void).cxx_destruct;
- (id)initWithListenerAddress:(void *)a0;
- (void)addSelectorKey:(SEL)a0;
- (void)dealloc;

@end
