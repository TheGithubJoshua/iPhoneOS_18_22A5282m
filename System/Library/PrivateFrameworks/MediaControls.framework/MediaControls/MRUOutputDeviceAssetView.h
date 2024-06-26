@class BSUIEmojiLabelView, NSString, MRUAssetView, MRUVisualStylingProvider, MRUOutputDeviceAsset;

@interface MRUOutputDeviceAssetView : UIView <MRUVisualStylingProviderObserver>

@property (retain, nonatomic) BSUIEmojiLabelView *titleLabel;
@property (retain, nonatomic) MRUAssetView *assetView;
@property (retain, nonatomic) MRUOutputDeviceAsset *asset;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *glyphState;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateVisibility;
- (void)updateVisualStyling;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateContentSizeCategory;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)visualStylingProviderDidChange:(id)a0;
- (void)layoutSubviews;

@end
