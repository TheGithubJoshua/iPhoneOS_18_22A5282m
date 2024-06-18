@class NSString, NSMutableDictionary, NSMapTable, NSMutableSet, SBWindowSceneManager;

@interface SBPIPControllerCoordinator : NSObject <SBIdleTimerProviding, SBApplicationHosting> {
    NSMutableDictionary *_controllersByType;
    NSMapTable *_controllerInterruptionAssertionsByCoordinatorAssertion;
    NSMapTable *_coordinatorAssertionToInterruptionAssertionMap;
    NSMutableSet *_pictureInPictureWindowsHiddenReasons;
}

@property (retain, nonatomic) SBWindowSceneManager *windowSceneManager;
@property (readonly, nonatomic) BOOL hasIdleTimerBehaviors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canHostAnApp;
- (id)init;
- (id)controllerForType:(long long)a0;
- (id)hostedAppSceneHandle;
- (BOOL)shouldStartPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)a0 scenePersistenceIdentifier:(id)a1 pipContentType:(long long)a2;
- (id)coordinatorRequestedIdleTimerBehavior:(id)a0;
- (BOOL)isAnyPictureInPictureWindowVisible;
- (id)acquireInterruptionAssertionForReason:(long long)a0 identifier:(id)a1;
- (void)registerController:(id)a0 forType:(long long)a1;
- (void).cxx_destruct;
- (long long)tetheringModeForScenePersistenceIdentifier:(id)a0 pipContentType:(long long)a1;
- (BOOL)isPresentingPictureInPictureRequiringMedusaKeyboard;
- (void)_enumerateControllersByDescendingPriority:(id /* block */)a0;
- (void)handleDestructionRequestForSceneHandles:(id)a0;
- (id)hostedAppSceneHandles;
- (void)setPictureInPictureWindowsHidden:(BOOL)a0 withReason:(id)a1;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)a0;
- (BOOL)isHostingAnApp;
- (void)conformsToSBApplicationHosting;

@end
