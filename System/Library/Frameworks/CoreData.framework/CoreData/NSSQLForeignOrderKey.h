@class NSString, NSSQLForeignKey;

@interface NSSQLForeignOrderKey : NSSQLColumn {
    NSString *_name;
    NSSQLForeignKey *_foreignKey;
}

- (id)foreignKey;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)name;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (void)dealloc;
- (id)toOneRelationship;
- (id)initWithEntity:(id)a0 foreignKey:(id)a1;
- (id)initForReadOnlyFetchingOfEntity:(id)a0 toOneRelationship:(id)a1;

@end
