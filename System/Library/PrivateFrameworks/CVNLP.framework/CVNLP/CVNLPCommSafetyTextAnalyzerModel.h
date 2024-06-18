@class NLModel, NSString;

@interface CVNLPCommSafetyTextAnalyzerModel : NSObject {
    NLModel *_model;
    NSString *_className;
    double _threshold;
}

- (void).cxx_destruct;
- (id)description;
- (BOOL)detectSensitivityForString:(id)a0;
- (id)initWithModel:(id)a0 className:(id)a1 threshold:(double)a2;

@end
