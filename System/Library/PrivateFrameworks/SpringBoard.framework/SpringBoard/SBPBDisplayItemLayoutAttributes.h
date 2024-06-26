@interface SBPBDisplayItemLayoutAttributes : PBCodable <NSCopying> {
    double _centerX;
    double _centerY;
    long long _contentOrientation;
    long long _lastInteractionTime;
    double _referenceBoundsHeightBeforeOverlapping;
    double _referenceBoundsHeightForSize;
    double _referenceBoundsWidthBeforeOverlapping;
    double _referenceBoundsWidthForSize;
    double _sizeHeight;
    double _sizeWidth;
    long long _sizingPolicy;
    double _userSizeBeforeOverlappingInBoundsHeight;
    double _userSizeBeforeOverlappingInBoundsWidth;
    int _semanticSizeTypeBeforeOverlapping;
    int _semanticSizeTypeForSize;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
