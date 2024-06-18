@class PTCinematographyRefinement;

@interface BWRefinedCinematographyNode : BWNode {
    PTCinematographyRefinement *_refinementSession;
    BOOL _isRefinementSessionActive;
}

+ (void)initialize;

- (id)init;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeType;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)dealloc;

@end
