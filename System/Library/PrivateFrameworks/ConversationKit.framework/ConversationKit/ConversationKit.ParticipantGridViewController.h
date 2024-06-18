@interface ConversationKit.ParticipantGridViewController : UIViewController {
    void /* unknown type, empty encoding */ participants;
    void /* unknown type, empty encoding */ participantsBeforeFocus;
    void /* unknown type, empty encoding */ layoutStyle;
    void /* unknown type, empty encoding */ forceAudioPriorityButton;
    void /* unknown type, empty encoding */ nonFullScreenConstraints;
    void /* unknown type, empty encoding */ fullScreenConstraints;
    void /* unknown type, empty encoding */ isLocalMemberAuthorizedToChangeGroupMembership;
    void /* unknown type, empty encoding */ focusedParticipant;
    void /* unknown type, empty encoding */ sashedParticipant;
    void /* unknown type, empty encoding */ selectedParticipant;
    void /* unknown type, empty encoding */ fullScreenFocusedParticipant;
    void /* unknown type, empty encoding */ participantsViewControllerDelegate;
    void /* unknown type, empty encoding */ participantGridViewControllerDelegate;
}

- (id)initWithCoder:(id)a0;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)forceBumpPriority;

@end
