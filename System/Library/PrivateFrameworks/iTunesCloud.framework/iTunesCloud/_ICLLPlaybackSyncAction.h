@class NSString;

@interface _ICLLPlaybackSyncAction : PBCodable <NSCopying> {
    NSString *_participantState;
    int _payload;
    NSString *_transportControlState;
    struct { unsigned char payload : 1; } _has;
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
