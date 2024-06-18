@class NSValue, NSString;

@interface PDBuildMapKey : NSObject <NSCopying> {
    NSValue *mDrawableValue;
    NSString *mGroupId;
}

- (id)init;
- (unsigned long long)hash;
- (id)groupId;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setGroupId:(id)a0;
- (id)drawable;
- (void)setDrawable:(id)a0;
- (id)initWithDrawable:(id)a0 groupId:(id)a1;

@end
