@class NSString, NSData, NSMutableArray;

@interface NSPPrivacyProxyTokenInfo : PBCodable <NSCopying> {
    NSString *_proxyURL;
    NSData *_tokenKeyID;
    NSMutableArray *_unactivatedTokenLists;
    NSString *_vendor;
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
