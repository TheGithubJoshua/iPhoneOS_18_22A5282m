@class NSArray, NSMutableDictionary, NSString, MTVisualStylingProvider;

@interface _UNMaterialButton : UIButton <MTVisualStylingRequiring> {
    MTVisualStylingProvider *_visualStylingProvider;
}

@property (retain, nonatomic) NSMutableDictionary *styling;
@property (retain, nonatomic) NSMutableDictionary *imageViewStyling;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHighlighted:(BOOL)a0;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)setEnabled:(BOOL)a0;
- (id)visualStylingProviderForCategory:(long long)a0;
- (void)_applyButtonStyling;
- (void)_applyImageViewStyling;
- (void)_applyStyling;
- (void)_setFlagsRelatedToState:(unsigned long long)a0 to:(BOOL)a1;
- (void)setImageViewStyle:(long long)a0 forState:(unsigned long long)a1;
- (void)setStyle:(long long)a0 forState:(unsigned long long)a1;

@end
