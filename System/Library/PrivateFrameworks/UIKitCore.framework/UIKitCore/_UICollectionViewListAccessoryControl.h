@class UIColor, UIImageView;
@protocol UITableConstants;

@interface _UICollectionViewListAccessoryControl : UIControl {
    UIImageView *_imageView;
    BOOL _needsImageViewUpdate;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) id<UITableConstants> constants;
@property (retain, nonatomic) UIColor *accessoryTintColor;
@property (retain, nonatomic) UIColor *accessoryBackgroundColor;
@property (copy, nonatomic) id /* block */ actionHandler;

- (void)_updateImageViewIfNeeded;
- (void)setHighlighted:(BOOL)a0;
- (void)setSelected:(BOOL)a0;
- (id)viewForLastBaselineLayout;
- (id)initWithType:(long long)a0 constants:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)traitCollectionDidChange:(id)a0;
- (void)_setNeedsImageViewUpdate;
- (void).cxx_destruct;
- (void)_executeActionHandler;
- (id)viewForFirstBaselineLayout;
- (void)layoutSubviews;
- (id)_renderedImage;

@end
