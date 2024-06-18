@class EKEvent;

@interface EKEventDetailCell : EKUITableViewCell {
    EKEvent *_event;
    BOOL _editable;
    double _lastLaidOutWidth;
    int _lastLaidOutPosition;
}

@property (readonly, nonatomic) BOOL isEditable;

+ (id)_bodyFontAtDefaultSize;
+ (double)_scaledDistanceCalculatedFromBottomToBaseline:(double)a0;
+ (double)_scaledDistanceCalculatedFromTopFromBaseline:(double)a0;
+ (double)detailsBottomVerticalInset;
+ (double)detailsCellDefaultHeight;
+ (double)detailsPostLabelSpace;
+ (double)detailsTopVerticalInset;

- (void)layoutMarginsDidChange;
- (void)sizeToFit;
- (void)setEvent:(id)a0;
- (void)layoutForWidth:(double)a0 position:(int)a1;
- (void).cxx_destruct;
- (id)initWithEvent:(id)a0 editable:(BOOL)a1 style:(long long)a2;
- (BOOL)update;
- (double)detailsLeftInset;
- (double)detailsRightInset;
- (id)initWithEvent:(id)a0 editable:(BOOL)a1;
- (BOOL)needsLayoutForWidth:(double)a0 position:(int)a1;

@end
