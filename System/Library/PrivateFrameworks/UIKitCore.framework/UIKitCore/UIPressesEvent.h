@class NSSet, NSMutableSet, NSHashTable, UIPress;

@interface UIPressesEvent : UIEvent {
    NSMutableSet *_allPresses;
    NSHashTable *_terminalEventRegistrants;
}

@property (retain, nonatomic) UIPress *_triggeringPhysicalButton;
@property (readonly, nonatomic) NSSet *allPresses;

- (id)_cloneEvent;
- (id)_windows;
- (id)physicalButtonsForWindow:(id)a0;
- (void)_addGesturesForPress:(id)a0;
- (long long)subtype;
- (id)_physicalButtonsForPhase:(long long)a0;
- (long long)_modifierFlags;
- (id)_gestureRecognizersForWindow:(id)a0;
- (id)_init;
- (void)_addPress:(id)a0 forDelayedDelivery:(BOOL)a1;
- (void)_cleanupAfterDispatch;
- (id)_respondersForWindow:(id)a0;
- (id)_physicalButtonsForResponder:(id)a0 withPhase:(long long)a1;
- (id)_terminalRegistrantsForPressType:(long long)a0;
- (id)pressesForGestureRecognizer:(id)a0;
- (id)_allPresses;
- (void).cxx_destruct;
- (id)_physicalButtonsForGestureRecognizer:(id)a0 withPhase:(long long)a1;
- (id)description;
- (BOOL)_sendEventToGestureRecognizer:(id)a0;
- (id)_directionalPressWithStrongestForce;
- (id)_physicalButtonsForGestureRecognizer:(id)a0;
- (long long)type;
- (void)_unregisterForTerminalEvent:(id)a0;
- (void)_removePhysicalButton:(id)a0;
- (void)_registerForTerminalEvent:(id)a0;

@end
