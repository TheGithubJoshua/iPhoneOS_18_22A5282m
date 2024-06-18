@class NSArray, NSMutableDictionary;

@interface EKEventProposedTimeDetailItem : EKEventDetailItem {
    NSMutableDictionary *_cellForAttendee;
    NSArray *_attendeesWithProposedTimes;
    BOOL _visibilityChanged;
}

- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (BOOL)hasDetailViewControllerAtIndex:(unsigned long long)a0;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (BOOL)detailItemVisibilityChanged;
- (void)_updateCellsIfNeededForWidth:(double)a0;
- (void).cxx_destruct;
- (unsigned long long)numberOfSubitems;
- (void)setCellPosition:(int)a0;
- (void)reset;
- (id)attendeeForIndex:(unsigned long long)a0;

@end
