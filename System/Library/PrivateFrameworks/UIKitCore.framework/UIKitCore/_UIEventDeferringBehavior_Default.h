@class _UIEventDeferringManager, NSString;
@protocol _UIEventDeferringSystemShellBehaviorDelegate;

@interface _UIEventDeferringBehavior_Default : NSObject <_UIEventDeferringBehaviorInternal> {
    struct { unsigned char systemShellManagesKeyboardFocus : 1; } _behaviorFlags;
}

@property (weak, nonatomic) id<_UIEventDeferringSystemShellBehaviorDelegate> systemShellBehaviorDelegate;
@property (nonatomic) BOOL systemShellManagesKeyboardFocus;
@property (readonly, weak, nonatomic) _UIEventDeferringManager *eventDeferringManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)shouldDisableRemoteViewControllerEventDeferringForKeyboardKeyWindowChanges;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)eligibleForLocalCompatibilityRuleRemoval;
- (BOOL)wantsLocalIdealRules;
- (BOOL)shouldAllowFallbackWindowForEnvironment:(id)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)initWithEventDeferringManager:(id)a0;
- (id)succinctDescription;
- (BOOL)shouldDisableRemoteViewControllerEventDeferringForKeyboardSettingsSceneChanges;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (BOOL)shouldEvaluateEventDeferringForAnyRemoteViewControllerWindowMovement;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)shouldConsiderKeyWindowChangesForRemoteViewControllerAutomaticEventDeferring;
- (BOOL)wantsLocalCompatibilityRules;
- (long long)compareRemoteRuleOwningElement:(id)a0 toElement:(id)a1 inEnvironment:(id)a2;
- (BOOL)shouldSuppressRemoteRuleForOwningElement:(id)a0 inEnvironment:(id)a1;

@end
