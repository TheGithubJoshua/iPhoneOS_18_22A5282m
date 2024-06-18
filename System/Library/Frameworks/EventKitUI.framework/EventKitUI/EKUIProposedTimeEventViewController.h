@class EKUIEmailCompositionManager, EKCalendarEventInvitationNotificationAttendee, EKUIRecurrenceAlertController;
@protocol EKEditItemViewControllerDelegate;

@interface EKUIProposedTimeEventViewController : EKEventViewController <EKEditItemViewControllerProtocol>

@property (retain) EKCalendarEventInvitationNotificationAttendee *proposedTimeAttendee;
@property (retain) EKUIRecurrenceAlertController *recurrenceAlertController;
@property (retain) EKUIEmailCompositionManager *messageSendingManager;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (weak, nonatomic) id<EKEditItemViewControllerDelegate> editDelegate;
@property (nonatomic) BOOL presentModally;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) BOOL useCustomBackButton;

- (id)items;
- (id)proposedTime;
- (void).cxx_destruct;
- (void)invokeAction:(long long)a0 eventStatusButtonsView:(id)a1;
- (id)_statusButtons;
- (id)viewTitle;
- (id)initWithProposedTimeAttendee:(id)a0;

@end
