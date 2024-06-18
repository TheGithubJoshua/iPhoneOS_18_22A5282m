@class UILabel;

@interface UISegmentLabel : UILabel

@property (weak, nonatomic) UILabel *associatedLabel;

- (id)init;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)_disabledFontColor;
- (id)_parentSegment;
- (id)_associatedScalingLabel;
- (void).cxx_destruct;

@end
