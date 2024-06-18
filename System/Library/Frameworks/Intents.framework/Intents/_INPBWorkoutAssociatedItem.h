@class NSString, _INPBDataString;

@interface _INPBWorkoutAssociatedItem : PBCodable <_INPBWorkoutAssociatedItem, NSSecureCoding, NSCopying> {
    struct { unsigned char contentRating : 1; unsigned char itemLabel : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int contentRating;
@property (nonatomic) BOOL hasContentRating;
@property (copy, nonatomic) NSString *itemID;
@property (readonly, nonatomic) BOOL hasItemID;
@property (nonatomic) int itemLabel;
@property (nonatomic) BOOL hasItemLabel;
@property (retain, nonatomic) _INPBDataString *itemName;
@property (readonly, nonatomic) BOOL hasItemName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsContentRating:(id)a0;
- (int)StringAsItemLabel:(id)a0;
- (id)contentRatingAsString:(int)a0;
- (id)itemLabelAsString:(int)a0;

@end