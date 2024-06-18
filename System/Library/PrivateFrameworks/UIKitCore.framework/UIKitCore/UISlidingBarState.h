@class UISlidingBarConfiguration;

@interface UISlidingBarState : NSObject <NSCopying>

@property (nonatomic) double leadingWidth;
@property (nonatomic) double trailingWidth;
@property (nonatomic) double supplementaryWidth;
@property (nonatomic) double leadingOffscreenWidth;
@property (nonatomic) double trailingOffscreenWidth;
@property (nonatomic) double supplementaryOffscreenWidth;
@property (nonatomic) double leadingDragOffset;
@property (nonatomic) double trailingDragOffset;
@property (nonatomic) double supplementaryDragOffset;
@property (nonatomic) double mainWidth;
@property (retain, nonatomic) UISlidingBarConfiguration *configuration;
@property (nonatomic, setter=_setLeadingOverlayWidth:) double _leadingOverlayWidth;
@property (nonatomic, setter=_setTreatLeadingHiddenAsOverlaps:) BOOL _treatLeadingHiddenAsOverlaps;
@property (nonatomic, setter=_setTrailingOverlayWidth:) double _trailingOverlayWidth;
@property (nonatomic, setter=_setTreatTrailingHiddenAsOverlaps:) BOOL _treatTrailingHiddenAsOverlaps;
@property (nonatomic, setter=_setSupplementaryOverlayWidth:) double _supplementaryOverlayWidth;
@property (nonatomic, setter=_setTreatSupplementaryHiddenAsOverlaps:) BOOL _treatSupplementaryHiddenAsOverlaps;
@property (nonatomic) double _rubberBandInset;
@property (nonatomic) double _keyboardAdjustment;
@property (nonatomic, setter=_setCollapsedState:) long long _collapsedState;
@property (readonly, nonatomic) BOOL leadingOverlapsMain;
@property (readonly, nonatomic) BOOL trailingOverlapsMain;
@property (readonly, nonatomic) BOOL supplementaryOverlapsMain;
@property (readonly, nonatomic, getter=isCollapsed) BOOL collapsed;
@property (readonly, nonatomic) BOOL isLeadingVisible;
@property (readonly, nonatomic) BOOL isTrailingVisible;
@property (readonly, nonatomic) BOOL isSupplementaryVisible;

- (id)stateRequest;
- (BOOL)matchesRequest:(id)a0;
- (BOOL)_shouldUseSlidingBars;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_leadingEntirelyOverlapsMain;
- (BOOL)_supplementaryEntirelyOverlapsMain;
- (id)_interactiveStateRequest;
- (double)_distanceFromRequest:(id)a0;
- (BOOL)_trailingEntirelyOverlapsMain;
- (double)_absoluteDistanceFromRequest:(id)a0;
- (id)_configuration;

@end
