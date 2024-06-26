@class PXUIWidgetBarViewTile;

@interface PXUIWidgetBar : PXWidgetBar

@property (readonly, nonatomic) PXUIWidgetBarViewTile *_viewTile;

- (void).cxx_destruct;
- (void)updateView;
- (void)checkInTile:(id)a0;
- (id)checkOutTileWithKind:(long long)a0;
- (id)createTileAnimator;

@end
