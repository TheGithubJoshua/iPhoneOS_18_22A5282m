@class PXUpdater;

@interface PXMockExtendedTraitCollection : PXExtendedTraitCollection <PXMockMutableExtendedTraitCollection> {
    PXUpdater *_updater;
}

@property (nonatomic) long long userInterfaceIdiom;
@property (nonatomic) long long layoutSizeClass;
@property (nonatomic) long long layoutOrientation;
@property (nonatomic) struct CGSize { double width; double height; } layoutReferenceSize;
@property (nonatomic) long long windowOrientation;
@property (nonatomic) double displayScale;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeAreaInsets;
@property (nonatomic) long long formFactor;
@property (nonatomic) unsigned long long visibleChromeElements;

- (void)unregisterObservations;
- (id)initWithViewController:(id)a0;
- (void)_updateLayoutSizeClass;
- (void)_updateSafeAreaInsets;
- (long long)layoutSizeSubclass;
- (void)performChanges:(id /* block */)a0;
- (void)registerObservations;
- (void)didPerformChanges;
- (void)_invalidateLayoutSizeClass;
- (void)_setNeedsUpdate;
- (void)_invalidateLayoutReferenceSizeAndDisplayScale;
- (id)initWithFormFactor:(long long)a0 orientation:(long long)a1 visibleChromeElements:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)_updateLayoutReferenceSizeAndDisplayScale;
- (id)initWithLayoutSizeClass:(long long)a0;
- (void)_invalidateSafeAreaInsets;

@end
