@protocol SBCollectionViewCellDelegate;

@interface SBCollectionViewCell : UICollectionViewCell {
    BOOL _performSetHighlighted;
}

@property (weak, nonatomic) id<SBCollectionViewCellDelegate> delegate;
@property (nonatomic) BOOL protectDelayedUnhighlights;

- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_didSetHighlighted:(BOOL)a0;
- (void)_performSetHighlighted;
- (void)setHighlighted:(BOOL)a0 afterDelay:(double)a1;

@end
