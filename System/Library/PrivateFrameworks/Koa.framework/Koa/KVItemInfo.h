@class NSString, KVItem, KVPriorInfo;

@interface KVItemInfo : NSObject <NSCopying> {
    KVItem *_item;
    NSString *_originAppId;
    KVPriorInfo *_priorInfo;
}

- (id)init;
- (id)item;
- (long long)itemType;
- (unsigned long long)hash;
- (id)originAppId;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)itemId;
- (id)priorInfo;
- (id)unindexedFieldsWithType:(long long)a0;
- (id)unindexedFields;
- (id)initWithItem:(id)a0 originAppId:(id)a1;
- (id)initWithItem:(id)a0 originAppId:(id)a1 priorInfo:(id)a2;
- (BOOL)isEqualToItemInfo:(id)a0;
- (void)setPriorInfo:(id)a0;

@end
