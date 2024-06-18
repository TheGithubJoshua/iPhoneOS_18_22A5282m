@class UIImage;

@interface HUCheckmarkCell : HUActivityIndicatorCell

@property (nonatomic) BOOL checked;
@property (retain, nonatomic) UIImage *checkedImage;
@property (retain, nonatomic) UIImage *uncheckedImage;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (void)prepareForReuse;

@end
