@class NSMutableArray, AXBaseSettings;

@interface AXSettingsObjectDestructionHelper : NSObject {
    void *_listenerAddress;
    NSMutableArray *_selectorKeys;
    AXBaseSettings *_settings;
}

- (void).cxx_destruct;
- (void)addSelectorKey:(SEL)a0;
- (void)dealloc;
- (id)initWithListenerAddress:(void *)a0 forSettings:(id)a1;

@end
