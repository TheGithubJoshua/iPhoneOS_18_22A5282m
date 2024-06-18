@class NSString, IKViewElement, _TVCollectionView, NSArray, IKImageElement, NSIndexPath;

@interface _TVAlertTemplateController : _TVBgImageLoadingViewController <UICollectionViewDelegateFlowLayout, _TVCollectionViewDelegate, UICollectionViewDataSource> {
    IKViewElement *_templateElement;
    _TVCollectionView *_collectionView;
    NSArray *_collectionViewElements;
    IKImageElement *_bgImageElement;
    IKImageElement *_bgHeroImageElement;
    NSIndexPath *_lastFocusedIndexPath;
    BOOL _updateAutoHighlight;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)loadView;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)collectionView:(id)a0 didUpdateFocusInContext:(id)a1 withAnimationCoordinator:(id)a2;
- (BOOL)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (long long)_blurEffectStyle;
- (void).cxx_destruct;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)a0;
- (id)preferredFocusEnvironments;
- (void)collectionView:(id)a0 didReceivePhysicalPlayForItemAtIndexPath:(id)a1;
- (id)_backgroundImageProxy;
- (struct CGSize { double x0; double x1; })_backgroundImageProxySize;
- (BOOL)_backgroundImageRequiresBlur;
- (void)_configureWithBgImage:(id)a0 backdropImage:(id)a1;
- (void)_scrollToPreferredFocusView;
- (void)updateWithTemplateElement:(id)a0;
- (void)updateWithViewElement:(id)a0;

@end
