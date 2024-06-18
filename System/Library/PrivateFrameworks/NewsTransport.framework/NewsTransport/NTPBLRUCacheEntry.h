@class NSData;

@interface NTPBLRUCacheEntry : PBCodable <NSCopying> {
    struct { unsigned char lastAccessed : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSData *key;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) NSData *value;
@property (nonatomic) BOOL hasLastAccessed;
@property (nonatomic) unsigned long long lastAccessed;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
