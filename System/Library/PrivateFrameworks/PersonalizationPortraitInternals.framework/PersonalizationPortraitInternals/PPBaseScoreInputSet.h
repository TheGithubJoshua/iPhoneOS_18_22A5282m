@class _PASLock;

@interface PPBaseScoreInputSet : NSObject {
    _PASLock *_scalarMap;
    _PASLock *_arrayMap;
    _PASLock *_objectMap;
}

- (id)init;
- (unsigned long long)undefinedArrayScoreIndex;
- (unsigned long long)undefinedScalarScoreIndex;
- (unsigned long long)minScalarScoreIndex;
- (unsigned long long)undefinedObjectScoreIndex;
- (unsigned long long)minObjectScoreIndex;
- (unsigned long long)scalarScoreIndexUpperBound;
- (unsigned long long)arrayScoreIndexUpperBound;
- (unsigned long long)minArrayScoreIndex;
- (void).cxx_destruct;
- (id)nameForObjectScoreIndex:(unsigned long long)a0;
- (id)nameForArrayScoreIndex:(unsigned long long)a0;
- (unsigned long long)objectScoreIndexUpperBound;
- (id)nameForScalarScoreIndex:(unsigned long long)a0;
- (unsigned long long)indexForArrayScoreName:(id)a0;
- (unsigned long long)indexForObjectScoreName:(id)a0;
- (unsigned long long)indexForScalarScoreName:(id)a0;

@end
