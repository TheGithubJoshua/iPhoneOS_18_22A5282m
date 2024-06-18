@class PXPhotosViewModel, _PXPhotosBarButtonSpecManager;

@interface PXPhotosBarButtonItemsController : NSObject

@property (readonly, nonatomic) _PXPhotosBarButtonSpecManager *specManager;
@property (readonly, nonatomic) PXPhotosViewModel *viewModel;

- (id)init;
- (id)_createBarButtonItemWithTitle:(id)a0 orSystemItem:(long long)a1 orSystemIconName:(id)a2 target:(id)a3 action:(SEL)a4 menuAction:(SEL)a5;
- (id)initWithExtendedTraitCollection:(id)a0 viewModel:(id)a1;
- (id)createBarButtonItemWithSystemIconName:(id)a0 target:(id)a1 action:(SEL)a2 menuAction:(SEL)a3;
- (void).cxx_destruct;
- (id)createBarButtonItemWithSystemItem:(long long)a0 target:(id)a1 action:(SEL)a2 menuAction:(SEL)a3;
- (id)createBarButtonItemWithTitle:(id)a0 target:(id)a1 action:(SEL)a2 menuAction:(SEL)a3;

@end
