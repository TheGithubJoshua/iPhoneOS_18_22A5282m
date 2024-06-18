@class UILabel;

@interface EKEventDetailRecurrenceCell : EKEventDetailCell {
    UILabel *_recurrenceLabel;
    double _lastLayoutWidth;
}

- (double)height;
- (void)setRecurrenceString:(id)a0;
- (void)layoutForWidth:(double)a0 position:(int)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_myTableView;
- (id)_recurrenceLabel;

@end
