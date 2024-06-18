@class NSString, NSMutableArray, _ICLLQueueQuery;

@interface _ICLLRemoveQueueItemAction : PBCodable <NSCopying> {
    NSString *_itemId;
    _ICLLQueueQuery *_queueQuery;
    int _removeType;
    NSMutableArray *_removedItemIds;
    int _revision;
    struct { unsigned char removeType : 1; unsigned char revision : 1; } _has;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
