@class NSString, NSObject, VOSCommandProfile;
@protocol OS_dispatch_queue;

@interface VOSCommandManager : NSObject <VOSCommandProfileDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_siriShortCutToken;
}

@property (nonatomic) BOOL activeProfileIsUserProfile;
@property (nonatomic) BOOL loadShortcuts;
@property (readonly, nonatomic) VOSCommandProfile *activeProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)validateCanAddGesture:(id)a0 toCommand:(id)a1 withResolver:(id)a2;
- (unsigned long long)availabilityForGesture:(id)a0 withResolver:(id)a1;
- (void)restoreDefaultProfile;
- (id)addKeyChord:(id)a0 toCommand:(id)a1 withResolver:(id)a2;
- (BOOL)commandHasModifiedBindingsWhenZoomEnabled:(id)a0 withResolver:(id)a1;
- (BOOL)commandHasAnyBindings:(id)a0 withResolver:(id)a1;
- (id)shortcutBindingsForCommand:(id)a0 withResolver:(id)a1;
- (void)_commonInit;
- (id)commandForTouchGesture:(id)a0 withResolver:(id)a1;
- (void)batchUpdateActiveProfile:(id /* block */)a0 saveIfSuccessful:(BOOL)a1 completion:(id /* block */)a2;
- (unsigned long long)availabilityForCommand:(id)a0 withResolver:(id)a1;
- (void)_loadSystemProfile;
- (id)validateCanAddKeyChord:(id)a0 toCommand:(id)a1 withResolver:(id)a2;
- (id)gestureBindingsForCommand:(id)a0 withResolver:(id)a1;
- (void)saveAsUserProfile;
- (void)_commonUserProfileInit;
- (id)allCommandsWithResolver:(id)a0;
- (id)validateCanRemoveGesture:(id)a0 fromCommand:(id)a1 withResolver:(id)a2;
- (id)addGesture:(id)a0 toCommand:(id)a1 withResolver:(id)a2;
- (id)initPreferringUserProfile;
- (unsigned long long)availabilityForShortcut:(id)a0 withResolver:(id)a1;
- (void).cxx_destruct;
- (id)userPresentableAllShortcutBindingsWithResolver:(id)a0;
- (id)commandForKeyChord:(id)a0 withResolver:(id)a1;
- (id)initPreferringUserProfileWithoutShortcuts;
- (id)availableSiriShortcuts:(id)a0;
- (id)validateCanRemoveKeyChord:(id)a0 fromCommand:(id)a1 withResolver:(id)a2;
- (void)reloadPreferringUserProfile;
- (BOOL)_validateUserProfileDiscrepancies:(id)a0;
- (void)dealloc;
- (id)removeKeyChord:(id)a0 fromCommand:(id)a1 withResolver:(id)a2;
- (id)systemProfile;
- (id)initWithSystemProfile;
- (id)removeGesture:(id)a0 fromCommand:(id)a1 withResolver:(id)a2;
- (id)allSiriShortcutCommandsWithResolver:(id)a0;
- (void)reloadWithSystemProfile;
- (id)allShortcutBindingsWithResolver:(id)a0;

@end
