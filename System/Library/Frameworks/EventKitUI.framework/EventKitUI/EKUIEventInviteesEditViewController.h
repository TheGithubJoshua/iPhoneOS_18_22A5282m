@class EKEvent, EKUIEventInviteesViewController, NSDate;

@interface EKUIEventInviteesEditViewController : EKEditItemViewController {
    EKEvent *_event;
    EKUIEventInviteesViewController *_controller;
}

@property (readonly, nonatomic) NSDate *selectedStartDate;
@property (readonly, nonatomic) NSDate *selectedEndDate;

- (void)loadView;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithEvent:(id)a0;

@end
