@class UIColor, EKEventDetailTitleCell, UIView, NSObject, NSDate;
@protocol EKEventTitleDetailItemDelegate;

@interface EKEventTitleDetailItem : EKEventDetailItem <EKEventDetailTitleCellDelegate> {
    EKEventDetailTitleCell *_cell;
    UIColor *_color;
    BOOL _showDot;
    BOOL _cellNeedsUpdate;
}

@property (nonatomic) BOOL hidesTopSeparator;
@property (nonatomic) BOOL hidesBottomSeparator;
@property (retain, nonatomic) NSDate *proposedTime;
@property (readonly, nonatomic) UIView *sourceViewForPopover;
@property (weak, nonatomic) NSObject<EKEventTitleDetailItemDelegate> *editDelegate;
@property (nonatomic) BOOL hasMapItemLaunchOptionFromTimeToLeaveNotification;
@property (nonatomic) unsigned long long numberOfTitleLines;

- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void)refreshForHeightChange;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1 forceUpdate:(BOOL)a2;
- (BOOL)showsDetectedConferenceItem;
- (BOOL)shouldShowEditButtonInline;
- (void)refreshCopiedEvents;
- (void)predictionWasActedOn;
- (void)_updateCellIfNeededForWidth:(double)a0;
- (void).cxx_destruct;
- (BOOL)minimalMode;
- (void)editButtonPressed;
- (void)setCellPosition:(int)a0;
- (void)reset;
- (double)titleHeight;
- (id)owningViewController;

@end
