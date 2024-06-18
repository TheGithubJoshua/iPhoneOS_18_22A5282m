@class _ICLLQueryMessage, NSString, _ICLLCommandMessage, _ICLLActionMessage, _ICLLErrorMessage;

@interface _ICLLProtocolMessage : PBCodable <NSCopying> {
    _ICLLActionMessage *_action;
    _ICLLCommandMessage *_command;
    _ICLLErrorMessage *_error;
    _ICLLQueryMessage *_query;
    NSString *_traceId;
    int _type;
    struct { unsigned char type : 1; } _has;
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
