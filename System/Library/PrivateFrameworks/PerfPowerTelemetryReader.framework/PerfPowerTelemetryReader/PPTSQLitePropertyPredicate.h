@class NSString;

@interface PPTSQLitePropertyPredicate : PPTSQLitePredicate <NSCopying>

@property (readonly, copy, nonatomic) NSString *property;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
