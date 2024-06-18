@class NSArray;

@interface MADVIDocumentRecognitionRequest : MADRequest

@property (copy, nonatomic) NSArray *languages;
@property (nonatomic) unsigned long long maximumCandidateCount;
@property (nonatomic) BOOL usesLanguageDetection;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)targetResolution;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLanguages:(id)a0;

@end
