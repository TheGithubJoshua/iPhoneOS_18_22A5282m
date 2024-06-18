@class NSString, UIColorPickerViewController;

@interface PKPaletteSystemColorPickerController : PKPaletteBaseColorPickerController <UIColorPickerViewControllerDelegate>

@property (retain, nonatomic) UIColorPickerViewController *colorPickerViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)selectedColor;
- (void)setSelectedColor:(id)a0;
- (id)viewController;
- (void)colorPickerViewController:(id)a0 didSelectColor:(id)a1 continuously:(BOOL)a2;
- (void)setSupportsAlpha:(BOOL)a0;
- (BOOL)supportsAlpha;
- (void)setColorUserInterfaceStyle:(long long)a0;
- (long long)colorUserInterfaceStyle;
- (BOOL)_shouldConvertColorPickerColorFromDarkToLight;

@end
