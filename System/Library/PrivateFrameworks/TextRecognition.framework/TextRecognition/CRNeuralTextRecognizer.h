@class NSString, CRNeuralRecognizerConfiguration, CRPerformanceStatistics, NSObject;
@protocol CRTextDecoding, CRRecognizerFeatureProviding, CRTextRecognizerModel;

@interface CRNeuralTextRecognizer : NSObject <CRConfidenceThresholdProviding>

@property (retain) NSObject<CRRecognizerFeatureProviding> *featureProvider;
@property (retain) NSObject<CRTextRecognizerModel> *model;
@property (retain) NSObject<CRTextDecoding> *textDecoder;
@property long long resourceUsers;
@property BOOL shouldCancel;
@property unsigned int desiredQoS;
@property (retain) CRPerformanceStatistics *inferenceStats;
@property (retain) CRPerformanceStatistics *decodingStats;
@property (retain) CRNeuralRecognizerConfiguration *configuration;
@property BOOL unloadResourcesWhenNotInUse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_modelForRevision:(long long)a0 configuration:(id)a1 error:(id *)a2;
+ (id)_textDecoderForRevision:(long long)a0 configuration:(id)a1 model:(id)a2 error:(id *)a3;
+ (id)recognizerForLocale:(id)a0 imageReaderOptions:(id)a1 error:(id *)a2;

- (id)init;
- (void)cancel;
- (void).cxx_destruct;
- (BOOL)_isCancelled;
- (void)_unloadResources;
- (BOOL)preheatWithError:(id *)a0;
- (id)_featureProviderWithError:(id *)a0;
- (BOOL)_loadResourcesWithError:(id *)a0;
- (void)_releaseIntermediateResources;
- (BOOL)performWithResource:(id /* block */)a0 error:(id *)a1;
- (id)recognizeInImage:(id)a0 textFeatures:(id)a1 progressHandler:(id /* block */)a2 error:(id *)a3;
- (BOOL)shouldModelSupportCharacterBoxes;
- (BOOL)shouldUseLM;
- (id)thresholdsForTextFeature:(id)a0;

@end
