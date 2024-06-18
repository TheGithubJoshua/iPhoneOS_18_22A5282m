@class INRelevantShortcutStore;

@interface HDSPWidgetRelevantShortcutDonor : NSObject <HDSPWidgetRelevanceDonor> {
    INRelevantShortcutStore *_store;
}

- (void)_setRelevantShortcuts:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)donateRelevanceForWidgetState:(long long)a0;

@end
