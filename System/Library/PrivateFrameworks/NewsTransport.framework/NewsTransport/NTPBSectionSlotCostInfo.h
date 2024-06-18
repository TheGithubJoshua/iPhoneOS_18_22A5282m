@interface NTPBSectionSlotCostInfo : PBCodable <NSCopying> {
    struct { unsigned char headlineSlotCost : 1; unsigned char sectionFooterSlotCost : 1; unsigned char sectionTitleSlotCost : 1; } _has;
}

@property (nonatomic) BOOL hasSectionTitleSlotCost;
@property (nonatomic) double sectionTitleSlotCost;
@property (nonatomic) BOOL hasHeadlineSlotCost;
@property (nonatomic) double headlineSlotCost;
@property (nonatomic) BOOL hasSectionFooterSlotCost;
@property (nonatomic) double sectionFooterSlotCost;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
