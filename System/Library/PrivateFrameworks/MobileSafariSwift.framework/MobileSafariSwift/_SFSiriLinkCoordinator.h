@interface _SFSiriLinkCoordinator : NSObject

@property (nonatomic, weak) void /* unknown type, empty encoding */ actionPerformer;

+ (void)setApplicationProxy:(id)a0;

- (id)init;
- (id)createNewTabGroupInteraction;
- (id)createNewTabInteraction;
- (id)createNewBookmarkInteraction;
- (id)openBookmarkInteraction;
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
