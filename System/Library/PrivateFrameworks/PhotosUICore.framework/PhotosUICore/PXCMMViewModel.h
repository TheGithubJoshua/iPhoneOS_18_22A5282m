@class PXSectionedSelectionManager, NSString, NSArray, NSURL, NSDate, NSSet, PXRecipient;
@protocol PXUIImageProvider, PXDisplayAsset;

@interface PXCMMViewModel : PXObservable <PXMediaTypeAggregating, PXChangeObserver, PXCMMMutableViewModel>

@property (readonly, nonatomic) long long aggregateMediaTypeForSelection;
@property (readonly, nonatomic) long long aggregateMediaType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *originalTitle;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (readonly, copy, nonatomic) NSArray *recipients;
@property (readonly, copy, nonatomic) NSURL *shareURL;
@property (readonly, copy, nonatomic) NSString *shareUUID;
@property (readonly, nonatomic, getter=isSelecting) BOOL selecting;
@property (readonly, nonatomic) BOOL selectionEnabled;
@property (readonly, copy, nonatomic) PXRecipient *originatorRecipient;
@property (readonly, nonatomic) unsigned long long numberOfReceivedAssets;
@property (readonly, nonatomic) id<PXDisplayAsset> posterAsset;
@property (readonly, nonatomic) id<PXUIImageProvider> posterMediaProvider;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) long long photosCount;
@property (readonly, nonatomic) long long videosCount;
@property (readonly, nonatomic) long long totalCount;
@property (readonly, nonatomic) long long selectedPhotosCount;
@property (readonly, nonatomic) long long selectedVideosCount;
@property (readonly, nonatomic) long long selectedCount;
@property (readonly, nonatomic) NSSet *disabledActionTypes;
@property (readonly, nonatomic) BOOL shouldShowPlaceholder;
@property (readonly, nonatomic) BOOL containsUnverifiedPersons;
@property (readonly, nonatomic, getter=isLoadingPeopleSuggestions) BOOL loadingPeopleSuggestions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setRecipients:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (id)mutableChangeObject;
- (void)setStartDate:(id)a0;
- (void)setEndDate:(id)a0;
- (void)setSubtitle:(id)a0;
- (void)setSelectionManager:(id)a0;
- (void).cxx_destruct;
- (void)setSelectedCount:(long long)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)setPhotosCount:(long long)a0;
- (void)setTitle:(id)a0;
- (void)setSelecting:(BOOL)a0;
- (void)setShareURL:(id)a0;
- (void)setVideosCount:(long long)a0;
- (void)setContainsUnverifiedPersons:(BOOL)a0;
- (void)setDisabledActionTypes:(id)a0;
- (void)setLoadingPeopleSuggestions:(BOOL)a0;
- (void)setNumberOfReceivedAssets:(unsigned long long)a0;
- (void)setOriginalTitle:(id)a0;
- (void)setOriginatorRecipient:(id)a0;
- (void)setPosterAsset:(id)a0 posterMediaProvider:(id)a1;
- (void)setSelectedPhotosCount:(long long)a0;
- (void)setSelectedVideosCount:(long long)a0;
- (void)setSelectionEnabled:(BOOL)a0;
- (void)setShareUUID:(id)a0;
- (void)setShouldShowPlaceholder:(BOOL)a0;
- (void)setTotalCount:(long long)a0;

@end