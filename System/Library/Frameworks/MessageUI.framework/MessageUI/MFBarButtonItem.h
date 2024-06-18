@class UIImage;

@interface MFBarButtonItem : UIBarButtonItem

@property (retain, nonatomic) UIImage *enabledImage;
@property (retain, nonatomic) UIImage *disabledImage;

- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (id)initWithImage:(id)a0 disabledImage:(id)a1 style:(long long)a2 target:(id)a3 action:(SEL)a4;

@end
