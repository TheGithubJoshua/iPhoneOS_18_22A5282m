@class NSString;

@interface InteractionAnalysisPETInteractionEvent : PBCodable <NSCopying> {
    double _timestamp;
    NSString *_associatedMemberIDs;
    NSString *_bundleID;
    NSString *_direction;
    NSString *_eventMechanism;
    NSString *_interactionID;
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
