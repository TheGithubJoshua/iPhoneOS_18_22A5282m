@class MLSVREngine;

@interface MLSupportVectorRegressor : MLRegressor

@property (retain) MLSVREngine *engine;

- (id)regress:(id)a0 options:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithEngine:(id)a0 description:(id)a1 configuration:(id)a2 error:(id *)a3;

@end
