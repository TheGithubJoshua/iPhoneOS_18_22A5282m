@class FrontendDNNEspressoModel, BackendDNNEspressoModel;

@interface DNNEngine : NSObject {
    FrontendDNNEspressoModel *mFrontendDNN;
    BackendDNNEspressoModel *mBackendDNN;
}

- (id)init;
- (void).cxx_destruct;
- (id)getBackendDNNFeatureVectorDim;
- (id)initWithFrontendMode:(unsigned long long)a0 andBackendMode:(unsigned long long)a1;
- (int)runBackend:(struct __CVBuffer { } *)a0 sparseBuffer:(float *)a1 numDepthPoints:(unsigned int)a2 result:(float *)a3;
- (int)runFrontend:(float *)a0 withSize:(int)a1 result:(id *)a2;

@end
