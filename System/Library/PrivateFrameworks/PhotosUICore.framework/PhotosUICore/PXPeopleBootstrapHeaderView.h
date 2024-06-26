@class PXPeopleScalableAvatarView, UILabel, NSString;
@protocol PXPerson;

@interface PXPeopleBootstrapHeaderView : UICollectionReusableView

@property (retain, nonatomic) PXPeopleScalableAvatarView *avatarView;
@property (retain, nonatomic) id<PXPerson> person;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *descriptionText;

+ (id)_titleFont;
+ (struct CGSize { double x0; double x1; })_sizeForString:(id)a0 width:(double)a1 multiline:(BOOL)a2 font:(id)a3;
+ (struct CGSize { double x0; double x1; })sizeForTitle:(id)a0 boundingSize:(struct CGSize { double x0; double x1; })a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_setupHeader;

@end
