@class NSString, NSSet, NSArray, NSDictionary;

@interface ATXHomeScreenPage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long numberOfLeafIconSpots;
@property (nonatomic) long long suggestedPageType;
@property (nonatomic) unsigned long long pageIndex;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic) unsigned long long maxPortraitRows;
@property (nonatomic) unsigned long long maxPortraitColumns;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSSet *associatedModeUUIDs;
@property (copy, nonatomic) NSArray *stacks;
@property (copy, nonatomic) NSArray *panels;
@property (copy, nonatomic) NSDictionary *appLocations;
@property (copy, nonatomic) NSDictionary *webClipLocations;
@property (copy, nonatomic) NSArray *leafIcons;
@property (copy, nonatomic) NSArray *candidateApps;
@property (readonly, nonatomic) NSArray *leafAppIcons;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)dictionaryRepresentationForIntrospection;
- (BOOL)containsSuggestionsWidget;
- (void)enumerateApps:(id /* block */)a0;
- (id)_leafIconsFromExistingData;
- (unsigned long long)hash;
- (BOOL)containsAppPredictionPanel;
- (void)encodeWithCoder:(id)a0;
- (void)enumerateAppsConsideringFolders:(BOOL)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initFromDictionaryRepresentation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)nonFolderAppsOnPage;
- (BOOL)_containsWidgetWithExtensionBundleId:(id)a0;

@end
