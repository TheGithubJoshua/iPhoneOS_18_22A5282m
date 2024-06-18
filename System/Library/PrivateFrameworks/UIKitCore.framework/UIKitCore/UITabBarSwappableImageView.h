@class UIImage;

@interface UITabBarSwappableImageView : UIImageView {
    UIImage *_value;
    UIImage *_alternate;
    UIImage *_landscapeValue;
    UIImage *_landscapeAlternate;
    BOOL _showAlternate;
    BOOL _showLandscape;
}

- (id)_unselectedCompactImage;
- (void)setLandscape:(BOOL)a0;
- (void)setAlternateImage:(id)a0;
- (void)setCurrentImage;
- (void)setImage:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)showAlternateImage:(BOOL)a0;
- (id)initWithImage:(id)a0 alternateImage:(id)a1 landscapeImage:(id)a2 landscapeAlternateImage:(id)a3;
- (id)_selectedImage;
- (id)_unselectedImage;
- (id)_selectedCompactImage;

@end
