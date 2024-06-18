@class NSString, _SFSiriLinkCoordinator;
@protocol SFSiriLinkActionPerformer;

@interface SFSiriLinkCoordinator : NSObject <_SFSiriLinkActionPerformer> {
    _SFSiriLinkCoordinator *_internal;
}

@property (weak, nonatomic) id<SFSiriLinkActionPerformer> actionPerformer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setApplicationProxy:(id)a0;

- (void)closeTabWithUUID:(id)a0;
- (void)openTabGroupOfKind:(long long)a0 uuidString:(id)a1;
- (void)setView:(unsigned long long)a0 visible:(BOOL)a1;
- (void)createNewBookmarkWithTitle:(id)a0;
- (id)init;
- (void)closeStartPage;
- (void)openStartPage;
- (void)navigateContinuousReadingListToDirection:(unsigned long long)a0;
- (void)createNewTab;
- (void)performSearchUsingQuery:(id)a0;
- (void)openTabWithUUID:(id)a0;
- (void)createNewTabGroupWithTitle:(id)a0;
- (id)createNewTabGroupInteraction;
- (id)createNewTabInteraction;
- (void)setReaderModeEnabled:(BOOL)a0;
- (id)createNewBookmarkInteraction;
- (void)openBookmarkWithUUIDString:(id)a0;
- (id)openBookmarkInteraction;
- (void)createNewPrivateTab;
- (void)createReadingListItem;
- (void)toggleReaderMode;
- (id)changeReaderModeInteraction;
- (id)tabEntityInteractionWithUUID:(id)a0;
- (id)closeViewInteraction;
- (id)openReadingListItemInteraction;
- (void).cxx_destruct;
- (id)openTabInteraction;
- (id)createReadingListItemInteraction;
- (id)openViewInteraction;
- (id)closeTabInteraction;
- (id)createNewPrivateTabInteraction;
- (id)openTabGroupInteraction;
- (id)navigateContinuousReadingListInteraction;
- (id)webSearchInteraction;

@end
