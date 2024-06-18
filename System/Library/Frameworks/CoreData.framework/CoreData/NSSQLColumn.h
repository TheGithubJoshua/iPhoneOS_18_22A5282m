@class NSString;

@interface NSSQLColumn : NSSQLProperty {
    NSString *_columnName;
}

- (unsigned char)sqlType;
- (id)initWithColumnName:(id)a0 sqlType:(unsigned char)a1;
- (id)columnName;
- (void)copyValuesForReadOnlyFetch:(id)a0;
- (unsigned int)slot;
- (id)initWithEntity:(id)a0 propertyDescription:(id)a1;
- (id)description;
- (void)dealloc;
- (id)initForReadOnlyFetching;

@end
