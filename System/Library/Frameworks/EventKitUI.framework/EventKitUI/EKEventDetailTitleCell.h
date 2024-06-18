@class UIView, NSString, UILabel, UIButton, NSMutableArray, NSObject, EKEventDetailSuggestedLocationCell, EKEventDetailConferenceCell;
@protocol EKEventDetailTitleCellDelegate;

@interface EKEventDetailTitleCell : EKEventDetailCell <UITextViewDelegate, EKEventDetailSuggestedLocationCellDelegate, ConferenceCellDelegate> {
    UILabel *_titleView;
    NSMutableArray *_locationItems;
    BOOL _showAllLocation;
    struct _NSRange { unsigned long long location; unsigned long long length; } _showLocationRange;
    UIView *_predictedLocationContainer;
    EKEventDetailSuggestedLocationCell *_suggestedLocationCell;
    EKEventDetailConferenceCell *_conferenceDetailView;
    UILabel *_travelTimeView;
    NSMutableArray *_dateTimeViews;
    UILabel *_recurrenceView;
    UILabel *_statusView;
    UIButton *_editButton;
    unsigned int _visibleItems;
    BOOL _observingLocaleChanges;
    BOOL _hideTopCellSeparator;
    BOOL _hideBottomCellSeparator;
    int _lastPosition;
}

@property (weak, nonatomic) NSObject<EKEventDetailTitleCellDelegate> *delegate;
@property (nonatomic) BOOL hasMapItemLaunchOptionFromTimeToLeaveNotification;
@property (nonatomic) BOOL showingInlineDayView;
@property (nonatomic) unsigned long long numberOfTitleLines;
@property (readonly, nonatomic) UIView *sourceViewForPopover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_titleFont;
+ (id)_locationFont;
+ (void)_invalidateCachedFonts;
+ (id)_largeTitleFont;
+ (void)_registerForInvalidation;

- (id)_statusView;
- (void)layoutMarginsDidChange;
- (void)setPrimaryTextColor:(id)a0;
- (void)setStatusString:(id)a0;
- (void)didTapDismissSuggestedLocationCell:(id)a0;
- (void)setHideTopCellSeparator:(BOOL)a0;
- (void)conferenceCellUpdated:(id)a0;
- (id)_travelTimeView;
- (id)_suggestedLocationCell;
- (void)setHideBottomCellSeparator:(BOOL)a0;
- (void)setTravelTimeString:(id)a0;
- (id)_titleView;
- (id)_conferenceDetailView;
- (void)addLocation:(id)a0;
- (void)handleTapOnLabel:(id)a0;
- (void)didTapAddSuggestedLocationCell:(id)a0 disambiguatedLocation:(id)a1;
- (BOOL)_shouldShowConferenceCell;
- (void)_saveEventWithSpan:(long long)a0;
- (double)_layoutForWidth:(double)a0;
- (void)contentSizeCategoryChanged:(id)a0;
- (void)_promptForSpanWithSourceView:(id)a0 completionBlock:(id /* block */)a1;
- (void)setRecurrenceString:(id)a0;
- (void)layoutForWidth:(double)a0 position:(int)a1;
- (void)setLocation:(id)a0;
- (id)_predictedLocationContainer;
- (void).cxx_destruct;
- (void)_updateSeparatorStyle;
- (void)setColor:(id)a0;
- (id)_recurrenceView;
- (BOOL)_useLargeFonts;
- (id)initWithEvent:(id)a0 editable:(BOOL)a1 style:(long long)a2;
- (id)_editButton;
- (void)dealloc;
- (void)editButtonTapped;
- (id)_dateTimeViewForLine:(unsigned long long)a0;
- (void)layoutSubviews;
- (void)setTitle:(id)a0;
- (double)titleHeight;
- (void)_setDateTimeString:(id)a0 line:(unsigned long long)a1;
- (BOOL)update;
- (id)owningViewController;

@end
