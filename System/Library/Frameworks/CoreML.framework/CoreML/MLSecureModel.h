@class NSXPCConnection, MLModelDescription, MLModelMetadata, NSObject;
@protocol CoreMLModelSecurityProtocol;

@interface MLSecureModel : MLModel <MLModeling, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSXPCConnection *connectionToModelSecurityService;
@property (retain, nonatomic) NSObject<CoreMLModelSecurityProtocol> *secureModelProxy;
@property (retain, nonatomic) MLModelDescription *modelDescription;
@property (readonly) MLModelMetadata *metadata;

+ (id)modelWithContentsOfURL:(id)a0 configuration:(id)a1 decryptCredential:(id)a2 error:(id *)a3;
+ (id)modelWithContentsOfURL:(id)a0 decryptCredential:(id)a1 error:(id *)a2;
+ (id)sandboxExtensionPathsForModelURL:(id)a0;
+ (id)sandboxExtensionTokenForModelURL:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)parameterValueForKey:(id)a0 error:(id *)a1;
- (id)predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)predictionsFromBatch:(id)a0 error:(id *)a1;

@end
