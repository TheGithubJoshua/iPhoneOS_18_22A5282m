@class NSString, NSArray;
@protocol PFParallaxLayoutConfiguration;

@interface PFParallaxLayout : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } imageSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } deviceResolution;
@property (readonly, nonatomic) struct CGSize { double width; double height; } parallaxPadding;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inactiveFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } parallaxVisibleFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } parallaxInactiveFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } normalizedVisibleFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } timeFrame;
@property (readonly, nonatomic) NSString *clockLayerOrder;
@property (readonly, nonatomic) unsigned long long clockIntersection;
@property (readonly, nonatomic) BOOL canApplyParallax;
@property (readonly, nonatomic) id<PFParallaxLayoutConfiguration> configuration;
@property (readonly, copy, nonatomic) NSArray *debugLayouts;

+ (id)dictionaryWithLayout:(id)a0;
+ (id)layoutWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)debugSwiftCode;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageExtent;
- (id)initWithImageSize:(struct CGSize { double x0; double x1; })a0 deviceResolution:(struct CGSize { double x0; double x1; })a1 parallaxPadding:(struct CGSize { double x0; double x1; })a2 visibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 inactiveFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 timeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 clockLayerOrder:(id)a6 clockIntersection:(unsigned long long)a7 debugLayouts:(id)a8;
- (id)layoutByUpdatingClockIntersection:(unsigned long long)a0;
- (id)layoutByUpdatingClockLayerOrder:(id)a0;
- (id)layoutByUpdatingConfiguration:(id)a0;
- (id)layoutByUpdatingImageSize:(struct CGSize { double x0; double x1; })a0;
- (id)layoutByUpdatingInactiveFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutByUpdatingNormalizedVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutByUpdatingVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutByUpgradingToConfiguration:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })screenExtent;

@end
