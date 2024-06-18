@class NSString;

@interface _ICLLReactionAction : PBCodable <NSCopying> {
    NSString *_itemId;
    NSString *_reaction;
    NSString *_reactionId;
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
