@class UIActivityViewController, NSArray, NSString, LPLinkMetadata, NSURL;
@protocol UIActivityViewControllerObjectManipulationDelegate;

@interface SHSheetContext : NSObject

@property (readonly, weak, nonatomic) UIActivityViewController *activityViewController;
@property (readonly, nonatomic) NSArray *activityItems;
@property (readonly, nonatomic) NSArray *activityTypesToCreateInShareService;
@property (nonatomic) long long sharingStyle;
@property (retain, nonatomic) NSArray *applicationActivities;
@property (copy, nonatomic) NSArray *activityTypeOrder;
@property (copy, nonatomic) NSArray *excludedActivityTypes;
@property (copy, nonatomic) NSArray *includedActivityTypes;
@property (copy, nonatomic) NSArray *heroActionActivityTypes;
@property (nonatomic) long long excludedActivityCategories;
@property (nonatomic) BOOL allowsEmbedding;
@property (nonatomic) BOOL configureForCloudSharing;
@property (nonatomic) BOOL configureForPhotosEdit;
@property (nonatomic) BOOL hideHeaderView;
@property (retain, nonatomic) NSString *topContentSectionText;
@property (nonatomic) BOOL isContentManaged;
@property (nonatomic) BOOL shouldSuggestFamilyMembers;
@property (nonatomic) BOOL allowsProminentActivity;
@property (nonatomic) BOOL showKeyboardAutomatically;
@property (nonatomic) BOOL whitelistActionActivitiesOnly;
@property (nonatomic) BOOL instantShareSheet;
@property (nonatomic) BOOL useRemoteUIService;
@property (nonatomic) BOOL showHeroActionsHorizontally;
@property (retain, nonatomic) LPLinkMetadata *photosHeaderMetadata;
@property (copy, nonatomic) NSArray *selectedAssetIdentifiers;
@property (copy, nonatomic) NSArray *peopleSuggestionBundleIds;
@property (nonatomic) long long collaborationMode;
@property (copy, nonatomic) NSURL *managedFileURL;
@property (weak, nonatomic) id<UIActivityViewControllerObjectManipulationDelegate> objectManipulationDelegate;

- (void).cxx_destruct;
- (id)description;
- (id)initWithActivityViewController:(id)a0 activityItems:(id)a1;

@end
