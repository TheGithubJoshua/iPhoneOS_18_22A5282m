@class UIColor, NSString, CAFilter, MTCoreMaterialVisualStyling;

@interface MTVisualStyling : NSObject

@property (readonly, copy, nonatomic) UIColor *color;
@property (readonly, nonatomic) double alpha;
@property (readonly, nonatomic) CAFilter *composedFilter;
@property (readonly, copy, nonatomic) NSString *visualStyleSetName;
@property (readonly, copy, nonatomic) NSString *visualStyleName;
@property (readonly, nonatomic, getter=_coreMaterialVisualStyling) MTCoreMaterialVisualStyling *coreMaterialVisualStyling;

- (id)initWithCoreMaterialVisualStyling:(id)a0;
- (id)visualEffect;
- (id)_layerConfig;
- (void).cxx_destruct;
- (void)applyToView:(id)a0 withColorBlock:(id /* block */)a1;

@end
