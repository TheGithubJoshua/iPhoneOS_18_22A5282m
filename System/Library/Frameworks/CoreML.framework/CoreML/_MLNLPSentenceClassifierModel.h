@class MLModelDescription;

@interface _MLNLPSentenceClassifierModel : NSObject <MLCustomModel> {
    void *_sentenceClassifierModel;
}

@property (retain) MLModelDescription *modelDescription;

- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithModelDescription:(id)a0 parameterDictionary:(id)a1 error:(id *)a2;

@end
