@class NSString;

@interface _UIFocusBehavior_FKA : NSObject <_UIFocusBehavior>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)tabBasedMovementLoops;
- (BOOL)supportsClipToBounds;
- (BOOL)textViewCanBecomeFocused:(id)a0;
- (BOOL)defaultValueForSelectionFollowsFocusInTableView:(id)a0;
- (BOOL)wantsTreeLocking;
- (BOOL)supportsArrowKeys;
- (BOOL)throttlesProgrammaticFocusUpdates;
- (BOOL)supportsIndirectPanningMovement;
- (long long)pageButtonScrollingStyle;
- (BOOL)ignoresKeyWindowStatusWhenRestoringFocus;
- (BOOL)supportsIndirectRotaryMovement;
- (BOOL)shouldCallAccessibilityOverrides;
- (BOOL)supportsLinearMovementDebugOverlay;
- (BOOL)preventsCellFocusabilityWhileEditing;
- (BOOL)controlCanBecomeFocused:(id)a0;
- (BOOL)treatFirstAndLastHeadingsAsGlobal;
- (BOOL)shouldUseAccessibilityCompareForItemGeometry;
- (BOOL)isContainerEligibleForFocusUpdateSearchRoot:(id)a0;
- (long long)scrollingMode;
- (BOOL)useDifferentialScrollTrigger;
- (BOOL)refinesIndexBarTargetContentOffset;
- (long long)requiredInputDevices;
- (BOOL)defaultValueForSelectionFollowsFocusInCollectionView:(id)a0;
- (BOOL)searchBarTextFieldCanBecomeFocused;
- (BOOL)wantsFocusSystemForScene:(id)a0;
- (double)stabilizedLinearFocusMovementTimeout;
- (long long)skipKeyCommandsForKeyEvents;
- (BOOL)enforcesStrictTargetContentOffsetAdjustmentBehavior;
- (BOOL)supportViewTransparencyAndMultipleWindows;
- (long long)focusDeferral;
- (long long)indirectMovementPriority;
- (BOOL)shouldConvertIndirectTapsIntoArrowKeys;
- (long long)buttonSelectionMode;
- (BOOL)tabBarCanBecomeFocused;
- (long long)deliverKeyEventsToFocusEngine;
- (BOOL)syncsFocusAndResponder;
- (BOOL)shouldEnableFocusOnSelect;
- (BOOL)showsFocusRingForItem:(id)a0;
- (BOOL)supportsGameControllers;
- (BOOL)includesContentScrollViewInPreferredFocusEnvironments;
- (BOOL)supportsParentFocusRings;
- (BOOL)supportsTabKey;
- (BOOL)tabBarButtonCanBecomeFocused;
- (long long)focusRingVisibility;
- (long long)cellFocusability;
- (long long)focusCastingMode;
- (unsigned long long)focusGroupContainmentBehavior;
- (BOOL)shouldSupressIndirectMovementOnSelect;
- (BOOL)honorsFocusSystemEnabledInfoPlistKey;
- (unsigned long long)focusGroupMovementBehavior;

@end
