@protocol _CNHandleStringClassificationStrategy;

@interface CNHandleStringClassifier : NSObject

@property (readonly, nonatomic) id<_CNHandleStringClassificationStrategy> classificationStrategy;

+ (id)classificationStrategyForQuality:(unsigned long long)a0;
+ (id)classificationOfHandleStrings:(id)a0;
+ (id)classificationOfHandleStrings:(id)a0 classificationQuality:(unsigned long long)a1;

- (id)init;
- (id)initWithClassificationQuality:(unsigned long long)a0;
- (id)initWithClassificationStrategy:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)typeOfHandleString:(id)a0;
- (id)description;
- (void)classifyHandleString:(id)a0 builder:(id)a1;

@end
