@class NSString;

@interface NSSQLPrimaryKey : NSSQLColumn {
    NSString *_name;
}

- (void)copyValuesForReadOnlyFetch:(id)a0;
- (id)name;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (void)dealloc;

@end
