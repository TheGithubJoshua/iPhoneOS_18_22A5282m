@class NSError, NSMutableDictionary;

@interface CKDMMCSItemGroupSet : NSObject

@property (retain, nonatomic) NSMutableDictionary *itemsByGroupTuple;
@property (readonly, nonatomic) NSError *error;

- (void)addItem:(id)a0;
- (id)init;
- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)description;
- (id)allItemGroups;
- (id)initWithItems:(id)a0;

@end
