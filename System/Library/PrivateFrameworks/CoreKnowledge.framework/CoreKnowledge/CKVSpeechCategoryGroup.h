@class NSSet;

@interface CKVSpeechCategoryGroup : NSObject

@property (readonly, nonatomic) NSSet *itemTypes;
@property (readonly, nonatomic) NSSet *speechCategories;

+ (id)all;
+ (id)groupForItemType:(long long)a0;
+ (id)_categoryToItemTypeCache;
+ (id)_categoryToFieldTypeMap;
+ (BOOL)_speechCategory:(id)a0 hasFieldTypes:(id)a1;
+ (id)groupForFieldTypes:(id)a0;
+ (id)_calculateGroupForItemTypeNumber:(id)a0;
+ (id)groupForSpeechCategories:(id)a0;
+ (id)_itemTypesForSpeechCategory:(id)a0;

- (unsigned long long)hash;
- (id)initWithItemTypes:(id)a0 speechCategories:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isEqualToSpeechCategoryGroup:(id)a0;
- (id)speechCategoriesDescription;

@end
