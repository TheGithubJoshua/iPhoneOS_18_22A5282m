@class NSString, NSSQLEntity;

@interface NSSQLRelationship : NSSQLProperty {
    NSString *_name;
    NSSQLEntity *_destinationEntity;
    NSSQLRelationship *_inverse;
}

- (id)foreignKey;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)correlationTableName;
- (id)destinationEntity;
- (id)name;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)initForReadOnlyFetchWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)sourceEntity;
- (void)_setForeignOrderKey:(id)a0;
- (void)dealloc;

@end
