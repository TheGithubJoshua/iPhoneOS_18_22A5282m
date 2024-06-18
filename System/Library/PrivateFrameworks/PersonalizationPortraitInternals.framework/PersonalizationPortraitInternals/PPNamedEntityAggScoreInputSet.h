@interface PPNamedEntityAggScoreInputSet : PPBaseScoreInputSet

- (unsigned long long)undefinedArrayScoreIndex;
- (unsigned long long)undefinedScalarScoreIndex;
- (unsigned long long)minScalarScoreIndex;
- (unsigned long long)undefinedObjectScoreIndex;
- (unsigned long long)minObjectScoreIndex;
- (unsigned long long)scalarScoreIndexUpperBound;
- (unsigned long long)arrayScoreIndexUpperBound;
- (unsigned long long)minArrayScoreIndex;
- (id)nameForObjectScoreIndex:(unsigned long long)a0;
- (id)nameForArrayScoreIndex:(unsigned long long)a0;
- (unsigned long long)objectScoreIndexUpperBound;
- (id)nameForScalarScoreIndex:(unsigned long long)a0;

@end
