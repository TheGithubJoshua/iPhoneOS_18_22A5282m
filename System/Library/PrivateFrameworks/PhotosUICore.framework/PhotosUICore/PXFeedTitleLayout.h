@class NSString, PXFeedViewModel, NSDictionary;

@interface PXFeedTitleLayout : PXGLayout <PXChangeObserver, PXGStringSource> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    unsigned int _titleSpriteIndex;
    unsigned short _titleMediaVersion;
    NSDictionary *_subtitleAttributes;
}

@property (readonly, nonatomic) PXFeedViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_invalidateTitle;
- (void)_updateAttributes;
- (id)init;
- (id)initWithViewModel:(id)a0;
- (id)stringAttributesAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)referenceSizeDidChange;
- (void)_updateTitle;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)attributedStringForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)stringAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)screenScaleDidChange;
- (void)update;
- (id)axSpriteIndexes;
- (void)_invalidateAttributes;
- (void)_invalidateTitleContentVersion;

@end
