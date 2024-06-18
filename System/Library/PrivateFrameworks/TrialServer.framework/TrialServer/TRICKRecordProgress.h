@interface TRICKRecordProgress : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) unsigned long long transferred;

+ (id)progressWithSize:(unsigned long long)a0 transferred:(unsigned long long)a1;

- (id)init;
- (id)copyWithReplacementTransferred:(unsigned long long)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementSize:(unsigned long long)a0;
- (BOOL)isEqualToProgress:(id)a0;
- (id)initWithSize:(unsigned long long)a0 transferred:(unsigned long long)a1;

@end
