@class GKPlayer, UIView, UICollectionViewCell, GKDashboardPlayerPhotoView;

@interface GKDashboardPlayerShadowView : UIView

@property (readonly, nonatomic) UIView *parentView;
@property (retain, nonatomic) GKPlayer *player;
@property (nonatomic) UICollectionViewCell *parentCell;
@property (readonly, nonatomic) BOOL isUsingPlaceholder;
@property (retain, nonatomic) GKDashboardPlayerPhotoView *photoView;
@property (nonatomic) BOOL dimmed;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)awakeFromNib;
- (void).cxx_destruct;
- (void)setPlayer:(id)a0;
- (id)player;
- (void)layoutSubviews;
- (id)parentView;
- (void)invalidatePhoto;
- (BOOL)isUsingPlaceholder;
- (void)setupPhoto;

@end
