@class NSString, MLModelDescription;
@protocol SNMLModel;

@interface SNMLLockedModel : NSObject <SNMLModel> {
    id<SNMLModel> _model;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _lock;
}

@property (readonly) MLModelDescription *modelDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
