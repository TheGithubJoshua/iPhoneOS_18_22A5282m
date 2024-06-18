@class NSArray;

@interface PLSharedAssetsContainerIncrementalChange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long collectionChangeType;
@property (nonatomic) long long sharingChange;
@property (nonatomic) unsigned char suggestionStateChange;
@property (nonatomic) unsigned char mediaType;
@property (nonatomic) BOOL hasNoOtherAssetChangesRequiringMomentGeneration;
@property (retain, nonatomic) NSArray *highlightContainerChanges;

- (BOOL)hasChanges;
- (id)initWithCoder:(id)a0;
- (id)init;
- (BOOL)hasSharingChanges;
- (BOOL)hasSuggestionChanges;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)hasSharingOrSuggestionChanges;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addHighlightContainerChange:(id)a0 sourceHighlightID:(id)a1 destinationHighlightID:(id)a2;
- (id)debugDescription;
- (BOOL)hasChangesAffectingSharingComposition;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeChangesFrom:(id)a0;

@end
