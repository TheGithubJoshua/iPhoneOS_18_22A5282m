@class NSMutableDictionary, NSString, CKRecordID, NSArray, NSNumber;

@interface CKDAssetRecord : NSObject

@property (retain, nonatomic) NSMutableDictionary *itemsByRecordKey;
@property (retain, nonatomic) NSMutableDictionary *rereferencedItemsByRecordKey;
@property (retain, nonatomic) NSMutableDictionary *sectionItemsByRecordKey;
@property (retain, nonatomic) NSNumber *sizeUpperBoundNumber;
@property (retain, nonatomic) NSNumber *rerefSizeUpperBoundNumber;
@property (readonly, nonatomic) NSString *recordType;
@property (readonly, nonatomic) CKRecordID *recordID;
@property (readonly) unsigned int sizeUpperBound;
@property (readonly) unsigned int rerefSizeUpperBound;
@property (readonly, nonatomic) NSArray *allMMCSItems;
@property (readonly, nonatomic) NSArray *allMMCSSectionItems;

- (BOOL)isPackageSectionRecord;
- (id)allRecordKeys;
- (id)allRereferenceMMCSItems;
- (BOOL)isAssetRecord;
- (id)firstMMCSSectionItemError;
- (BOOL)isEmpty;
- (void)addMMCSSectionItem:(id)a0;
- (id)allRegularAndSectionAndRereferenceItemsWithRecordKey:(id)a0;
- (void)addRereferencedMMCSItem:(id)a0;
- (void)addMMCSItem:(id)a0;
- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)description;
- (id)allRegularAndSectionAndRereferenceItems;
- (BOOL)isEmptyOfRereferencesAssets;
- (id)firstMMCSItemError;
- (id)allMMCSAndSectionItems;
- (id)initWithRecordType:(id)a0 recordID:(id)a1;

@end
