@class NSArray, NSDictionary, NSString, NSEntityDescription;

@interface NSEntityStoreMapping : NSStoreMapping {
    NSEntityDescription *_entity;
    NSDictionary *_propertyMappings;
    NSArray *_primaryKeys;
    BOOL _isSingleTableEntity;
    NSString *_subentityColumn;
    unsigned int _subentityID;
}

- (id)entity;
- (id)initWithEntity:(id)a0;
- (BOOL)isSingleTableEntity;
- (id)propertyMappings;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)primaryKeys;
- (void)dealloc;
- (id)subentityColumn;
- (unsigned int)subentityID;

@end
