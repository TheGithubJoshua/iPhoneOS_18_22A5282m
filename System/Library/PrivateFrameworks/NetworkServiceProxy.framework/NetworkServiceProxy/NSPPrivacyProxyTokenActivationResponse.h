@class NSMutableArray;

@interface NSPPrivacyProxyTokenActivationResponse : PBCodable <NSCopying> {
    unsigned long long _tokenExpiryTimestamp;
    NSMutableArray *_activatedTokenLists;
    struct { unsigned char tokenExpiryTimestamp : 1; } _has;
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
