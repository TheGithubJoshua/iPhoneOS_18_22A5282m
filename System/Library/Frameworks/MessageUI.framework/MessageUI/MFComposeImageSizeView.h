@class UISegmentedControl, NSMutableArray;
@protocol MFComposeImageSizeViewDelegate;

@interface MFComposeImageSizeView : MFMailComposeHeaderView {
    UISegmentedControl *_segmentedControl;
    NSMutableArray *_visibleScales;
}

@property (weak, nonatomic) id<MFComposeImageSizeViewDelegate> delegate;

- (void)setScale:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (unsigned long long)_insertIndexForScale:(unsigned long long)a0;
- (unsigned long long)_scaleLabelIndexForScale:(unsigned long long)a0;
- (void)removeSizeDescriptionForScale:(unsigned long long)a0;
- (void)segmentedControlChanged;
- (void)setSizeDescription:(id)a0 forScale:(unsigned long long)a1;

@end
