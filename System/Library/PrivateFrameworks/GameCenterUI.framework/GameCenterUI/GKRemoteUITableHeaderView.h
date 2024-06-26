@class GKLabel, NSDictionary, GKButton, NSArray, NSString;
@protocol GKRemoteUIAuxiliaryViewDelegate;

@interface GKRemoteUITableHeaderView : UIView <RUIPageAccessory>

@property (nonatomic) double height;
@property (retain, nonatomic) GKLabel *label;
@property (retain, nonatomic) GKLabel *subLabel;
@property (retain, nonatomic) GKButton *button;
@property (retain, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) NSArray *replaceableConstraints;
@property (nonatomic) int layoutStyle;
@property (weak, nonatomic) id<GKRemoteUIAuxiliaryViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAttributes:(id)a0;
- (double)bottomMargin;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)buttonTapped:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (double)leftMargin;
- (double)rightMargin;
- (void)applyConstraints;
- (void)createButtonWithAttributes:(id)a0;
- (void)createLabelWithAttributes:(id)a0;
- (void)createSubLabelWithAttributes:(id)a0;
- (double)labelBaselineOffset;
- (double)labelBaselineToButtonBaselineOffset;
- (double)labelBaselineToSubLabelTopOffset;
- (double)labelTopOffset;
- (void)objectModelDidChange:(id)a0;

@end
