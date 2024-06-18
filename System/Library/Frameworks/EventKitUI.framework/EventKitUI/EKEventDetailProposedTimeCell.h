@class EKEvent, UIView, EKCalendarEventInvitationNotificationAttendee, EKEventDetailsHighlightControl;

@interface EKEventDetailProposedTimeCell : EKEventDetailCell {
    EKCalendarEventInvitationNotificationAttendee *_attendee;
    EKEventDetailsHighlightControl *_control;
    UIView *_topSeparator;
    EKEvent *_event;
    UIView *_bgView;
}

@property (nonatomic) BOOL showsTopSeparator;

+ (BOOL)requiresConstraintBasedLayout;

- (void)setSeparatorStyle:(long long)a0;
- (void).cxx_destruct;
- (BOOL)update;
- (void)setRoundedCorners:(unsigned long long)a0;
- (BOOL)hasCustomLayout;
- (id)initWithEvent:(id)a0 andAttendee:(id)a1;
- (BOOL)shouldDisplayForEvent;

@end
