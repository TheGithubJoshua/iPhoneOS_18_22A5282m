@class NSDictionary, NSMutableDictionary;

@interface PETProtobufRawDecodedMessage : PBCodable {
    NSMutableDictionary *_decodedDict;
    NSDictionary *_nestedFields;
}

- (id)dictionaryRepresentation;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithData:(id)a0 nestedFields:(id)a1;

@end
