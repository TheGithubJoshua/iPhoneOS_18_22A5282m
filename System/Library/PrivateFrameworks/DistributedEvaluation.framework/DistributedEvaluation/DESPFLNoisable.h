@class NSString, DESDataTransport;

@interface DESPFLNoisable : PBCodable <NSCopying> {
    struct { float *list; unsigned long long count; unsigned long long size; } _data32s;
    struct { double *list; unsigned long long count; unsigned long long size; } _datas;
    struct { unsigned char weight : 1; unsigned char iteration : 1; unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) int version;
@property (readonly, nonatomic) BOOL hasRecipeId;
@property (retain, nonatomic) NSString *recipeId;
@property (nonatomic) BOOL hasIteration;
@property (nonatomic) unsigned int iteration;
@property (nonatomic) BOOL hasWeight;
@property (nonatomic) double weight;
@property (readonly, nonatomic) unsigned long long datasCount;
@property (readonly, nonatomic) double *datas;
@property (readonly, nonatomic) unsigned long long data32sCount;
@property (readonly, nonatomic) float *data32s;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) BOOL hasDataTransport;
@property (retain, nonatomic) DESDataTransport *dataTransport;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (double)dataAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)addData:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setDatas:(double *)a0 count:(unsigned long long)a1;
- (void)addData32:(float)a0;
- (void)clearData32s;
- (void)clearDatas;
- (float)data32AtIndex:(unsigned long long)a0;
- (void)setData32s:(float *)a0 count:(unsigned long long)a1;

@end
