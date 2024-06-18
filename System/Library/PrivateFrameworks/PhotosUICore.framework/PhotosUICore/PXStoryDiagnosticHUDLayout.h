@class PXStoryModel, NSString, NSTimer, PXGLoadingStatusComponent, PXStoryAnimationController, NSAttributedString, PXStoryRelatedController;
@protocol PXStoryDiagnosticHUDDataSource;

@interface PXStoryDiagnosticHUDLayout : PXGLayout <PXChangeObserver, PXGEntityChangeObserver, PXGStringSource> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    PXGLoadingStatusComponent *_loadingStatusComponent;
    BOOL _hasPendingContentUpdate;
    unsigned int _HUDTextSpriteIndex;
    unsigned int _badgeSpriteIndex;
    unsigned short _contentVersion;
    BOOL _wantsHUDContentVisible;
}

@property (retain, nonatomic) NSAttributedString *HUDText;
@property (readonly, nonatomic) NSAttributedString *badgeText;
@property (readonly, nonatomic) id<PXStoryDiagnosticHUDDataSource> dataSource;
@property (readonly, nonatomic) NSTimer *timer;
@property (retain, nonatomic) PXStoryRelatedController *relatedController;
@property (retain, nonatomic) PXStoryModel *model;
@property (retain, nonatomic) PXStoryAnimationController *animationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)entityManagerDidChange;
- (void)_updateContent;
- (id)init;
- (void)_invalidateContent;
- (id)initWithDataSource:(id)a0;
- (id)stringAttributesAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)attributedStringForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)safeAreaInsetsDidChange;
- (id)stringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)dealloc;
- (void)update;
- (id)axSpriteIndexes;
- (void)_enumerateDiagnosticHUDContentProvidersUsingBlock:(id /* block */)a0;
- (void)_invalidateControllers;
- (void)_invalidateModel;
- (BOOL)_shouldDisplayContentForHUDType:(long long)a0;
- (void)_updateControllers;
- (void)_updateHUDText;
- (void)_updateModel;
- (void)entityManager:(id)a0 componentDidChange:(id)a1;

@end
