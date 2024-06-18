@class NSHashTable;

@interface UIPencilEvent : UIEvent

@property (retain, nonatomic) NSHashTable *trackedInteractions;

- (long long)subtype;
- (void)deregisterInteraction:(id)a0;
- (void)registerInteraction:(id)a0;
- (id)_init;
- (void).cxx_destruct;
- (void)deregisterAllInteractionsForWindow:(id)a0;
- (id)collectAllActiveInteractions;
- (long long)type;
- (void)_sendEventToInteractions;

@end
