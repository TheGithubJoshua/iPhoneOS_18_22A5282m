@class NSLayoutConstraint;

@interface CPSAspectFitImageView : UIImageView

@property (retain, nonatomic) NSLayoutConstraint *aspectConstraint;

- (id)init;
- (void)setImage:(id)a0;
- (void).cxx_destruct;
- (void)_updateConstraints;

@end
